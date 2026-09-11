properties([
	gitLabConnection('gitlab'),
	[$class: 'ParametersDefinitionProperty', 
		parameterDefinitions: [
			[$class: 'StringParameterDefinition', name: 'branch', defaultValue: 'master', description: 'the branch to build'],
			[$class: 'StringParameterDefinition', name: 'apiUrl', defaultValue: 'https://api-qa.aspose.cloud', description: 'api url'],
            [$class: 'BooleanParameterDefinition', name: 'ignoreCiSkip', defaultValue: false, description: 'ignore CI Skip'],
            [$class: 'StringParameterDefinition', name: 'credentialsId', defaultValue: '6839cbe8-39fa-40c0-86ce-90706f0bae5d', description: 'credentials id'],
            [$class: 'BooleanParameterDefinition', name: 'packageTesting', defaultValue: false, description: 'Testing package from repository without local sources. Used for prodhealthcheck'],
		]
	]
])

def buildCacheImage = "git.auckland.dynabic.com:4567/words-cloud/api/cpp"
def needToBuild = false
def packageTesting = false

node('words-linux') {
    try {
        stage('checkout'){
            packageTesting = params.packageTesting
            if (packageTesting) {
                needToBuild = true
                checkout([$class: 'GitSCM', branches: [[name: 'release']], doGenerateSubmoduleConfigurations: false, extensions: [], submoduleCfg: [], userRemoteConfigs: [[url: 'https://github.com/aspose-words-cloud/Aspose.Words-Cloud-SDK-for-Cpp.git']]])
            }
            else {
                checkout([$class: 'GitSCM', branches: [[name: params.branch]], doGenerateSubmoduleConfigurations: false, extensions: [], submoduleCfg: [], userRemoteConfigs: [[credentialsId: '361885ba-9425-4230-950e-0af201d90547', url: 'https://git.auckland.dynabic.com/words-cloud/words-cloud-cpp.git']]])
                sh 'git show -s HEAD > gitMessage'
                def commitMessage = readFile('gitMessage').trim()
                echo commitMessage
                needToBuild = params.ignoreCiSkip || !commitMessage.contains('[ci skip]')
            }
            
            sh 'git clean -fdx'
        }
        
        if (needToBuild) {
            stage('build') {
                withCredentials([usernamePassword(credentialsId: 'cc2e3c9b-b3da-4455-b702-227bcce18895', usernameVariable: 'dockerrigistry_login', passwordVariable: 'dockerregistry_password')]) {
                    sh 'docker login -u "${dockerrigistry_login}" -p "${dockerregistry_password}" git.auckland.dynabic.com:4567'
                    sh (script: "docker pull ${buildCacheImage}/linux:latest")
                    sh (script: "docker build --cache-from=${buildCacheImage}/linux:latest -t ${buildCacheImage}/linux:latest -t aspose-words-cloud-cpp-tests:linux - < Dockerfile.linux")
                    sh (script: "docker push ${buildCacheImage}/linux:latest")
                }
            }
            stage('tests') {
                withCredentials([usernamePassword(credentialsId: params.credentialsId, passwordVariable: 'WordsClientSecret', usernameVariable: 'WordsClientId')]) {
                    try {
                        // Pre-create the bind-mount source: docker would otherwise create it as root.
                        sh 'mkdir -p out'
                        // Run as the agent user, otherwise the cmake build tree the script writes into
                        // the mounted workspace is owned by root and deleteDir()/cleanWs() cannot remove it.
                        // HOME must point somewhere writable: a uid absent from the image's /etc/passwd
                        // resolves HOME to "/".
                        sh 'docker run --rm --user "$(id -u):$(id -g)" -e HOME=/tmp -v "$PWD/out:/out/" -v "$PWD:/aspose-words-cloud-cpp" aspose-words-cloud-cpp-tests:linux bash /aspose-words-cloud-cpp/scripts/runTestsDocker.sh $WordsClientId $WordsClientSecret $apiUrl'
                    } finally {
                        junit '**\\out\\test_result.xml'
                    }
                    
                    if (currentBuild.result == "UNSTABLE") {
                        currentBuild.result = "FAILURE"
                    }
                }
            }
        }
    } finally {
        deleteDir()
		cleanWs()
    }
}