/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="test_base.cpp">
*   Copyright (c) 2026 Aspose.Words for Cloud
* </copyright>
* <summary>
*   Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
* 
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.
* 
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
* </summary> 
-------------------------------------------------------------------------------------------------------------------- **/

// Include all testsing cases
#include "./api/append_document_test.h"
#include "./api/bookmark_test.h"
#include "./api/build_report_test.h"
#include "./api/comment_test.h"
#include "./api/compare_document_test.h"
#include "./api/compatibility_test.h"
#include "./api/compress_document_test.h"
#include "./api/convert_document_test.h"
#include "./api/custom_xml_parts_test.h"
#include "./api/document_test.h"
#include "./api/document_properties_test.h"
#include "./api/document_protection_test.h"
#include "./api/document_statistics_test.h"
#include "./api/document_with_format_test.h"
#include "./api/drawing_objects_test.h"
#include "./api/execute_mail_merge_test.h"
#include "./api/execute_template_test.h"
#include "./api/execute_template_with_field_options_test.h"
#include "./api/field_test.h"
#include "./api/file_test.h"
#include "./api/folder_test.h"
#include "./api/font_test.h"
#include "./api/footnote_test.h"
#include "./api/form_field_test.h"
#include "./api/header_footer_test.h"
#include "./api/hyperlink_test.h"
#include "./api/info_test.h"
#include "./api/lists_test.h"
#include "./api/load_web_document_test.h"
#include "./api/macros_test.h"
#include "./api/mail_merge_fileds_test.h"
#include "./api/math_object_test.h"
#include "./api/page_setup_test.h"
#include "./api/paragraph_test.h"
#include "./api/password_encryption_test.h"
#include "./api/range_test.h"
#include "./api/revisions_test.h"
#include "./api/run_test.h"
#include "./api/section_test.h"
#include "./api/signature_test.h"
#include "./api/split_document_to_format_test.h"
#include "./api/structured_document_tag_test.h"
#include "./api/styles_test.h"
#include "./api/table_test.h"
#include "./api/table_border_test.h"
#include "./api/text_test.h"
#include "./api/watermark_test.h"
#include "./other/readme_test.h"
#include "./other/url_encode_test.h"
#include "./other/examples_test.h"
#include "./other/batch_test.h"

// Include support headers
#include <filesystem>
#include <random>
#include <fstream>
#include <string>
#include <sstream>
#include "./test_base.h"

// USE THIRD PARTY LIBS ONLY IN CPP FILES!!!
#include "../thirdparty/json.hpp"
#include "../thirdparty/utf8.h"

inline std::wstring convertUtf8(const std::string& value)
{
    std::wstring result;
    ::utf8::utf8to16(value.begin(), value.end(), back_inserter(result));
    return result;
}

std::shared_ptr<ApiConfiguration> InfrastructureTest::getConfig()
{
    std::string credentialsUtf8 = InfrastructureTest::getFileText(getSdkRoot() + L"/settings/servercreds.json");
    auto fileJson = ::nlohmann::json::parse(credentialsUtf8);
    auto config = std::make_shared<ApiConfiguration>(
        convertUtf8(fileJson.contains("ClientId") ? fileJson["ClientId"].get<std::string>() : ""),
        convertUtf8(fileJson.contains("ClientSecret") ? fileJson["ClientSecret"].get<std::string>() : ""),
        convertUtf8(fileJson.contains("BaseUrl") ? fileJson["BaseUrl"].get<std::string>() : "")
    );
    if (fileJson.contains("DebugMode")) {
        config->setDebugMode(fileJson["DebugMode"].get<bool>());
    }
    return config;
}

std::wstring InfrastructureTest::getSdkRoot()
{
    return std::filesystem::current_path().wstring();
}

std::wstring InfrastructureTest::getDataDir(const std::wstring& subfolder) const
{
    return localTestDataFolder + L"/" + subfolder;
}

std::wstring InfrastructureTest::createRandomGuid() const
{
    static std::random_device dev;
    static std::mt19937 rng(dev());

    std::uniform_int_distribution<int> dist(0, 15);

    const wchar_t* v = L"0123456789abcdef";
    const bool dash[] = { 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0 };

    std::wstring res;
    for (int i = 0; i < 16; i++) {
        if (dash[i]) res += L"-";
        res += v[dist(rng)];
        res += v[dist(rng)];
    }
    return res;
}

std::string InfrastructureTest::getFileText(const std::wstring& file)
{
    std::ifstream fileStream(std::filesystem::path(file), std::ios::in);
    if (!fileStream.good())
    {
        throw L"Failed to open file: " + file;
    }

    std::stringstream buffer;
    buffer << fileStream.rdbuf();
    return buffer.str();
}

std::wstring InfrastructureTest::getFileTextUtf16(const std::wstring& file)
{
    std::wifstream fileStream(std::filesystem::path(file), std::ios::in);
    if (!fileStream.good())
    {
        throw L"Failed to open file: " + file;
    }

    std::wstringstream buffer;
    buffer << fileStream.rdbuf();
    return buffer.str();
}

void InfrastructureTest::uploadFileToStorage(const std::wstring& localPath, const std::wstring& remotePath)
{
    auto request = std::shared_ptr<aspose::words::cloud::requests::UploadFileRequest>(
        new aspose::words::cloud::requests::UploadFileRequest(
            std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(localPath), std::ifstream::binary)),
            std::make_shared<std::wstring>(remotePath)
        )
    );
    auto result = getApi()->uploadFile(request);
    ASSERT_TRUE(result->getErrors()->size() == 0);
    ASSERT_TRUE(result->getUploaded()->size() == 1);
}

std::shared_ptr<api::WordsApi> InfrastructureTest::getApi()
{
    static std::shared_ptr<api::WordsApi> wordsApi = std::make_shared<api::WordsApi>(getConfig());
    return wordsApi;
}
