Aspose.Words Cloud SDK for C++ wraps Aspose.Words REST API so you could seamlessly integrate Microsoft Word® document generation, manipulation, conversion & inspection features into your own C++ applications.

# Word Document Processing in the Cloud

[Aspose.Words Cloud SDK for C++](https://products.aspose.cloud/words/cpp) allows to work with document headers, footers, page numbering, tables, sections, document comments, drawing objects, FormFields, fonts, hyperlinks, ranges, paragraphs, math objects, watermarks, track changes and document protection. It also assists in appending documents, splitting documents as well as converting document to other supported file formats. 

Feel free to explore the [Developer's Guide](https://docs.aspose.cloud/display/wordscloud/Developer+Guide) & [API Reference](https://apireference.aspose.cloud/words/) to know all about Aspose.Words Cloud API. 

## Document Processing Features

- Convert between various document-related formats, including Word to PDF & vice versa.
- Mail merge and report generation in the Cloud.
- Split & merge Word documents.
- Access Word document metadata.
- Find and replace text.
- Add & remove watermarks and protection.
- Read & write access to Document Object Model.
- Thread safe

## Enhancements in Version 26.9

- Added 'CompressionLevel' property for XpsSaveOptionsData class.


## Enhancements in Version 26.6

- Download file with chunks was fixed.


## Enhancements in Version 26.4

- Implemented jobs system to perform operations without an active connection to the server.
- Added job operations: 'AppendDocumentJob', 'AppendDocumentOnlineJob', 'ConvertDocumentJob', 'ExecuteMailMergeJob', 'ExecuteMailMergeOnlineJob', 'SplitDocumentJob', 'SplitDocumentOnlineJob'.


## Enhancements in Version 26.3

- Various stability and performance improvements.


## Enhancements in Version 26.2

- Implemented ability to save documents as Docling JSON format.


## Enhancements in Version 26.1

- Add fontsLocation parameter for Compare API.


## Enhancements in Version 25.12

- Classification API has been removed.


## Enhancements in Version 25.11

- Added 'OfficeMathExportMode' property for TextSaveOptionsData class.
- Added 'ExportFloatingShapesAsInlineTag' property for PdfSaveOptionsData class.


## Enhancements in Version 25.8



## Enhancements in Version 25.6

- Added support for SVG images format in Watermark API.
- Added 'RemoveJavaScriptFromLinks' property for HtmlSaveOptionsData class.


## Enhancements in Version 25.5

- Added data models support for classes 'CommentRangeStart', 'CommentRangeEnd'.
- Added data models support for classes 'FormFieldCheckboxLink', 'FormFieldDropDownLink', 'FormFieldTextInputLink'.


## Enhancements in Version 25.4

- Added 'AttachmentsEmbeddingMode' property for PdfSaveOptionsData class.
- Added 'UpdateAmbiguousTextFont' property for SaveOptionsData class.
- Added 'Granularity' property for CompareOptions class.


## Enhancements in Version 25.2

- Added 'IdPrefix' property for HtmlFixedSaveOptionsData and SvgSaveOptionsData class.


## Enhancements in Version 24.12

- Added 'RenderChoiceFormFieldBorder' property for PdfSaveOptionsData class.
- Added 'ApplySuperscript' property for ReplaceTextParameters class.


## Enhancements in Version 24.11

- Added GetAllRevisions method to obtain all available revisions in document.
- Added AppendAllEntriesToOneSection parameter to AppendDocument method to append entries to the same section.


## Enhancements in Version 24.9

- Added digital signature methds for DOC, DOCX, XPS, or ODT documents.
- Added ReplaceBackslashWithYenSign property for XpsSaveOptions and HtmlSaveOptions.
- Added DigitalSignature property for XpsSaveOptions.
- Added UseSdtTagAsFormFieldName property for PdfSaveOptions.
- Added MergeWholeDocument parameter to the MailMerge operations to update fields in whole document after executing of a mail merge with regions.


## Enhancements in Version 24.8

- Added the support of OpenType standard. It is usefull for languages required advanced typography.


## Enhancements in Version 24.7

- Added support for azw3 (Amazon Kindle Format) documents.
- Added 'MaxImageResolution' property for SvgSaveOptionsData class.


## Enhancements in Version 24.6

- Added the 'TranslateNodeId' method to transalate a node id to a node path.


## Enhancements in Version 24.5

- Added the support of multistorage operations. Saving a file as a result of an operation can be performed in a specific storage, when, used file path in the next format '@storage:path/to/file.doc'.


## Enhancements in Version 24.4

- Added the 'MergeWithNext' method to merge a section with the next one.
- Added the 'LockAspectRatio' propperty for DrawingObjectInsert and DrawingObjectUpdate methods.


## Enhancements in Version 24.3

- Added support for 'RemoveEmptyCells' option for the 'Cleanup' parameter in the insert 'MailMerge' API method.


## Enhancements in Version 24.1

- Added support for InsertAfterNode in the insert API without NodePath.
- Added support for inserting nodes (runs/rows/cells/bookmarks) without NodePath.
- Added support for transparency in the Watermark API.
- Added support for password and encryptedPassword fields in FileReference.
- Fixed missing href value in document responses.


## Enhancements in Version 23.12

- Properties Name, Text, StartRange, EndRange marked as required for InsertBookmark operation.
- Implemented DeleteOfficeMathObjects operation to delete all office math objects from document.
- Parameter ProtectionRequest was removed from the UnprotectDocument operation. Now removing protection from a document does not require a password.
- Model ProtectionRequest marked as deprecated, please use ProtectionRequestV2 instead for perform ProtectDocument operation. To change the password or protection type of protected document, the old password is no required.
- Added fields Password and EncryptedPassword to FileReference for documents encrypted by password.
- Removed parameter encryptedPassword2 from CompareDocument method. Please use FileReference password instead.


## Enhancements in Version 23.11

- Support of required properties in models.
- Property StyleName marked as required for InsertStyle operation.
- Property StyleName marked as required for CopyStyle operation.
- Property StyleName marked as required for ApplyStyleToDocumentElement operation.
- Properties SdtType and Level marked as required for InsertStructuredDocumentTag operation.
- Property Text marked as required for InsertParagraphoperation.
- Property Value marked as required for CreateOrUpdateDocumentProperty operation.
- Property NewValue marked as required for ReplaceText operation.
- Property Text marked as required for ReplaceWithText operation.


## Enhancements in Version 23.9

- Support for class inheritance in responses from the server.


## Enhancements in Version 23.6

- Fix XMLHttpRequest in web applications.


## Enhancements in Version 23.5

- Added InsertSection method.


## Enhancements in Version 23.4

- Added new type of RangeEndIdentifier for RangeApi: document:end


## Enhancements in Version 23.3

- Fix compatibility between CreateDocument API and Dropbox storage.
- Fix compatibility for property PageCount for FixedPageSaveOptionsData.


## Enhancements in Version 23.2

- Added operations to manipulate with Structure Document Tags (SDT) in documents.


## Enhancements in Version 23.1

- Various changes related to stability and performance


## Enhancements in Version 22.12

- Various changes related to stability and performance


## Enhancements in Version 22.11

- Added 'EmbedAttachments' property for PdfSaveOptionsData class.


## Enhancements in Version 22.10

- Added 'CacheHeaderFooterShapes' property for PdfSaveOptionsData class.
- FileReference structure has been added that allows to determine how the document will be accessed: from the remote storage, or loaded directly in the request.
- The 'AppendDocument' and 'AppendDocumentOnline' methods takes a 'FileReference' instead of an 'href' property.
- Added property 'StartingNumber' for 'PageNumbers' class.
- Added property 'GlobalCultureName' for 'FieldOptions' class.


## Enhancements in Version 22.9

- CompressDocument method now can handle images.
- Added support to convert password protected document using ConvertDocument API.


## Enhancements in Version 22.8

- Added optional loadEncoding and password parameters for ConvertDocument API method.


## Enhancements in Version 22.7

- Expand 'AppendDocument' API method to support 'ImageEntryList' for directly appending images to documents and another images.
- Added 'CompressDocument' API method to support compression and resizing images inside the document for reduce the size of the document.


## Enhancements in Version 22.6

- Added 'DeleteBookmark' and 'DeleteBookmarkOnline' API methods for delete bookmarks by name from the document.
- Added 'DeleteBookmarks' and 'DeleteBookmarksOnline' API methods for delete all bookmarks from the document.
- Added 'InsertBookmark' and 'InsertBookmarkOnline' API methods for create new bookmarks in the document.
- Support all save formats for 'CreateDocument' operation.


## Enhancements in Version 22.5

- Internal API fixes and improvments.


## Enhancements in Version 22.4

- Added ExportShapesAsSvg to HtmlSaveOption.
- Added new endpoint '~/styles/copy_from'.


## Enhancements in Version 22.3

- Online methods returns the dictionary of files with included original filename as key instead of single file content in responses.
- Parameters contained sensitive data should be passed in encrypted form. Names of the parameters have 'encrypted' prefix.
- Added Encrypt method to encrypt data on the API public key. Use it to prepare values for parameters required encrypted data.
- Changed type of enumerations for members of SaveOptionsData and other inherited classes from string to enum.


## Enhancements in Version 22.2

- Made 'SaveOprionsData.SaveFormat' property readonly with default value.
- Added subclasses for all formats of SaveOprionsData with specified SaveFormat.
- 'SaveOptionsData', 'FixedPageSaveOptionsData', 'ImageSaveOptionsData', 'OoxmlSaveOptionsData', 'TxtSaveOptionsBaseData' classes now is abstract.


## Enhancements in Version 22.1

- Added 'FieldOptions.FieldUpdateCultureName' to set Culture for fields
- Added 'DocumentEntry.Password' to set an encrypted password for appending document
- Added 'encryptedPassword2' query parameter to CompareDocuments to set an encrypted password for the second comparing document


## Enhancements in Version 21.12

- Added FieldOptions parameter to mail merge operations
- Added timeout parameter to api configuration


## Enhancements in Version 21.11

- Support encryption of 'CommonRequest.Password'. Automatic encryption of all passwords sent to the API server as request parameters.

## Enhancements in Version 21.10

- Removed 'GraphicsQualityOptions' image save option as it no longer supported.
- Added query parameter 'displayIntermediateResults' for batch requests. If 'false', the last response in batch will be returned only. Default is 'true'
- Added 'JsonDataLoadOptions' and 'XmlDataLoadOptions' to 'ReportEngineSettings'


## Enhancements in Version 21.8

- Added new api methods to get, insert, update or delete custom xml parts from documents.
- Added parameter 'ResultDocumentFormat' to Compare API
- Added 'ExportLanguageToSpanTag' pdf save option
- Added 'FlatOpcXmlMappingOnly' save option


## Enhancements in Version 21.7

- ImlRenderingMode option introduced witch is used to determine how ink (InkML) objects are rendered
- MaxCharactersPerLine option introduced which is used to specify the maximum number of characters per one line
- Added new API method to get a RSA public key to encrypt document passwords
- Added encryptedPassword common query option to pass an encrypted document password


## Enhancements in Version 21.6

- Implemented beta version of CompareDocumentOnline feature with both document sending in request
- CompareDocument method now can handle PDF files
- AcceptAllRevisionsBeforeComparison option introduced which is used to specify if accept all revisions before comparison


## Enhancements in Version 21.5

- Update dependencies in sdk


## Enhancements in Version 21.4

- Removed obsolete pdf save option 'EscapeUri'
- SaveOptions now contains CustomTimeZoneInfo to set custom timezone when SdtType.Date structured document tag updated from custom XML
- Url of child requests in batch can be full now (earlier it can be only relative)
- Added 'RquestId' header to all responses
- Remove boost and cpprest dependencies
- Add openssl dependency
- Support online methods
- Support batch requests
- Added DependsOn and ResultOf features support for batch requests

## Enhancements in Version 21.3

- Added 'UpdateCreatedTimeProperty' save option
- Added Tables into HeaderFooter so it's possible to address paragraphs inside table which is located in headerfooter (sections/0/headersfooters/1/tables/0/rows/0/cells/0/paragraphs/0)


## Enhancements in Version 21.2

- Added delete all comments method


## Enhancements in Version 21.1

- Added online version for all API methods


## Enhancements in Version 20.11

- In configuration json file appSid / appKey has been replaced to clientId / clientSecret.
- In Words API initialization methods clientId parameter precedes clientSecret parameter.
- Fixed the problem with methods passing boolean values as query parameters (they were ignored by the server).

## Enhancements in Version 20.10

- Internal API changes.


## Enhancements in Version 20.9

- Added Batch API feature


## Enhancements in Version 20.8

- Added new api method (PUT '/words/{name}/compatibility/optimize') which is allows to optimize the document contents as well as default Aspose.Words behavior to a particular versions of MS Word
- Added 'ApplyBaseDocumentHeadersAndFootersToAppendingDocuments' option to 'DocumentEntryList' for AppendDocument API
- WithoutNodePath methods have been removed, pass null values instead


## Enhancements in Version 20.7

- Added 'Markdown' save format
- Added endpoint to update paragraph format without node path (PUT '/words/{name}/paragraphs/{index}/format')


## Enhancements in Version 20.6

- Added new methods:
  - DeleteAllParagraphTabStopsWithoutNodePath
  - DeleteParagraphTabStopWithoutNodePath
  - GetParagraphTabStopsWithoutNodePath
  - InsertOrUpdateParagraphTabStopWithoutNodePath
  - InsertParagraphWithoutNodePath
  - UpdateParagraphFormatWithoutNodePath
  - UpdateParagraphListFormatWithoutNodePath
  - DeleteParagraphListFormatWithoutNodePath
- DrawingObject related methods have been changed body content. Special request classes are introduced instead of strings.
- InsertOrUpdateParagraphTabStop, DeleteParagraphTabStop methods have been changed parameter order
- OoxmlSaveOptionsData.CompressionLevel property has been added


## Enhancements in Version 20.5

- Added methods to work with Word document lists
  - GetLists
  - GetList
  - InsertList
  - UpdateList
  - UpdateListLevel
- Added methods to work with styles
  - GetStyles
  - UpdateStyle
  - InsertStyle
  - CopyStyle
  - GetStyleFromDocumentElement
  - ApplyStyleToDocumentElement
- Added methods to work with paragraph list format
  - GetParagraphListFormat
  - GetParagraphListFormatWithoutNodePath
  - UpdateParagraphListFormat
  - DeleteParagraphListFormat
- Added methods to work with paragraph tab stops
  - GetParagraphTabStops
  - InsertOrUpdateParagraphTabStop
  - DeleteAllParagraphTabStops
  - DeleteParagraphTabStop
- Added methods to build reports
  - BuildReport
  - BuildReportOnline
- Added Shading property to ParagraphFormat


## Read & Write Document Formats

**Microsoft Word:** DOC, DOCX, RTF, DOT, DOTX, DOTM, FlatOPC (XML)
**OpenOffice:** ODT, OTT
**WordprocessingML:** XML
**Web:** HTML, MHTML, HtmlFixed
**Text:** TXT
**Fixed Layout:** PDF

## Save Document As

**Fixed Layout:** PDF/A, XPS, OpenXPS, PS
**Images:** JPEG, PNG, BMP, SVG, TIFF, EMF
**Others:** PCL

## Getting Started with Aspose.Words Cloud SDK for C++

Firstly, create an account at [Aspose for Cloud](https://dashboard.aspose.cloud/#/apps) to get your application information and free quota to use the API. 

### SDK Dependencies

- [OpenSSL 1.1.1 or newer](https://www.openssl.org/)

### How to build Aspose.Words.Cloud SDK on Windows

Build Aspose.Words.Cloud SDK
- Install [Microsoft Visual Studio 2019](https://visualstudio.microsoft.com/)
- Intsall [CMake 3.7 or newer](https://cmake.org/download/) and add "<CMAKE_INSTALATION_FOLDER>/bin" to PATH environment variable.
- Install [VcPkg](https://github.com/Microsoft/vcpkg) and add "<VCPKG_INSTALATION_FOLDER>" and "<VCPKG_INSTALATION_FOLDER>/installed/x64-windows" to PATH environment variable.

```cmd
vcpkg install openssl:x64-windows
git clone https://github.com/aspose-words-cloud/Aspose.Words-Cloud-SDK-for-Cpp
cd aspose-words-cloud-cpp
mkdir .\build
cmake -G "Visual Studio 16 2019" -Thost=x64 -Ax64 -S . -B ./build
cmake --build ./build --config Release --target aspose_words_cloud_sdk
```

Create servercreds.json in '<SDK-ROOT>/settings' directory:
````
{
    "ClientId" : "xxxx",
    "ClientSecret" : "xxxxx"
}
````

Run tests
```cmd
cmake --build .\build --config Debug --target aspose_words_cloud_test
cmake -E chdir ./build ctest -V -C Debug
```

### How to build and test Aspose.Words.Cloud SDK on Linux

Required packages:
 - gcc >= 8.1
 - cmake >= 3.7
 - openssl >= 1.1.1

Build Aspose.Words.Cloud SDK
```cmd
sudo apt-get install gcc cmake openssl-dev
git clone https://github.com/aspose-words-cloud/Aspose.Words-Cloud-SDK-for-Cpp
cd aspose-words-cloud-cpp
mkdir -p ./build

cmake -DCMAKE_BUILD_TYPE=Release -S . -B ./build 
cmake --build ./build --config Release --target aspose_words_cloud_sdk
```

Create servercreds.json in '<SDK-ROOT>/settings' directory:
````
{
    "ClientId" : "xxxx",
    "ClientSecret" : "xxxxx"
}
````

Run tests
```cmd
cmake --build ./build --config Release --target aspose_words_cloud_test
cmake -E chdir ./build ctest -V -C Debug
```

The complete source code is available at [GitHub Repository](https://github.com/aspose-words-cloud/Aspose.Words-Cloud-SDK-for-Cpp).

## Getting started with the SDK

Add "<SDK_ROOT>/include" directory to your project includes path.
Link "<SDK_ROOT>/build/aspose_words_cloud_sdk/Release/aspose_words_cloud_sdk.lib" with your project.
Link "<SDK_ROOT>/build/bin/Release/aspose_words_cloud_sdk.dll" for windows or "<SDK_ROOT>/build/bin/Release/aspose_words_cloud_sdk.so" for linux with your project.

Typical usage of the SDK in code follows this template:
```
    // Start README example
    using namespace aspose::words::cloud;

    // Create client configuration
    auto config = std::make_shared<ApiConfiguration>(yourClientId, yourClientSecret, /*optional*/baseUrl);

    // Create API
    auto api = std::make_shared<api::WordsApi>(config);

    // Read file content
    auto stream = std::shared_ptr<std::istream>(new std::ifstream(std::filesystem::path(localPath), std::ifstream::binary));

    // upload file
    auto uploadRequest = std::shared_ptr<requests::UploadFileRequest>(
        new requests::UploadFileRequest(stream, remotePath)
    );
    auto uploadResult = api->uploadFile(uploadRequest);

    // call one of API methods
    auto request = std::shared_ptr<requests::GetSectionsRequest>(
        new requests::GetSectionsRequest(remoteName, remoteDir)
    );
    auto response = api->getSections(request);
    auto sections = response->getSections();

    // End README example
```

[Product Page](https://products.aspose.cloud/words/cpp) | [Documentation](https://docs.aspose.cloud/display/wordscloud/Home) | [API Reference](https://apireference.aspose.cloud/words/) | [Code Samples](https://github.com/aspose-words-cloud/Aspose.Words-Cloud-SDK-for-Cpp) | [Blog](https://blog.aspose.cloud/category/words/) | [Free Support](https://forum.aspose.cloud/c/words) | [Free Trial](https://dashboard.aspose.cloud/#/apps)
