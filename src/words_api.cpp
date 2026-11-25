/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="words_api.cpp">
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

#include "aspose_words_cloud.h"

namespace aspose::words::cloud::api {
    WordsApi::WordsApi(std::shared_ptr<ApiConfiguration> configuration)
        : m_ApiClient(std::make_shared<ApiClient>(configuration)) { }

    std::shared_ptr< aspose::words::cloud::models::RevisionsModificationResponse > WordsApi::acceptAllRevisions(std::shared_ptr<aspose::words::cloud::requests::AcceptAllRevisionsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::AcceptAllRevisionsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::AcceptAllRevisionsOnlineResponse> WordsApi::acceptAllRevisionsOnline(std::shared_ptr<aspose::words::cloud::requests::AcceptAllRevisionsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::AcceptAllRevisionsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::appendDocument(std::shared_ptr<aspose::words::cloud::requests::AppendDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::AppendDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< aspose::words::cloud::models::DocumentResponse > > > WordsApi::appendDocumentJob(std::shared_ptr<aspose::words::cloud::requests::AppendDocumentJobRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::AppendDocumentJobResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return std::make_shared<aspose::words::cloud::JobHandler< std::shared_ptr< aspose::words::cloud::models::DocumentResponse > > >(m_ApiClient,request->getOriginalRequest(),response->getModel());
    }

    std::shared_ptr<aspose::words::cloud::responses::AppendDocumentOnlineResponse> WordsApi::appendDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::AppendDocumentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::AppendDocumentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr<aspose::words::cloud::responses::AppendDocumentOnlineResponse> > > WordsApi::appendDocumentOnlineJob(std::shared_ptr<aspose::words::cloud::requests::AppendDocumentOnlineJobRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::AppendDocumentOnlineJobResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return std::make_shared<aspose::words::cloud::JobHandler< std::shared_ptr<aspose::words::cloud::responses::AppendDocumentOnlineResponse> > >(m_ApiClient,request->getOriginalRequest(),response->getModel());
    }

    std::shared_ptr< aspose::words::cloud::models::WordsResponse > WordsApi::applyStyleToDocumentElement(std::shared_ptr<aspose::words::cloud::requests::ApplyStyleToDocumentElementRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ApplyStyleToDocumentElementResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::ApplyStyleToDocumentElementOnlineResponse> WordsApi::applyStyleToDocumentElementOnline(std::shared_ptr<aspose::words::cloud::requests::ApplyStyleToDocumentElementOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ApplyStyleToDocumentElementOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::buildReport(std::shared_ptr<aspose::words::cloud::requests::BuildReportRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::BuildReportResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::buildReportOnline(std::shared_ptr<aspose::words::cloud::requests::BuildReportOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::BuildReportOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::compareDocument(std::shared_ptr<aspose::words::cloud::requests::CompareDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CompareDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::CompareDocumentOnlineResponse> WordsApi::compareDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::CompareDocumentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CompareDocumentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::CompressResponse > WordsApi::compressDocument(std::shared_ptr<aspose::words::cloud::requests::CompressDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CompressDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::CompressDocumentOnlineResponse> WordsApi::compressDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::CompressDocumentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CompressDocumentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< std::istream > WordsApi::convertDocument(std::shared_ptr<aspose::words::cloud::requests::ConvertDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ConvertDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< std::istream > > > WordsApi::convertDocumentJob(std::shared_ptr<aspose::words::cloud::requests::ConvertDocumentJobRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ConvertDocumentJobResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return std::make_shared<aspose::words::cloud::JobHandler< std::shared_ptr< std::istream > > >(m_ApiClient,request->getOriginalRequest(),response->getModel());
    }

    void WordsApi::copyFile(std::shared_ptr<aspose::words::cloud::requests::CopyFileRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CopyFileResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void WordsApi::copyFolder(std::shared_ptr<aspose::words::cloud::requests::CopyFolderRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CopyFolderResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< aspose::words::cloud::models::StyleResponse > WordsApi::copyStyle(std::shared_ptr<aspose::words::cloud::requests::CopyStyleRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CopyStyleResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::CopyStyleOnlineResponse> WordsApi::copyStyleOnline(std::shared_ptr<aspose::words::cloud::requests::CopyStyleOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CopyStyleOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::WordsResponse > WordsApi::copyStylesFromTemplate(std::shared_ptr<aspose::words::cloud::requests::CopyStylesFromTemplateRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CopyStylesFromTemplateResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::createDocument(std::shared_ptr<aspose::words::cloud::requests::CreateDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CreateDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    void WordsApi::createFolder(std::shared_ptr<aspose::words::cloud::requests::CreateFolderRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CreateFolderResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > WordsApi::createOrUpdateDocumentProperty(std::shared_ptr<aspose::words::cloud::requests::CreateOrUpdateDocumentPropertyRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CreateOrUpdateDocumentPropertyResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::CreateOrUpdateDocumentPropertyOnlineResponse> WordsApi::createOrUpdateDocumentPropertyOnline(std::shared_ptr<aspose::words::cloud::requests::CreateOrUpdateDocumentPropertyOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::CreateOrUpdateDocumentPropertyOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > WordsApi::deleteAllParagraphTabStops(std::shared_ptr<aspose::words::cloud::requests::DeleteAllParagraphTabStopsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteAllParagraphTabStopsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::DeleteAllParagraphTabStopsOnlineResponse> WordsApi::deleteAllParagraphTabStopsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteAllParagraphTabStopsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteAllParagraphTabStopsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    void WordsApi::deleteBookmark(std::shared_ptr<aspose::words::cloud::requests::DeleteBookmarkRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteBookmarkResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteBookmarkOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteBookmarkOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteBookmarkOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteBookmarks(std::shared_ptr<aspose::words::cloud::requests::DeleteBookmarksRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteBookmarksResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteBookmarksOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteBookmarksOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteBookmarksOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    std::shared_ptr< aspose::words::cloud::models::BorderResponse > WordsApi::deleteBorder(std::shared_ptr<aspose::words::cloud::requests::DeleteBorderRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteBorderResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::DeleteBorderOnlineResponse> WordsApi::deleteBorderOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteBorderOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteBorderOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::BordersResponse > WordsApi::deleteBorders(std::shared_ptr<aspose::words::cloud::requests::DeleteBordersRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteBordersResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::DeleteBordersOnlineResponse> WordsApi::deleteBordersOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteBordersOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteBordersOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    void WordsApi::deleteComment(std::shared_ptr<aspose::words::cloud::requests::DeleteCommentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteCommentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteCommentOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteCommentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteCommentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteComments(std::shared_ptr<aspose::words::cloud::requests::DeleteCommentsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteCommentsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteCommentsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteCommentsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteCommentsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteCustomXmlPart(std::shared_ptr<aspose::words::cloud::requests::DeleteCustomXmlPartRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteCustomXmlPartResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteCustomXmlPartOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteCustomXmlPartOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteCustomXmlPartOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteCustomXmlParts(std::shared_ptr<aspose::words::cloud::requests::DeleteCustomXmlPartsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteCustomXmlPartsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteCustomXmlPartsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteCustomXmlPartsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteCustomXmlPartsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteDocumentProperty(std::shared_ptr<aspose::words::cloud::requests::DeleteDocumentPropertyRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteDocumentPropertyResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteDocumentPropertyOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteDocumentPropertyOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteDocumentPropertyOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteDrawingObject(std::shared_ptr<aspose::words::cloud::requests::DeleteDrawingObjectRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteDrawingObjectResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteDrawingObjectOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteDrawingObjectOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteDrawingObjectOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteField(std::shared_ptr<aspose::words::cloud::requests::DeleteFieldRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFieldResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteFieldOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteFieldOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFieldOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteFields(std::shared_ptr<aspose::words::cloud::requests::DeleteFieldsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFieldsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteFieldsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteFieldsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFieldsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteFile(std::shared_ptr<aspose::words::cloud::requests::DeleteFileRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFileResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void WordsApi::deleteFolder(std::shared_ptr<aspose::words::cloud::requests::DeleteFolderRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFolderResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void WordsApi::deleteFootnote(std::shared_ptr<aspose::words::cloud::requests::DeleteFootnoteRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFootnoteResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteFootnoteOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteFootnoteOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFootnoteOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteFormField(std::shared_ptr<aspose::words::cloud::requests::DeleteFormFieldRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFormFieldResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteFormFieldOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteFormFieldOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteFormFieldOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteHeaderFooter(std::shared_ptr<aspose::words::cloud::requests::DeleteHeaderFooterRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteHeaderFooterResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteHeaderFooterOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteHeaderFooterOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteHeaderFooterOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteHeadersFooters(std::shared_ptr<aspose::words::cloud::requests::DeleteHeadersFootersRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteHeadersFootersResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteHeadersFootersOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteHeadersFootersOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteHeadersFootersOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteMacros(std::shared_ptr<aspose::words::cloud::requests::DeleteMacrosRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteMacrosResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteMacrosOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteMacrosOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteMacrosOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteOfficeMathObject(std::shared_ptr<aspose::words::cloud::requests::DeleteOfficeMathObjectRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteOfficeMathObjectResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteOfficeMathObjectOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteOfficeMathObjectOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteOfficeMathObjectOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteOfficeMathObjects(std::shared_ptr<aspose::words::cloud::requests::DeleteOfficeMathObjectsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteOfficeMathObjectsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteOfficeMathObjectsOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteOfficeMathObjectsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteOfficeMathObjectsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteParagraph(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteParagraphResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > WordsApi::deleteParagraphListFormat(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphListFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteParagraphListFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::DeleteParagraphListFormatOnlineResponse> WordsApi::deleteParagraphListFormatOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphListFormatOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteParagraphListFormatOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteParagraphOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteParagraphOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > WordsApi::deleteParagraphTabStop(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphTabStopRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteParagraphTabStopResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::DeleteParagraphTabStopOnlineResponse> WordsApi::deleteParagraphTabStopOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteParagraphTabStopOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteParagraphTabStopOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    void WordsApi::deleteRun(std::shared_ptr<aspose::words::cloud::requests::DeleteRunRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteRunResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteRunOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteRunOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteRunOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteSection(std::shared_ptr<aspose::words::cloud::requests::DeleteSectionRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteSectionResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteSectionOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteSectionOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteSectionOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteStructuredDocumentTag(std::shared_ptr<aspose::words::cloud::requests::DeleteStructuredDocumentTagRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteStructuredDocumentTagResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteStructuredDocumentTagOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteStructuredDocumentTagOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteStructuredDocumentTagOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteTable(std::shared_ptr<aspose::words::cloud::requests::DeleteTableRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteTableResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void WordsApi::deleteTableCell(std::shared_ptr<aspose::words::cloud::requests::DeleteTableCellRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteTableCellResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteTableCellOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteTableCellOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteTableCellOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteTableOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteTableOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteTableOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::deleteTableRow(std::shared_ptr<aspose::words::cloud::requests::DeleteTableRowRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteTableRowResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::deleteTableRowOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteTableRowOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteTableRowOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::deleteWatermark(std::shared_ptr<aspose::words::cloud::requests::DeleteWatermarkRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteWatermarkResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::DeleteWatermarkOnlineResponse> WordsApi::deleteWatermarkOnline(std::shared_ptr<aspose::words::cloud::requests::DeleteWatermarkOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DeleteWatermarkOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< std::istream > WordsApi::downloadFile(std::shared_ptr<aspose::words::cloud::requests::DownloadFileRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::DownloadFileResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::executeMailMerge(std::shared_ptr<aspose::words::cloud::requests::ExecuteMailMergeRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ExecuteMailMergeResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< aspose::words::cloud::models::DocumentResponse > > > WordsApi::executeMailMergeJob(std::shared_ptr<aspose::words::cloud::requests::ExecuteMailMergeJobRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ExecuteMailMergeJobResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return std::make_shared<aspose::words::cloud::JobHandler< std::shared_ptr< aspose::words::cloud::models::DocumentResponse > > >(m_ApiClient,request->getOriginalRequest(),response->getModel());
    }

    std::shared_ptr< std::istream > WordsApi::executeMailMergeOnline(std::shared_ptr<aspose::words::cloud::requests::ExecuteMailMergeOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ExecuteMailMergeOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< std::istream > > > WordsApi::executeMailMergeOnlineJob(std::shared_ptr<aspose::words::cloud::requests::ExecuteMailMergeOnlineJobRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ExecuteMailMergeOnlineJobResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return std::make_shared<aspose::words::cloud::JobHandler< std::shared_ptr< std::istream > > >(m_ApiClient,request->getOriginalRequest(),response->getModel());
    }

    std::shared_ptr< aspose::words::cloud::models::RevisionsResponse > WordsApi::getAllRevisions(std::shared_ptr<aspose::words::cloud::requests::GetAllRevisionsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetAllRevisionsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::RevisionsResponse > WordsApi::getAllRevisionsOnline(std::shared_ptr<aspose::words::cloud::requests::GetAllRevisionsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetAllRevisionsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::AvailableFontsResponse > WordsApi::getAvailableFonts(std::shared_ptr<aspose::words::cloud::requests::GetAvailableFontsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetAvailableFontsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > WordsApi::getBookmarkByName(std::shared_ptr<aspose::words::cloud::requests::GetBookmarkByNameRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetBookmarkByNameResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > WordsApi::getBookmarkByNameOnline(std::shared_ptr<aspose::words::cloud::requests::GetBookmarkByNameOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetBookmarkByNameOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::BookmarksResponse > WordsApi::getBookmarks(std::shared_ptr<aspose::words::cloud::requests::GetBookmarksRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetBookmarksResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::BookmarksResponse > WordsApi::getBookmarksOnline(std::shared_ptr<aspose::words::cloud::requests::GetBookmarksOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetBookmarksOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::BorderResponse > WordsApi::getBorder(std::shared_ptr<aspose::words::cloud::requests::GetBorderRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetBorderResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::BorderResponse > WordsApi::getBorderOnline(std::shared_ptr<aspose::words::cloud::requests::GetBorderOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetBorderOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::BordersResponse > WordsApi::getBorders(std::shared_ptr<aspose::words::cloud::requests::GetBordersRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetBordersResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::BordersResponse > WordsApi::getBordersOnline(std::shared_ptr<aspose::words::cloud::requests::GetBordersOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetBordersOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::CommentResponse > WordsApi::getComment(std::shared_ptr<aspose::words::cloud::requests::GetCommentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetCommentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::CommentResponse > WordsApi::getCommentOnline(std::shared_ptr<aspose::words::cloud::requests::GetCommentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetCommentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::CommentsResponse > WordsApi::getComments(std::shared_ptr<aspose::words::cloud::requests::GetCommentsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetCommentsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::CommentsResponse > WordsApi::getCommentsOnline(std::shared_ptr<aspose::words::cloud::requests::GetCommentsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetCommentsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > WordsApi::getCustomXmlPart(std::shared_ptr<aspose::words::cloud::requests::GetCustomXmlPartRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetCustomXmlPartResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > WordsApi::getCustomXmlPartOnline(std::shared_ptr<aspose::words::cloud::requests::GetCustomXmlPartOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetCustomXmlPartOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartsResponse > WordsApi::getCustomXmlParts(std::shared_ptr<aspose::words::cloud::requests::GetCustomXmlPartsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetCustomXmlPartsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartsResponse > WordsApi::getCustomXmlPartsOnline(std::shared_ptr<aspose::words::cloud::requests::GetCustomXmlPartsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetCustomXmlPartsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::getDocument(std::shared_ptr<aspose::words::cloud::requests::GetDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > WordsApi::getDocumentDrawingObjectByIndex(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectByIndexRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentDrawingObjectByIndexResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > WordsApi::getDocumentDrawingObjectByIndexOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectByIndexOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentDrawingObjectByIndexOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::getDocumentDrawingObjectImageData(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectImageDataRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentDrawingObjectImageDataResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::getDocumentDrawingObjectImageDataOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectImageDataOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentDrawingObjectImageDataOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::getDocumentDrawingObjectOleData(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectOleDataRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentDrawingObjectOleDataResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::getDocumentDrawingObjectOleDataOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectOleDataOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentDrawingObjectOleDataOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DrawingObjectsResponse > WordsApi::getDocumentDrawingObjects(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentDrawingObjectsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DrawingObjectsResponse > WordsApi::getDocumentDrawingObjectsOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentDrawingObjectsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentDrawingObjectsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FieldNamesResponse > WordsApi::getDocumentFieldNames(std::shared_ptr<aspose::words::cloud::requests::GetDocumentFieldNamesRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentFieldNamesResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FieldNamesResponse > WordsApi::getDocumentFieldNamesOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentFieldNamesOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentFieldNamesOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HyperlinkResponse > WordsApi::getDocumentHyperlinkByIndex(std::shared_ptr<aspose::words::cloud::requests::GetDocumentHyperlinkByIndexRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentHyperlinkByIndexResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HyperlinkResponse > WordsApi::getDocumentHyperlinkByIndexOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentHyperlinkByIndexOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentHyperlinkByIndexOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HyperlinksResponse > WordsApi::getDocumentHyperlinks(std::shared_ptr<aspose::words::cloud::requests::GetDocumentHyperlinksRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentHyperlinksResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HyperlinksResponse > WordsApi::getDocumentHyperlinksOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentHyperlinksOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentHyperlinksOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentPropertiesResponse > WordsApi::getDocumentProperties(std::shared_ptr<aspose::words::cloud::requests::GetDocumentPropertiesRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentPropertiesResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentPropertiesResponse > WordsApi::getDocumentPropertiesOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentPropertiesOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentPropertiesOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > WordsApi::getDocumentProperty(std::shared_ptr<aspose::words::cloud::requests::GetDocumentPropertyRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentPropertyResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > WordsApi::getDocumentPropertyOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentPropertyOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentPropertyOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > WordsApi::getDocumentProtection(std::shared_ptr<aspose::words::cloud::requests::GetDocumentProtectionRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentProtectionResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > WordsApi::getDocumentProtectionOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentProtectionOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentProtectionOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StatDataResponse > WordsApi::getDocumentStatistics(std::shared_ptr<aspose::words::cloud::requests::GetDocumentStatisticsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentStatisticsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StatDataResponse > WordsApi::getDocumentStatisticsOnline(std::shared_ptr<aspose::words::cloud::requests::GetDocumentStatisticsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentStatisticsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::getDocumentWithFormat(std::shared_ptr<aspose::words::cloud::requests::GetDocumentWithFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetDocumentWithFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FieldResponse > WordsApi::getField(std::shared_ptr<aspose::words::cloud::requests::GetFieldRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFieldResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FieldResponse > WordsApi::getFieldOnline(std::shared_ptr<aspose::words::cloud::requests::GetFieldOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFieldOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FieldsResponse > WordsApi::getFields(std::shared_ptr<aspose::words::cloud::requests::GetFieldsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFieldsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FieldsResponse > WordsApi::getFieldsOnline(std::shared_ptr<aspose::words::cloud::requests::GetFieldsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFieldsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FilesList > WordsApi::getFilesList(std::shared_ptr<aspose::words::cloud::requests::GetFilesListRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFilesListResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > WordsApi::getFootnote(std::shared_ptr<aspose::words::cloud::requests::GetFootnoteRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFootnoteResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > WordsApi::getFootnoteOnline(std::shared_ptr<aspose::words::cloud::requests::GetFootnoteOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFootnoteOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FootnotesResponse > WordsApi::getFootnotes(std::shared_ptr<aspose::words::cloud::requests::GetFootnotesRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFootnotesResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FootnotesResponse > WordsApi::getFootnotesOnline(std::shared_ptr<aspose::words::cloud::requests::GetFootnotesOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFootnotesOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > WordsApi::getFormField(std::shared_ptr<aspose::words::cloud::requests::GetFormFieldRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFormFieldResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > WordsApi::getFormFieldOnline(std::shared_ptr<aspose::words::cloud::requests::GetFormFieldOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFormFieldOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FormFieldsResponse > WordsApi::getFormFields(std::shared_ptr<aspose::words::cloud::requests::GetFormFieldsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFormFieldsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FormFieldsResponse > WordsApi::getFormFieldsOnline(std::shared_ptr<aspose::words::cloud::requests::GetFormFieldsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetFormFieldsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > WordsApi::getHeaderFooter(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFooterRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetHeaderFooterResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > WordsApi::getHeaderFooterOfSection(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFooterOfSectionRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetHeaderFooterOfSectionResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > WordsApi::getHeaderFooterOfSectionOnline(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFooterOfSectionOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetHeaderFooterOfSectionOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > WordsApi::getHeaderFooterOnline(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFooterOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetHeaderFooterOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HeaderFootersResponse > WordsApi::getHeaderFooters(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFootersRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetHeaderFootersResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::HeaderFootersResponse > WordsApi::getHeaderFootersOnline(std::shared_ptr<aspose::words::cloud::requests::GetHeaderFootersOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetHeaderFootersOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::InfoResponse > WordsApi::getInfo(std::shared_ptr<aspose::words::cloud::requests::GetInfoRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetInfoResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ListResponse > WordsApi::getList(std::shared_ptr<aspose::words::cloud::requests::GetListRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetListResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ListResponse > WordsApi::getListOnline(std::shared_ptr<aspose::words::cloud::requests::GetListOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetListOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ListsResponse > WordsApi::getLists(std::shared_ptr<aspose::words::cloud::requests::GetListsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetListsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ListsResponse > WordsApi::getListsOnline(std::shared_ptr<aspose::words::cloud::requests::GetListsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetListsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectResponse > WordsApi::getOfficeMathObject(std::shared_ptr<aspose::words::cloud::requests::GetOfficeMathObjectRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetOfficeMathObjectResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectResponse > WordsApi::getOfficeMathObjectOnline(std::shared_ptr<aspose::words::cloud::requests::GetOfficeMathObjectOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetOfficeMathObjectOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectsResponse > WordsApi::getOfficeMathObjects(std::shared_ptr<aspose::words::cloud::requests::GetOfficeMathObjectsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetOfficeMathObjectsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectsResponse > WordsApi::getOfficeMathObjectsOnline(std::shared_ptr<aspose::words::cloud::requests::GetOfficeMathObjectsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetOfficeMathObjectsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > WordsApi::getParagraph(std::shared_ptr<aspose::words::cloud::requests::GetParagraphRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > WordsApi::getParagraphFormat(std::shared_ptr<aspose::words::cloud::requests::GetParagraphFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > WordsApi::getParagraphFormatOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphFormatOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphFormatOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > WordsApi::getParagraphListFormat(std::shared_ptr<aspose::words::cloud::requests::GetParagraphListFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphListFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > WordsApi::getParagraphListFormatOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphListFormatOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphListFormatOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > WordsApi::getParagraphOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphLinkCollectionResponse > WordsApi::getParagraphs(std::shared_ptr<aspose::words::cloud::requests::GetParagraphsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphLinkCollectionResponse > WordsApi::getParagraphsOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > WordsApi::getParagraphTabStops(std::shared_ptr<aspose::words::cloud::requests::GetParagraphTabStopsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphTabStopsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > WordsApi::getParagraphTabStopsOnline(std::shared_ptr<aspose::words::cloud::requests::GetParagraphTabStopsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetParagraphTabStopsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::PublicKeyResponse > WordsApi::getPublicKey(std::shared_ptr<aspose::words::cloud::requests::GetPublicKeyRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetPublicKeyResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::RangeTextResponse > WordsApi::getRangeText(std::shared_ptr<aspose::words::cloud::requests::GetRangeTextRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetRangeTextResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::RangeTextResponse > WordsApi::getRangeTextOnline(std::shared_ptr<aspose::words::cloud::requests::GetRangeTextOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetRangeTextOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::RunResponse > WordsApi::getRun(std::shared_ptr<aspose::words::cloud::requests::GetRunRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetRunResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FontResponse > WordsApi::getRunFont(std::shared_ptr<aspose::words::cloud::requests::GetRunFontRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetRunFontResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FontResponse > WordsApi::getRunFontOnline(std::shared_ptr<aspose::words::cloud::requests::GetRunFontOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetRunFontOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::RunResponse > WordsApi::getRunOnline(std::shared_ptr<aspose::words::cloud::requests::GetRunOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetRunOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::RunsResponse > WordsApi::getRuns(std::shared_ptr<aspose::words::cloud::requests::GetRunsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetRunsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::RunsResponse > WordsApi::getRunsOnline(std::shared_ptr<aspose::words::cloud::requests::GetRunsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetRunsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SectionResponse > WordsApi::getSection(std::shared_ptr<aspose::words::cloud::requests::GetSectionRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetSectionResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SectionResponse > WordsApi::getSectionOnline(std::shared_ptr<aspose::words::cloud::requests::GetSectionOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetSectionOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > WordsApi::getSectionPageSetup(std::shared_ptr<aspose::words::cloud::requests::GetSectionPageSetupRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetSectionPageSetupResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > WordsApi::getSectionPageSetupOnline(std::shared_ptr<aspose::words::cloud::requests::GetSectionPageSetupOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetSectionPageSetupOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SectionLinkCollectionResponse > WordsApi::getSections(std::shared_ptr<aspose::words::cloud::requests::GetSectionsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetSectionsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SectionLinkCollectionResponse > WordsApi::getSectionsOnline(std::shared_ptr<aspose::words::cloud::requests::GetSectionsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetSectionsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > WordsApi::getSignatures(std::shared_ptr<aspose::words::cloud::requests::GetSignaturesRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetSignaturesResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > WordsApi::getSignaturesOnline(std::shared_ptr<aspose::words::cloud::requests::GetSignaturesOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetSignaturesOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > WordsApi::getStructuredDocumentTag(std::shared_ptr<aspose::words::cloud::requests::GetStructuredDocumentTagRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStructuredDocumentTagResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > WordsApi::getStructuredDocumentTagOnline(std::shared_ptr<aspose::words::cloud::requests::GetStructuredDocumentTagOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStructuredDocumentTagOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagsResponse > WordsApi::getStructuredDocumentTags(std::shared_ptr<aspose::words::cloud::requests::GetStructuredDocumentTagsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStructuredDocumentTagsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagsResponse > WordsApi::getStructuredDocumentTagsOnline(std::shared_ptr<aspose::words::cloud::requests::GetStructuredDocumentTagsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStructuredDocumentTagsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StyleResponse > WordsApi::getStyle(std::shared_ptr<aspose::words::cloud::requests::GetStyleRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStyleResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StyleResponse > WordsApi::getStyleFromDocumentElement(std::shared_ptr<aspose::words::cloud::requests::GetStyleFromDocumentElementRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStyleFromDocumentElementResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StyleResponse > WordsApi::getStyleFromDocumentElementOnline(std::shared_ptr<aspose::words::cloud::requests::GetStyleFromDocumentElementOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStyleFromDocumentElementOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StyleResponse > WordsApi::getStyleOnline(std::shared_ptr<aspose::words::cloud::requests::GetStyleOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStyleOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StylesResponse > WordsApi::getStyles(std::shared_ptr<aspose::words::cloud::requests::GetStylesRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStylesResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::StylesResponse > WordsApi::getStylesOnline(std::shared_ptr<aspose::words::cloud::requests::GetStylesOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetStylesOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableResponse > WordsApi::getTable(std::shared_ptr<aspose::words::cloud::requests::GetTableRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableCellResponse > WordsApi::getTableCell(std::shared_ptr<aspose::words::cloud::requests::GetTableCellRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableCellResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > WordsApi::getTableCellFormat(std::shared_ptr<aspose::words::cloud::requests::GetTableCellFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableCellFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > WordsApi::getTableCellFormatOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableCellFormatOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableCellFormatOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableCellResponse > WordsApi::getTableCellOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableCellOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableCellOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableResponse > WordsApi::getTableOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > WordsApi::getTableProperties(std::shared_ptr<aspose::words::cloud::requests::GetTablePropertiesRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTablePropertiesResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > WordsApi::getTablePropertiesOnline(std::shared_ptr<aspose::words::cloud::requests::GetTablePropertiesOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTablePropertiesOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableRowResponse > WordsApi::getTableRow(std::shared_ptr<aspose::words::cloud::requests::GetTableRowRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableRowResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > WordsApi::getTableRowFormat(std::shared_ptr<aspose::words::cloud::requests::GetTableRowFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableRowFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > WordsApi::getTableRowFormatOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableRowFormatOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableRowFormatOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableRowResponse > WordsApi::getTableRowOnline(std::shared_ptr<aspose::words::cloud::requests::GetTableRowOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTableRowOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableLinkCollectionResponse > WordsApi::getTables(std::shared_ptr<aspose::words::cloud::requests::GetTablesRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTablesResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableLinkCollectionResponse > WordsApi::getTablesOnline(std::shared_ptr<aspose::words::cloud::requests::GetTablesOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::GetTablesOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > WordsApi::insertBookmark(std::shared_ptr<aspose::words::cloud::requests::InsertBookmarkRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertBookmarkResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertBookmarkOnlineResponse> WordsApi::insertBookmarkOnline(std::shared_ptr<aspose::words::cloud::requests::InsertBookmarkOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertBookmarkOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::CommentResponse > WordsApi::insertComment(std::shared_ptr<aspose::words::cloud::requests::InsertCommentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertCommentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertCommentOnlineResponse> WordsApi::insertCommentOnline(std::shared_ptr<aspose::words::cloud::requests::InsertCommentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertCommentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > WordsApi::insertCustomXmlPart(std::shared_ptr<aspose::words::cloud::requests::InsertCustomXmlPartRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertCustomXmlPartResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertCustomXmlPartOnlineResponse> WordsApi::insertCustomXmlPartOnline(std::shared_ptr<aspose::words::cloud::requests::InsertCustomXmlPartOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertCustomXmlPartOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > WordsApi::insertDrawingObject(std::shared_ptr<aspose::words::cloud::requests::InsertDrawingObjectRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertDrawingObjectResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > WordsApi::insertDrawingObjectByReference(std::shared_ptr<aspose::words::cloud::requests::InsertDrawingObjectByReferenceRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertDrawingObjectByReferenceResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertDrawingObjectByReferenceOnlineResponse> WordsApi::insertDrawingObjectByReferenceOnline(std::shared_ptr<aspose::words::cloud::requests::InsertDrawingObjectByReferenceOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertDrawingObjectByReferenceOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertDrawingObjectOnlineResponse> WordsApi::insertDrawingObjectOnline(std::shared_ptr<aspose::words::cloud::requests::InsertDrawingObjectOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertDrawingObjectOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::FieldResponse > WordsApi::insertField(std::shared_ptr<aspose::words::cloud::requests::InsertFieldRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertFieldResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertFieldOnlineResponse> WordsApi::insertFieldOnline(std::shared_ptr<aspose::words::cloud::requests::InsertFieldOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertFieldOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > WordsApi::insertFootnote(std::shared_ptr<aspose::words::cloud::requests::InsertFootnoteRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertFootnoteResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertFootnoteOnlineResponse> WordsApi::insertFootnoteOnline(std::shared_ptr<aspose::words::cloud::requests::InsertFootnoteOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertFootnoteOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > WordsApi::insertFormField(std::shared_ptr<aspose::words::cloud::requests::InsertFormFieldRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertFormFieldResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertFormFieldOnlineResponse> WordsApi::insertFormFieldOnline(std::shared_ptr<aspose::words::cloud::requests::InsertFormFieldOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertFormFieldOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > WordsApi::insertHeaderFooter(std::shared_ptr<aspose::words::cloud::requests::InsertHeaderFooterRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertHeaderFooterResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertHeaderFooterOnlineResponse> WordsApi::insertHeaderFooterOnline(std::shared_ptr<aspose::words::cloud::requests::InsertHeaderFooterOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertHeaderFooterOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::ListResponse > WordsApi::insertList(std::shared_ptr<aspose::words::cloud::requests::InsertListRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertListResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertListOnlineResponse> WordsApi::insertListOnline(std::shared_ptr<aspose::words::cloud::requests::InsertListOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertListOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > WordsApi::insertOrUpdateParagraphTabStop(std::shared_ptr<aspose::words::cloud::requests::InsertOrUpdateParagraphTabStopRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertOrUpdateParagraphTabStopResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertOrUpdateParagraphTabStopOnlineResponse> WordsApi::insertOrUpdateParagraphTabStopOnline(std::shared_ptr<aspose::words::cloud::requests::InsertOrUpdateParagraphTabStopOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertOrUpdateParagraphTabStopOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::insertPageNumbers(std::shared_ptr<aspose::words::cloud::requests::InsertPageNumbersRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertPageNumbersResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertPageNumbersOnlineResponse> WordsApi::insertPageNumbersOnline(std::shared_ptr<aspose::words::cloud::requests::InsertPageNumbersOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertPageNumbersOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > WordsApi::insertParagraph(std::shared_ptr<aspose::words::cloud::requests::InsertParagraphRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertParagraphResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertParagraphOnlineResponse> WordsApi::insertParagraphOnline(std::shared_ptr<aspose::words::cloud::requests::InsertParagraphOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertParagraphOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::RunResponse > WordsApi::insertRun(std::shared_ptr<aspose::words::cloud::requests::InsertRunRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertRunResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertRunOnlineResponse> WordsApi::insertRunOnline(std::shared_ptr<aspose::words::cloud::requests::InsertRunOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertRunOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    void WordsApi::insertSection(std::shared_ptr<aspose::words::cloud::requests::InsertSectionRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertSectionResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::insertSectionOnline(std::shared_ptr<aspose::words::cloud::requests::InsertSectionOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertSectionOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > WordsApi::insertStructuredDocumentTag(std::shared_ptr<aspose::words::cloud::requests::InsertStructuredDocumentTagRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertStructuredDocumentTagResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertStructuredDocumentTagOnlineResponse> WordsApi::insertStructuredDocumentTagOnline(std::shared_ptr<aspose::words::cloud::requests::InsertStructuredDocumentTagOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertStructuredDocumentTagOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::StyleResponse > WordsApi::insertStyle(std::shared_ptr<aspose::words::cloud::requests::InsertStyleRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertStyleResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertStyleOnlineResponse> WordsApi::insertStyleOnline(std::shared_ptr<aspose::words::cloud::requests::InsertStyleOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertStyleOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::TableResponse > WordsApi::insertTable(std::shared_ptr<aspose::words::cloud::requests::InsertTableRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertTableResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TableCellResponse > WordsApi::insertTableCell(std::shared_ptr<aspose::words::cloud::requests::InsertTableCellRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertTableCellResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertTableCellOnlineResponse> WordsApi::insertTableCellOnline(std::shared_ptr<aspose::words::cloud::requests::InsertTableCellOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertTableCellOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertTableOnlineResponse> WordsApi::insertTableOnline(std::shared_ptr<aspose::words::cloud::requests::InsertTableOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertTableOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::TableRowResponse > WordsApi::insertTableRow(std::shared_ptr<aspose::words::cloud::requests::InsertTableRowRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertTableRowResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertTableRowOnlineResponse> WordsApi::insertTableRowOnline(std::shared_ptr<aspose::words::cloud::requests::InsertTableRowOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertTableRowOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::insertWatermark(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertWatermarkResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::insertWatermarkImage(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkImageRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertWatermarkImageResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertWatermarkImageOnlineResponse> WordsApi::insertWatermarkImageOnline(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkImageOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertWatermarkImageOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertWatermarkOnlineResponse> WordsApi::insertWatermarkOnline(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertWatermarkOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::insertWatermarkText(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkTextRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertWatermarkTextResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::InsertWatermarkTextOnlineResponse> WordsApi::insertWatermarkTextOnline(std::shared_ptr<aspose::words::cloud::requests::InsertWatermarkTextOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::InsertWatermarkTextOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    void WordsApi::linkHeaderFootersToPrevious(std::shared_ptr<aspose::words::cloud::requests::LinkHeaderFootersToPreviousRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::LinkHeaderFootersToPreviousResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< aspose::words::cloud::models::SaveResponse > WordsApi::loadWebDocument(std::shared_ptr<aspose::words::cloud::requests::LoadWebDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::LoadWebDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::LoadWebDocumentOnlineResponse> WordsApi::loadWebDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::LoadWebDocumentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::LoadWebDocumentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    void WordsApi::mergeWithNext(std::shared_ptr<aspose::words::cloud::requests::MergeWithNextRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::MergeWithNextResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::mergeWithNextOnline(std::shared_ptr<aspose::words::cloud::requests::MergeWithNextOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::MergeWithNextOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    void WordsApi::moveFile(std::shared_ptr<aspose::words::cloud::requests::MoveFileRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::MoveFileResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void WordsApi::moveFolder(std::shared_ptr<aspose::words::cloud::requests::MoveFolderRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::MoveFolderResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    void WordsApi::optimizeDocument(std::shared_ptr<aspose::words::cloud::requests::OptimizeDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::OptimizeDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > WordsApi::optimizeDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::OptimizeDocumentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::OptimizeDocumentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getDocument();
    }

    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > WordsApi::protectDocument(std::shared_ptr<aspose::words::cloud::requests::ProtectDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ProtectDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::ProtectDocumentOnlineResponse> WordsApi::protectDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::ProtectDocumentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ProtectDocumentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::RevisionsModificationResponse > WordsApi::rejectAllRevisions(std::shared_ptr<aspose::words::cloud::requests::RejectAllRevisionsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RejectAllRevisionsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::RejectAllRevisionsOnlineResponse> WordsApi::rejectAllRevisionsOnline(std::shared_ptr<aspose::words::cloud::requests::RejectAllRevisionsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RejectAllRevisionsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > WordsApi::removeAllSignatures(std::shared_ptr<aspose::words::cloud::requests::RemoveAllSignaturesRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RemoveAllSignaturesResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::RemoveAllSignaturesOnlineResponse> WordsApi::removeAllSignaturesOnline(std::shared_ptr<aspose::words::cloud::requests::RemoveAllSignaturesOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RemoveAllSignaturesOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::removeRange(std::shared_ptr<aspose::words::cloud::requests::RemoveRangeRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RemoveRangeResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::RemoveRangeOnlineResponse> WordsApi::removeRangeOnline(std::shared_ptr<aspose::words::cloud::requests::RemoveRangeOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RemoveRangeOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< std::istream > WordsApi::renderDrawingObject(std::shared_ptr<aspose::words::cloud::requests::RenderDrawingObjectRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderDrawingObjectResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::renderDrawingObjectOnline(std::shared_ptr<aspose::words::cloud::requests::RenderDrawingObjectOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderDrawingObjectOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::renderMathObject(std::shared_ptr<aspose::words::cloud::requests::RenderMathObjectRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderMathObjectResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::renderMathObjectOnline(std::shared_ptr<aspose::words::cloud::requests::RenderMathObjectOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderMathObjectOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::renderPage(std::shared_ptr<aspose::words::cloud::requests::RenderPageRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderPageResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::renderPageOnline(std::shared_ptr<aspose::words::cloud::requests::RenderPageOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderPageOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::renderParagraph(std::shared_ptr<aspose::words::cloud::requests::RenderParagraphRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderParagraphResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::renderParagraphOnline(std::shared_ptr<aspose::words::cloud::requests::RenderParagraphOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderParagraphOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::renderTable(std::shared_ptr<aspose::words::cloud::requests::RenderTableRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderTableResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< std::istream > WordsApi::renderTableOnline(std::shared_ptr<aspose::words::cloud::requests::RenderTableOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::RenderTableOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ReplaceTextResponse > WordsApi::replaceText(std::shared_ptr<aspose::words::cloud::requests::ReplaceTextRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ReplaceTextResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::ReplaceTextOnlineResponse> WordsApi::replaceTextOnline(std::shared_ptr<aspose::words::cloud::requests::ReplaceTextOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ReplaceTextOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::replaceWithText(std::shared_ptr<aspose::words::cloud::requests::ReplaceWithTextRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ReplaceWithTextResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::ReplaceWithTextOnlineResponse> WordsApi::replaceWithTextOnline(std::shared_ptr<aspose::words::cloud::requests::ReplaceWithTextOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ReplaceWithTextOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    void WordsApi::resetCache(std::shared_ptr<aspose::words::cloud::requests::ResetCacheRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::ResetCacheResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }
    }

    std::shared_ptr< aspose::words::cloud::models::SaveResponse > WordsApi::saveAs(std::shared_ptr<aspose::words::cloud::requests::SaveAsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SaveAsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::SaveAsOnlineResponse> WordsApi::saveAsOnline(std::shared_ptr<aspose::words::cloud::requests::SaveAsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SaveAsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::saveAsRange(std::shared_ptr<aspose::words::cloud::requests::SaveAsRangeRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SaveAsRangeResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::SaveAsRangeOnlineResponse> WordsApi::saveAsRangeOnline(std::shared_ptr<aspose::words::cloud::requests::SaveAsRangeOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SaveAsRangeOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::SaveResponse > WordsApi::saveAsTiff(std::shared_ptr<aspose::words::cloud::requests::SaveAsTiffRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SaveAsTiffResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::SaveAsTiffOnlineResponse> WordsApi::saveAsTiffOnline(std::shared_ptr<aspose::words::cloud::requests::SaveAsTiffOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SaveAsTiffOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::SearchResponse > WordsApi::search(std::shared_ptr<aspose::words::cloud::requests::SearchRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SearchResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SearchResponse > WordsApi::searchOnline(std::shared_ptr<aspose::words::cloud::requests::SearchOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SearchOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > WordsApi::signDocument(std::shared_ptr<aspose::words::cloud::requests::SignDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SignDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::SignDocumentOnlineResponse> WordsApi::signDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::SignDocumentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SignDocumentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::SplitDocumentResponse > WordsApi::splitDocument(std::shared_ptr<aspose::words::cloud::requests::SplitDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SplitDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr< aspose::words::cloud::models::SplitDocumentResponse > > > WordsApi::splitDocumentJob(std::shared_ptr<aspose::words::cloud::requests::SplitDocumentJobRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SplitDocumentJobResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return std::make_shared<aspose::words::cloud::JobHandler< std::shared_ptr< aspose::words::cloud::models::SplitDocumentResponse > > >(m_ApiClient,request->getOriginalRequest(),response->getModel());
    }

    std::shared_ptr<aspose::words::cloud::responses::SplitDocumentOnlineResponse> WordsApi::splitDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::SplitDocumentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SplitDocumentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr<aspose::words::cloud::JobHandler< std::shared_ptr<aspose::words::cloud::responses::SplitDocumentOnlineResponse> > > WordsApi::splitDocumentOnlineJob(std::shared_ptr<aspose::words::cloud::requests::SplitDocumentOnlineJobRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::SplitDocumentOnlineJobResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return std::make_shared<aspose::words::cloud::JobHandler< std::shared_ptr<aspose::words::cloud::responses::SplitDocumentOnlineResponse> > >(m_ApiClient,request->getOriginalRequest(),response->getModel());
    }

    std::shared_ptr< aspose::words::cloud::models::TranslateNodeIdResponse > WordsApi::translateNodeId(std::shared_ptr<aspose::words::cloud::requests::TranslateNodeIdRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::TranslateNodeIdResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::TranslateNodeIdResponse > WordsApi::translateNodeIdOnline(std::shared_ptr<aspose::words::cloud::requests::TranslateNodeIdOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::TranslateNodeIdOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > WordsApi::unprotectDocument(std::shared_ptr<aspose::words::cloud::requests::UnprotectDocumentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UnprotectDocumentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UnprotectDocumentOnlineResponse> WordsApi::unprotectDocumentOnline(std::shared_ptr<aspose::words::cloud::requests::UnprotectDocumentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UnprotectDocumentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > WordsApi::updateBookmark(std::shared_ptr<aspose::words::cloud::requests::UpdateBookmarkRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateBookmarkResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateBookmarkOnlineResponse> WordsApi::updateBookmarkOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateBookmarkOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateBookmarkOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::BorderResponse > WordsApi::updateBorder(std::shared_ptr<aspose::words::cloud::requests::UpdateBorderRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateBorderResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateBorderOnlineResponse> WordsApi::updateBorderOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateBorderOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateBorderOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::CommentResponse > WordsApi::updateComment(std::shared_ptr<aspose::words::cloud::requests::UpdateCommentRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateCommentResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateCommentOnlineResponse> WordsApi::updateCommentOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateCommentOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateCommentOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > WordsApi::updateCustomXmlPart(std::shared_ptr<aspose::words::cloud::requests::UpdateCustomXmlPartRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateCustomXmlPartResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateCustomXmlPartOnlineResponse> WordsApi::updateCustomXmlPartOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateCustomXmlPartOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateCustomXmlPartOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > WordsApi::updateDrawingObject(std::shared_ptr<aspose::words::cloud::requests::UpdateDrawingObjectRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateDrawingObjectResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateDrawingObjectOnlineResponse> WordsApi::updateDrawingObjectOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateDrawingObjectOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateDrawingObjectOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::FieldResponse > WordsApi::updateField(std::shared_ptr<aspose::words::cloud::requests::UpdateFieldRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateFieldResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateFieldOnlineResponse> WordsApi::updateFieldOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateFieldOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateFieldOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > WordsApi::updateFields(std::shared_ptr<aspose::words::cloud::requests::UpdateFieldsRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateFieldsResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateFieldsOnlineResponse> WordsApi::updateFieldsOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateFieldsOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateFieldsOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > WordsApi::updateFootnote(std::shared_ptr<aspose::words::cloud::requests::UpdateFootnoteRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateFootnoteResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateFootnoteOnlineResponse> WordsApi::updateFootnoteOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateFootnoteOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateFootnoteOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > WordsApi::updateFormField(std::shared_ptr<aspose::words::cloud::requests::UpdateFormFieldRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateFormFieldResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateFormFieldOnlineResponse> WordsApi::updateFormFieldOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateFormFieldOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateFormFieldOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::ListResponse > WordsApi::updateList(std::shared_ptr<aspose::words::cloud::requests::UpdateListRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateListResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::ListResponse > WordsApi::updateListLevel(std::shared_ptr<aspose::words::cloud::requests::UpdateListLevelRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateListLevelResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateListLevelOnlineResponse> WordsApi::updateListLevelOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateListLevelOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateListLevelOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateListOnlineResponse> WordsApi::updateListOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateListOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateListOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > WordsApi::updateParagraphFormat(std::shared_ptr<aspose::words::cloud::requests::UpdateParagraphFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateParagraphFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateParagraphFormatOnlineResponse> WordsApi::updateParagraphFormatOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateParagraphFormatOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateParagraphFormatOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > WordsApi::updateParagraphListFormat(std::shared_ptr<aspose::words::cloud::requests::UpdateParagraphListFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateParagraphListFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateParagraphListFormatOnlineResponse> WordsApi::updateParagraphListFormatOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateParagraphListFormatOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateParagraphListFormatOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::RunResponse > WordsApi::updateRun(std::shared_ptr<aspose::words::cloud::requests::UpdateRunRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateRunResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr< aspose::words::cloud::models::FontResponse > WordsApi::updateRunFont(std::shared_ptr<aspose::words::cloud::requests::UpdateRunFontRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateRunFontResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateRunFontOnlineResponse> WordsApi::updateRunFontOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateRunFontOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateRunFontOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateRunOnlineResponse> WordsApi::updateRunOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateRunOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateRunOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > WordsApi::updateSectionPageSetup(std::shared_ptr<aspose::words::cloud::requests::UpdateSectionPageSetupRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateSectionPageSetupResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateSectionPageSetupOnlineResponse> WordsApi::updateSectionPageSetupOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateSectionPageSetupOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateSectionPageSetupOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > WordsApi::updateStructuredDocumentTag(std::shared_ptr<aspose::words::cloud::requests::UpdateStructuredDocumentTagRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateStructuredDocumentTagResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateStructuredDocumentTagOnlineResponse> WordsApi::updateStructuredDocumentTagOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateStructuredDocumentTagOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateStructuredDocumentTagOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::StyleResponse > WordsApi::updateStyle(std::shared_ptr<aspose::words::cloud::requests::UpdateStyleRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateStyleResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateStyleOnlineResponse> WordsApi::updateStyleOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateStyleOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateStyleOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > WordsApi::updateTableCellFormat(std::shared_ptr<aspose::words::cloud::requests::UpdateTableCellFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateTableCellFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateTableCellFormatOnlineResponse> WordsApi::updateTableCellFormatOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateTableCellFormatOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateTableCellFormatOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > WordsApi::updateTableProperties(std::shared_ptr<aspose::words::cloud::requests::UpdateTablePropertiesRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateTablePropertiesResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateTablePropertiesOnlineResponse> WordsApi::updateTablePropertiesOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateTablePropertiesOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateTablePropertiesOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > WordsApi::updateTableRowFormat(std::shared_ptr<aspose::words::cloud::requests::UpdateTableRowFormatRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateTableRowFormatResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::UpdateTableRowFormatOnlineResponse> WordsApi::updateTableRowFormatOnline(std::shared_ptr<aspose::words::cloud::requests::UpdateTableRowFormatOnlineRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UpdateTableRowFormatOnlineResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }

    std::shared_ptr< aspose::words::cloud::models::FilesUploadResult > WordsApi::uploadFile(std::shared_ptr<aspose::words::cloud::requests::UploadFileRequest> request)
    {
        auto response = std::make_shared< aspose::words::cloud::responses::UploadFileResponse >();
        m_ApiClient->call(request->createHttpRequest(m_ApiClient.get()), *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response->getModel();
    }

    std::shared_ptr<aspose::words::cloud::responses::BatchResponse> WordsApi::batch(const std::vector<aspose::words::cloud::requests::BatchRequest>& requests, bool displayIntermediateResults) {
        auto response = std::make_shared<aspose::words::cloud::responses::BatchResponse>();
        auto requestData = std::make_shared<aspose::words::cloud::HttpRequestData>();
        {
            auto& requestBodyRef = requestData->getBodyMutable();
            auto boundary = ApiClient::createRandomGuid();
            requestData->setMethod(aspose::words::cloud::HttpRequestMethod::HttpPUT);
            requestData->setPath(L"/words/batch");
            requestData->addQueryParam(L"displayIntermediateResults", displayIntermediateResults);
            requestData->setContentType("multipart/form-data; boundary=" + boundary);
            for (auto& batchRequest : requests) {
                requestBodyRef.append("--");
                requestBodyRef.append(boundary);
                requestBodyRef.append("\r\n");
                requestBodyRef.append("Content-Type: application/http; msgtype=request\r\n");
                requestBodyRef.append("Content-Disposition: form-data\r\n\r\n");
                batchRequest.serialize(m_ApiClient.get(), requestBodyRef);
                requestBodyRef.append("\r\n");
            }
            requestBodyRef.append("--");
            requestBodyRef.append(boundary);
            requestBodyRef.append("--");
        }

        response->initialize(requests);
        m_ApiClient->call(requestData, *response);
        if (response->getStatusCode() != 200) {
            throw aspose::words::cloud::ApiException(response->getStatusCode(), response->getErrorMessage());
        }

        return response;
    }
}
