/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="responses.cpp">
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
#include <sstream>
#include <unordered_map>
#include <vector>
#include <string_view>
#include <charconv>
#include "aspose_words_cloud.h"

// USE THIRD PARTY LIBS ONLY IN CPP FILES!!!
#include "../thirdparty/json.hpp"
#include "../thirdparty/utf8.h"

namespace aspose::words::cloud::responses {
    inline std::wstring convertUtf8(const std::string& value)
    {
        std::wstring result;
        ::utf8::utf8to16(value.begin(), value.end(), back_inserter(result));
        return result;
    }

    inline void string_ltrim(std::string& s) {
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
            return ch != ' ' && ch != '"';
        }));
    }

    inline void string_rtrim(std::string& s) {
        s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return ch != ' ' && ch != '"';
        }).base(), s.end());
    }

    inline void string_trim(std::string& s) {
        string_ltrim(s);
        string_rtrim(s);
    }

    template <typename T> std::shared_ptr< T > createModelInstance(const std::wstring& type, const std::string_view& response)
    {
        aspose::words::cloud::models::ModelBase* resultModel = nullptr;
        auto json = ::nlohmann::json::parse(response);
        if (json.contains("$type"))
        {
            resultModel = aspose::words::cloud::models::createModelInstance(convertUtf8(json["$type"].get< std::string >()));
        }
        else
        {
            resultModel = aspose::words::cloud::models::createModelInstance(type);
        }

        resultModel->fromJson(&json);
        return std::shared_ptr< T >(dynamic_cast< T* >(resultModel));
    }

    void parseMultipart(const std::string_view& data, std::vector<std::string_view>& result) {
        auto boundaryStart = data.find("--");
        if (boundaryStart == std::string_view::npos)
            throw ApiException(400, L"Failed to parse multipart data.");

        auto boundaryEnd = data.find("\r\n", boundaryStart);
        if (boundaryEnd == std::string_view::npos)
            throw ApiException(400, L"Failed to parse multipart data.");

        auto boundary = data.substr(boundaryStart, boundaryEnd - boundaryStart);
        auto currentPartIndex = boundaryEnd + 2;
        std::string boundaryDelimiter = "\r\n";
        boundaryDelimiter.append(boundary.begin(), boundary.end());

        while (currentPartIndex < data.size()) {
            auto nextBoundaryIndex = data.find(boundaryDelimiter, currentPartIndex);
            if (nextBoundaryIndex == std::string_view::npos)
                break;

            if (nextBoundaryIndex > currentPartIndex) {
                result.push_back(data.substr(currentPartIndex, nextBoundaryIndex - currentPartIndex));
            }

            currentPartIndex = nextBoundaryIndex + boundaryDelimiter.size();
            if (data.compare(currentPartIndex, 2, "--") == 0) {
                break;
            }

            if (data.compare(currentPartIndex, 2, "\r\n") != 0)
                throw ApiException(400, L"Failed to parse multipart data.");

            currentPartIndex += 2;
        }
    }

    void parseMultipart(const std::string_view& data, std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> >& result) {
        std::vector<std::string_view> parts;
        parseMultipart(data, parts);
        for (auto& part : parts) {
            auto bodyIndex = part.find("\r\n\r\n");
            if (bodyIndex == std::string_view::npos)
                throw ApiException(400, L"Failed to parse multipart data.");

            auto headersData = part.substr(0, bodyIndex + 2);
            auto bodyData = part.substr(bodyIndex + 4);

            std::string partName, partFileName, partContentType;
            size_t headerIndex = 0;
            while (headerIndex < headersData.length()) {
                auto headerLastIndex = headerIndex;
                headerIndex = headersData.find("\r\n", headerIndex);
                if (headerIndex == std::string_view::npos)
                    throw ApiException(400, L"Failed to parse multipart data.");

                auto header = headersData.substr(headerLastIndex, headerIndex - headerLastIndex);
                auto headerDelimilter = header.find(":");
                if (headerDelimilter == std::string_view::npos)
                    throw ApiException(400, L"Failed to parse multipart data.");

                auto headerName = header.substr(0, headerDelimilter);
                if (headerName == "Content-Disposition") {
                    auto headerValue = header.substr(headerDelimilter + 1);
                    auto partNameIndex = headerValue.find("name=");
                    if (partNameIndex == std::string_view::npos)
                        throw ApiException(400, L"Failed to parse multipart data.");

                    partName = headerValue.substr(partNameIndex + 5, headerValue.find(";", partNameIndex + 5) - (partNameIndex + 5));

                    auto partFileNameIndex = headerValue.find("filename=");
                    if (partFileNameIndex != std::string_view::npos) {
                        partFileName = headerValue.substr(partFileNameIndex + 9, headerValue.find(";", partFileNameIndex + 9) - (partFileNameIndex + 9));
                    }
                }
                else if (headerName == "Content-Type") {
                    partContentType = header.substr(headerDelimilter + 1);
                }

                headerIndex = headerIndex + 2;
            }

            if (partName.empty()) {
                throw ApiException(400, L"Failed to parse multipart data.");
            }

            string_trim(partName);
            string_trim(partFileName);
            result.emplace(partName, std::make_tuple(partFileName, partContentType, bodyData));
        }
    }

    std::shared_ptr<std::map<std::wstring, std::shared_ptr<std::istream> > > parseFilesCollection(const std::tuple<std::string, std::string, std::string_view>& multipart) {
        std::shared_ptr<std::map<std::wstring, std::shared_ptr<std::istream> > > result = std::make_shared<std::map<std::wstring, std::shared_ptr<std::istream> > >();
        if (std::get<1>(multipart).find("multipart/mixed") != std::string::npos)
        {
            std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
            parseMultipart(std::get<2>(multipart), parts);

            for (const auto& pair : parts)
            {
                std::wstring filename;
                ::utf8::utf8to16(pair.first.begin(), pair.first.end(), back_inserter(filename));
                result->emplace(filename, std::shared_ptr<std::istream>(new std::istringstream(std::string(std::get<2>(pair.second)), std::ios_base::in)));
            }
        }
        else
        {
            std::wstring filename;
            const auto& filenameRaw = std::get<0>(multipart);
            ::utf8::utf8to16(filenameRaw.begin(), filenameRaw.end(), back_inserter(filename));
            result->emplace(filename, std::shared_ptr<std::istream>(new std::istringstream(std::string(std::get<2>(multipart)), std::ios_base::in)));
        }

        return result;
    }

    void ResponseModelBase::setStatusCode(int statusCode)
    {
        m_StatusCode = statusCode;
    }

    int ResponseModelBase::getStatusCode() const
    {
        return m_StatusCode;
    }

    void ResponseModelBase::setErrorData(const std::string_view& errorData)
    {
        m_ErrorMessage.clear();

        // Try to parse error from json
        if (errorData.size() > 0 && errorData.find('{') == 0) {
            auto json = ::nlohmann::json::parse(errorData);
            if (json.contains("Error") && json["Error"].contains("Message")) {
                if (json["Error"].contains("Code")) {
                    std::string codeStr = json["Error"]["Code"].get<std::string>();
                    ::utf8::utf8to16(codeStr.begin(), codeStr.end(), back_inserter(m_ErrorMessage));
                    m_ErrorMessage.append(L" - ");
                }

                std::string messageStr = json["Error"]["Message"].get<std::string>();
                ::utf8::utf8to16(messageStr.begin(), messageStr.end(), back_inserter(m_ErrorMessage));
                return;
            }
        }

        // Else use whole error data
        ::utf8::utf8to16(errorData.begin(), errorData.end(), back_inserter(m_ErrorMessage));
    }

    const std::wstring& ResponseModelBase::getErrorMessage() const
    {
        return m_ErrorMessage;
    }

    void BatchResponse::initialize(const std::vector<aspose::words::cloud::requests::BatchRequest>& requests)
    {
        m_Order = std::make_shared< std::unordered_map< std::string, std::shared_ptr<aspose::words::cloud::requests::RequestModelBase> > >();
        for (size_t i = 0; i < requests.size(); i++) {
            auto& request = requests[i];
            m_Order->emplace(request.getRequestId(), request.get());
        }
    }

    void BatchResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::vector<std::string_view> parts;
        parseMultipart(response, parts);

        m_Result = std::make_shared< std::vector< std::shared_ptr< ResponseModelBase > > >();
        for (size_t i = 0; i < parts.size(); i++) {
            auto& part = parts.at(i);
            auto bodyIndex = part.find("\r\n\r\n");
            if (bodyIndex == std::string::npos)
                throw aspose::words::cloud::ApiException(400, L"Failed to parse batch response");

            std::string requestId, contentType;
            auto metadata = part.substr(0, bodyIndex + 2);
            size_t lastMetadataIndex = 0;
            while (true) {
                auto metadataIndex = metadata.find("\r\n", lastMetadataIndex);
                if (metadataIndex == std::string::npos) {
                    break;
                }

                auto metadataPart = metadata.substr(lastMetadataIndex, metadataIndex - lastMetadataIndex);
                if (metadataPart.find("RequestId") == 0) {
                    auto requestIdIndex = metadataPart.find(": ");
                    requestId = metadataPart.substr(requestIdIndex + 2);
                }

                lastMetadataIndex = metadataIndex + 2;
            }

            if (requestId.empty())
                throw aspose::words::cloud::ApiException(400, L"Failed to parse batch response");

            auto bodyData = part.substr(bodyIndex + 4);
            auto contentIndex = bodyData.find("\r\n\r\n");
            if (contentIndex == std::string::npos)
                throw aspose::words::cloud::ApiException(400, L"Failed to parse batch response");

            int statusCode;
            auto headersData = bodyData.substr(0, contentIndex);
            auto statusCodeIndex = headersData.find(" ");
            if (statusCodeIndex == std::string::npos)
                throw aspose::words::cloud::ApiException(400, L"Failed to parse batch response");
            auto statusCodeStr = headersData.substr(0, statusCodeIndex);
            if (std::from_chars(statusCodeStr.data(), statusCodeStr.data() + statusCodeStr.size(), statusCode).ec == std::errc::invalid_argument)
                throw aspose::words::cloud::ApiException(400, L"Failed to parse batch response");

            size_t lastHeaderIndex = 0;
            while (true) {
                auto headerIndex = headersData.find("\r\n", lastHeaderIndex);
                if (headerIndex == std::string::npos) {
                    break;
                }

                auto headerPart = headersData.substr(lastHeaderIndex, headerIndex - lastHeaderIndex);
                if (headerPart.find("Content-Type") == 0) {
                    auto requestIdIndex = headerPart.find(": ");
                    contentType = headerPart.substr(requestIdIndex + 2);
                }

                lastHeaderIndex = headerIndex + 2;
            }

            auto contentData = bodyData.substr(contentIndex + 4);

            if (m_Order->find(requestId) == m_Order->end())
                throw aspose::words::cloud::ApiException(400, L"Failed to parse batch response");

            auto request = m_Order->at(requestId);
            auto result = request.get()->createResponse();
            result->setStatusCode(statusCode);
            if (statusCode == 200) {
                result->deserialize(contentType, contentData);
            }
            else {
                result->setErrorData(contentData);
            }

            m_Result->push_back(result);
        }
    }

    size_t BatchResponse::getCount() const
    {
        return m_Result->size();
    }

    /*
     * AcceptAllRevisions request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RevisionsModificationResponse > AcceptAllRevisionsResponse::getModel() const
    {
        return m_Model;
    }

    void AcceptAllRevisionsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RevisionsModificationResponse >(L"RevisionsModificationResponse, _", response);
    }

    /*
     * AcceptAllRevisionsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RevisionsModificationResponse > AcceptAllRevisionsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > AcceptAllRevisionsOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void AcceptAllRevisionsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::RevisionsModificationResponse >(L"RevisionsModificationResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * AppendDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > AppendDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void AppendDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * AppendDocumentJob request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::JobInfo > AppendDocumentJobResponse::getModel() const
    {
        return m_Model;
    }

    void AppendDocumentJobResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::JobInfo >(L"JobInfo, _", response);
    }

    /*
     * AppendDocumentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > AppendDocumentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > AppendDocumentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void AppendDocumentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * AppendDocumentOnlineJob request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::JobInfo > AppendDocumentOnlineJobResponse::getModel() const
    {
        return m_Model;
    }

    void AppendDocumentOnlineJobResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::JobInfo >(L"JobInfo, _", response);
    }

    /*
     * ApplyStyleToDocumentElement request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::WordsResponse > ApplyStyleToDocumentElementResponse::getModel() const
    {
        return m_Model;
    }

    void ApplyStyleToDocumentElementResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::WordsResponse >(L"WordsResponse, _", response);
    }

    /*
     * ApplyStyleToDocumentElementOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::WordsResponse > ApplyStyleToDocumentElementOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > ApplyStyleToDocumentElementOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void ApplyStyleToDocumentElementOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::WordsResponse >(L"WordsResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * BuildReport request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > BuildReportResponse::getModel() const
    {
        return m_Model;
    }

    void BuildReportResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * BuildReportOnline request implementation
     */
    std::shared_ptr< std::istream > BuildReportOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void BuildReportOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * CompareDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > CompareDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void CompareDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * CompareDocumentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > CompareDocumentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > CompareDocumentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void CompareDocumentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * CompressDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CompressResponse > CompressDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void CompressDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CompressResponse >(L"CompressResponse, _", response);
    }

    /*
     * CompressDocumentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CompressResponse > CompressDocumentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > CompressDocumentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void CompressDocumentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::CompressResponse >(L"CompressResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * ConvertDocument request implementation
     */
    std::shared_ptr< std::istream > ConvertDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void ConvertDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * ConvertDocumentJob request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::JobInfo > ConvertDocumentJobResponse::getModel() const
    {
        return m_Model;
    }

    void ConvertDocumentJobResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::JobInfo >(L"JobInfo, _", response);
    }

    /*
     * CopyFile request implementation
     */

    void CopyFileResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * CopyFolder request implementation
     */

    void CopyFolderResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * CopyStyle request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > CopyStyleResponse::getModel() const
    {
        return m_Model;
    }

    void CopyStyleResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", response);
    }

    /*
     * CopyStyleOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > CopyStyleOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > CopyStyleOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void CopyStyleOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * CopyStylesFromTemplate request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::WordsResponse > CopyStylesFromTemplateResponse::getModel() const
    {
        return m_Model;
    }

    void CopyStylesFromTemplateResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::WordsResponse >(L"WordsResponse, _", response);
    }

    /*
     * CreateDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > CreateDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void CreateDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * CreateFolder request implementation
     */

    void CreateFolderResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * CreateOrUpdateDocumentProperty request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > CreateOrUpdateDocumentPropertyResponse::getModel() const
    {
        return m_Model;
    }

    void CreateOrUpdateDocumentPropertyResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentPropertyResponse >(L"DocumentPropertyResponse, _", response);
    }

    /*
     * CreateOrUpdateDocumentPropertyOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > CreateOrUpdateDocumentPropertyOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > CreateOrUpdateDocumentPropertyOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void CreateOrUpdateDocumentPropertyOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentPropertyResponse >(L"DocumentPropertyResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * DeleteAllParagraphTabStops request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > DeleteAllParagraphTabStopsResponse::getModel() const
    {
        return m_Model;
    }

    void DeleteAllParagraphTabStopsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TabStopsResponse >(L"TabStopsResponse, _", response);
    }

    /*
     * DeleteAllParagraphTabStopsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > DeleteAllParagraphTabStopsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteAllParagraphTabStopsOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteAllParagraphTabStopsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::TabStopsResponse >(L"TabStopsResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * DeleteBookmark request implementation
     */

    void DeleteBookmarkResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteBookmarkOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteBookmarkOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteBookmarkOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteBookmarks request implementation
     */

    void DeleteBookmarksResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteBookmarksOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteBookmarksOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteBookmarksOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteBorder request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BorderResponse > DeleteBorderResponse::getModel() const
    {
        return m_Model;
    }

    void DeleteBorderResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BorderResponse >(L"BorderResponse, _", response);
    }

    /*
     * DeleteBorderOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BorderResponse > DeleteBorderOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteBorderOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteBorderOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::BorderResponse >(L"BorderResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * DeleteBorders request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BordersResponse > DeleteBordersResponse::getModel() const
    {
        return m_Model;
    }

    void DeleteBordersResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BordersResponse >(L"BordersResponse, _", response);
    }

    /*
     * DeleteBordersOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BordersResponse > DeleteBordersOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteBordersOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteBordersOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::BordersResponse >(L"BordersResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * DeleteComment request implementation
     */

    void DeleteCommentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteCommentOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteCommentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteCommentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteComments request implementation
     */

    void DeleteCommentsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteCommentsOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteCommentsOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteCommentsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteCustomXmlPart request implementation
     */

    void DeleteCustomXmlPartResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteCustomXmlPartOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteCustomXmlPartOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteCustomXmlPartOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteCustomXmlParts request implementation
     */

    void DeleteCustomXmlPartsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteCustomXmlPartsOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteCustomXmlPartsOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteCustomXmlPartsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteDocumentProperty request implementation
     */

    void DeleteDocumentPropertyResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteDocumentPropertyOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteDocumentPropertyOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteDocumentPropertyOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteDrawingObject request implementation
     */

    void DeleteDrawingObjectResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteDrawingObjectOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteDrawingObjectOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteDrawingObjectOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteField request implementation
     */

    void DeleteFieldResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteFieldOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteFieldOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteFieldOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteFields request implementation
     */

    void DeleteFieldsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteFieldsOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteFieldsOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteFieldsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteFile request implementation
     */

    void DeleteFileResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteFolder request implementation
     */

    void DeleteFolderResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteFootnote request implementation
     */

    void DeleteFootnoteResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteFootnoteOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteFootnoteOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteFootnoteOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteFormField request implementation
     */

    void DeleteFormFieldResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteFormFieldOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteFormFieldOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteFormFieldOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteHeaderFooter request implementation
     */

    void DeleteHeaderFooterResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteHeaderFooterOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteHeaderFooterOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteHeaderFooterOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteHeadersFooters request implementation
     */

    void DeleteHeadersFootersResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteHeadersFootersOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteHeadersFootersOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteHeadersFootersOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteMacros request implementation
     */

    void DeleteMacrosResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteMacrosOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteMacrosOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteMacrosOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteOfficeMathObject request implementation
     */

    void DeleteOfficeMathObjectResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteOfficeMathObjectOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteOfficeMathObjectOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteOfficeMathObjectOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteOfficeMathObjects request implementation
     */

    void DeleteOfficeMathObjectsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteOfficeMathObjectsOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteOfficeMathObjectsOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteOfficeMathObjectsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteParagraph request implementation
     */

    void DeleteParagraphResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteParagraphListFormat request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > DeleteParagraphListFormatResponse::getModel() const
    {
        return m_Model;
    }

    void DeleteParagraphListFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphListFormatResponse >(L"ParagraphListFormatResponse, _", response);
    }

    /*
     * DeleteParagraphListFormatOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > DeleteParagraphListFormatOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteParagraphListFormatOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteParagraphListFormatOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ParagraphListFormatResponse >(L"ParagraphListFormatResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * DeleteParagraphOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteParagraphOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteParagraphOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteParagraphTabStop request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > DeleteParagraphTabStopResponse::getModel() const
    {
        return m_Model;
    }

    void DeleteParagraphTabStopResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TabStopsResponse >(L"TabStopsResponse, _", response);
    }

    /*
     * DeleteParagraphTabStopOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > DeleteParagraphTabStopOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteParagraphTabStopOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteParagraphTabStopOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::TabStopsResponse >(L"TabStopsResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * DeleteRun request implementation
     */

    void DeleteRunResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteRunOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteRunOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteRunOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteSection request implementation
     */

    void DeleteSectionResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteSectionOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteSectionOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteSectionOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteStructuredDocumentTag request implementation
     */

    void DeleteStructuredDocumentTagResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteStructuredDocumentTagOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteStructuredDocumentTagOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteStructuredDocumentTagOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteTable request implementation
     */

    void DeleteTableResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteTableCell request implementation
     */

    void DeleteTableCellResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteTableCellOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteTableCellOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteTableCellOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteTableOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteTableOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteTableOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteTableRow request implementation
     */

    void DeleteTableRowResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * DeleteTableRowOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteTableRowOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteTableRowOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * DeleteWatermark request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > DeleteWatermarkResponse::getModel() const
    {
        return m_Model;
    }

    void DeleteWatermarkResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * DeleteWatermarkOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > DeleteWatermarkOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > DeleteWatermarkOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void DeleteWatermarkOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * DownloadFile request implementation
     */
    std::shared_ptr< std::istream > DownloadFileResponse::getModel() const
    {
        return m_Model;
    }

    void DownloadFileResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * ExecuteMailMerge request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > ExecuteMailMergeResponse::getModel() const
    {
        return m_Model;
    }

    void ExecuteMailMergeResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * ExecuteMailMergeJob request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::JobInfo > ExecuteMailMergeJobResponse::getModel() const
    {
        return m_Model;
    }

    void ExecuteMailMergeJobResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::JobInfo >(L"JobInfo, _", response);
    }

    /*
     * ExecuteMailMergeOnline request implementation
     */
    std::shared_ptr< std::istream > ExecuteMailMergeOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void ExecuteMailMergeOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * ExecuteMailMergeOnlineJob request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::JobInfo > ExecuteMailMergeOnlineJobResponse::getModel() const
    {
        return m_Model;
    }

    void ExecuteMailMergeOnlineJobResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::JobInfo >(L"JobInfo, _", response);
    }

    /*
     * GetAllRevisions request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RevisionsResponse > GetAllRevisionsResponse::getModel() const
    {
        return m_Model;
    }

    void GetAllRevisionsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RevisionsResponse >(L"RevisionsResponse, _", response);
    }

    /*
     * GetAllRevisionsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RevisionsResponse > GetAllRevisionsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetAllRevisionsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RevisionsResponse >(L"RevisionsResponse, _", response);
    }

    /*
     * GetAvailableFonts request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::AvailableFontsResponse > GetAvailableFontsResponse::getModel() const
    {
        return m_Model;
    }

    void GetAvailableFontsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::AvailableFontsResponse >(L"AvailableFontsResponse, _", response);
    }

    /*
     * GetBookmarkByName request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > GetBookmarkByNameResponse::getModel() const
    {
        return m_Model;
    }

    void GetBookmarkByNameResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BookmarkResponse >(L"BookmarkResponse, _", response);
    }

    /*
     * GetBookmarkByNameOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > GetBookmarkByNameOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetBookmarkByNameOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BookmarkResponse >(L"BookmarkResponse, _", response);
    }

    /*
     * GetBookmarks request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BookmarksResponse > GetBookmarksResponse::getModel() const
    {
        return m_Model;
    }

    void GetBookmarksResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BookmarksResponse >(L"BookmarksResponse, _", response);
    }

    /*
     * GetBookmarksOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BookmarksResponse > GetBookmarksOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetBookmarksOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BookmarksResponse >(L"BookmarksResponse, _", response);
    }

    /*
     * GetBorder request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BorderResponse > GetBorderResponse::getModel() const
    {
        return m_Model;
    }

    void GetBorderResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BorderResponse >(L"BorderResponse, _", response);
    }

    /*
     * GetBorderOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BorderResponse > GetBorderOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetBorderOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BorderResponse >(L"BorderResponse, _", response);
    }

    /*
     * GetBorders request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BordersResponse > GetBordersResponse::getModel() const
    {
        return m_Model;
    }

    void GetBordersResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BordersResponse >(L"BordersResponse, _", response);
    }

    /*
     * GetBordersOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BordersResponse > GetBordersOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetBordersOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BordersResponse >(L"BordersResponse, _", response);
    }

    /*
     * GetComment request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CommentResponse > GetCommentResponse::getModel() const
    {
        return m_Model;
    }

    void GetCommentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CommentResponse >(L"CommentResponse, _", response);
    }

    /*
     * GetCommentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CommentResponse > GetCommentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetCommentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CommentResponse >(L"CommentResponse, _", response);
    }

    /*
     * GetComments request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CommentsResponse > GetCommentsResponse::getModel() const
    {
        return m_Model;
    }

    void GetCommentsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CommentsResponse >(L"CommentsResponse, _", response);
    }

    /*
     * GetCommentsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CommentsResponse > GetCommentsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetCommentsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CommentsResponse >(L"CommentsResponse, _", response);
    }

    /*
     * GetCustomXmlPart request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > GetCustomXmlPartResponse::getModel() const
    {
        return m_Model;
    }

    void GetCustomXmlPartResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CustomXmlPartResponse >(L"CustomXmlPartResponse, _", response);
    }

    /*
     * GetCustomXmlPartOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > GetCustomXmlPartOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetCustomXmlPartOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CustomXmlPartResponse >(L"CustomXmlPartResponse, _", response);
    }

    /*
     * GetCustomXmlParts request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartsResponse > GetCustomXmlPartsResponse::getModel() const
    {
        return m_Model;
    }

    void GetCustomXmlPartsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CustomXmlPartsResponse >(L"CustomXmlPartsResponse, _", response);
    }

    /*
     * GetCustomXmlPartsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartsResponse > GetCustomXmlPartsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetCustomXmlPartsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CustomXmlPartsResponse >(L"CustomXmlPartsResponse, _", response);
    }

    /*
     * GetDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > GetDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * GetDocumentDrawingObjectByIndex request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > GetDocumentDrawingObjectByIndexResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentDrawingObjectByIndexResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectResponse >(L"DrawingObjectResponse, _", response);
    }

    /*
     * GetDocumentDrawingObjectByIndexOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > GetDocumentDrawingObjectByIndexOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentDrawingObjectByIndexOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectResponse >(L"DrawingObjectResponse, _", response);
    }

    /*
     * GetDocumentDrawingObjectImageData request implementation
     */
    std::shared_ptr< std::istream > GetDocumentDrawingObjectImageDataResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentDrawingObjectImageDataResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * GetDocumentDrawingObjectImageDataOnline request implementation
     */
    std::shared_ptr< std::istream > GetDocumentDrawingObjectImageDataOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentDrawingObjectImageDataOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * GetDocumentDrawingObjectOleData request implementation
     */
    std::shared_ptr< std::istream > GetDocumentDrawingObjectOleDataResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentDrawingObjectOleDataResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * GetDocumentDrawingObjectOleDataOnline request implementation
     */
    std::shared_ptr< std::istream > GetDocumentDrawingObjectOleDataOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentDrawingObjectOleDataOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * GetDocumentDrawingObjects request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectsResponse > GetDocumentDrawingObjectsResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentDrawingObjectsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectsResponse >(L"DrawingObjectsResponse, _", response);
    }

    /*
     * GetDocumentDrawingObjectsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectsResponse > GetDocumentDrawingObjectsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentDrawingObjectsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectsResponse >(L"DrawingObjectsResponse, _", response);
    }

    /*
     * GetDocumentFieldNames request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldNamesResponse > GetDocumentFieldNamesResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentFieldNamesResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FieldNamesResponse >(L"FieldNamesResponse, _", response);
    }

    /*
     * GetDocumentFieldNamesOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldNamesResponse > GetDocumentFieldNamesOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentFieldNamesOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FieldNamesResponse >(L"FieldNamesResponse, _", response);
    }

    /*
     * GetDocumentHyperlinkByIndex request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HyperlinkResponse > GetDocumentHyperlinkByIndexResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentHyperlinkByIndexResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HyperlinkResponse >(L"HyperlinkResponse, _", response);
    }

    /*
     * GetDocumentHyperlinkByIndexOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HyperlinkResponse > GetDocumentHyperlinkByIndexOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentHyperlinkByIndexOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HyperlinkResponse >(L"HyperlinkResponse, _", response);
    }

    /*
     * GetDocumentHyperlinks request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HyperlinksResponse > GetDocumentHyperlinksResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentHyperlinksResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HyperlinksResponse >(L"HyperlinksResponse, _", response);
    }

    /*
     * GetDocumentHyperlinksOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HyperlinksResponse > GetDocumentHyperlinksOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentHyperlinksOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HyperlinksResponse >(L"HyperlinksResponse, _", response);
    }

    /*
     * GetDocumentProperties request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentPropertiesResponse > GetDocumentPropertiesResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentPropertiesResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentPropertiesResponse >(L"DocumentPropertiesResponse, _", response);
    }

    /*
     * GetDocumentPropertiesOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentPropertiesResponse > GetDocumentPropertiesOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentPropertiesOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentPropertiesResponse >(L"DocumentPropertiesResponse, _", response);
    }

    /*
     * GetDocumentProperty request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > GetDocumentPropertyResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentPropertyResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentPropertyResponse >(L"DocumentPropertyResponse, _", response);
    }

    /*
     * GetDocumentPropertyOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentPropertyResponse > GetDocumentPropertyOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentPropertyOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentPropertyResponse >(L"DocumentPropertyResponse, _", response);
    }

    /*
     * GetDocumentProtection request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > GetDocumentProtectionResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentProtectionResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ProtectionDataResponse >(L"ProtectionDataResponse, _", response);
    }

    /*
     * GetDocumentProtectionOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > GetDocumentProtectionOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentProtectionOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ProtectionDataResponse >(L"ProtectionDataResponse, _", response);
    }

    /*
     * GetDocumentStatistics request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StatDataResponse > GetDocumentStatisticsResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentStatisticsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StatDataResponse >(L"StatDataResponse, _", response);
    }

    /*
     * GetDocumentStatisticsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StatDataResponse > GetDocumentStatisticsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentStatisticsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StatDataResponse >(L"StatDataResponse, _", response);
    }

    /*
     * GetDocumentWithFormat request implementation
     */
    std::shared_ptr< std::istream > GetDocumentWithFormatResponse::getModel() const
    {
        return m_Model;
    }

    void GetDocumentWithFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * GetField request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldResponse > GetFieldResponse::getModel() const
    {
        return m_Model;
    }

    void GetFieldResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FieldResponse >(L"FieldResponse, _", response);
    }

    /*
     * GetFieldOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldResponse > GetFieldOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetFieldOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FieldResponse >(L"FieldResponse, _", response);
    }

    /*
     * GetFields request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldsResponse > GetFieldsResponse::getModel() const
    {
        return m_Model;
    }

    void GetFieldsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FieldsResponse >(L"FieldsResponse, _", response);
    }

    /*
     * GetFieldsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldsResponse > GetFieldsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetFieldsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FieldsResponse >(L"FieldsResponse, _", response);
    }

    /*
     * GetFilesList request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FilesList > GetFilesListResponse::getModel() const
    {
        return m_Model;
    }

    void GetFilesListResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FilesList >(L"FilesList, _", response);
    }

    /*
     * GetFootnote request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > GetFootnoteResponse::getModel() const
    {
        return m_Model;
    }

    void GetFootnoteResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FootnoteResponse >(L"FootnoteResponse, _", response);
    }

    /*
     * GetFootnoteOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > GetFootnoteOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetFootnoteOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FootnoteResponse >(L"FootnoteResponse, _", response);
    }

    /*
     * GetFootnotes request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FootnotesResponse > GetFootnotesResponse::getModel() const
    {
        return m_Model;
    }

    void GetFootnotesResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FootnotesResponse >(L"FootnotesResponse, _", response);
    }

    /*
     * GetFootnotesOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FootnotesResponse > GetFootnotesOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetFootnotesOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FootnotesResponse >(L"FootnotesResponse, _", response);
    }

    /*
     * GetFormField request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > GetFormFieldResponse::getModel() const
    {
        return m_Model;
    }

    void GetFormFieldResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FormFieldResponse >(L"FormFieldResponse, _", response);
    }

    /*
     * GetFormFieldOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > GetFormFieldOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetFormFieldOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FormFieldResponse >(L"FormFieldResponse, _", response);
    }

    /*
     * GetFormFields request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FormFieldsResponse > GetFormFieldsResponse::getModel() const
    {
        return m_Model;
    }

    void GetFormFieldsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FormFieldsResponse >(L"FormFieldsResponse, _", response);
    }

    /*
     * GetFormFieldsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FormFieldsResponse > GetFormFieldsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetFormFieldsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FormFieldsResponse >(L"FormFieldsResponse, _", response);
    }

    /*
     * GetHeaderFooter request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > GetHeaderFooterResponse::getModel() const
    {
        return m_Model;
    }

    void GetHeaderFooterResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HeaderFooterResponse >(L"HeaderFooterResponse, _", response);
    }

    /*
     * GetHeaderFooterOfSection request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > GetHeaderFooterOfSectionResponse::getModel() const
    {
        return m_Model;
    }

    void GetHeaderFooterOfSectionResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HeaderFooterResponse >(L"HeaderFooterResponse, _", response);
    }

    /*
     * GetHeaderFooterOfSectionOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > GetHeaderFooterOfSectionOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetHeaderFooterOfSectionOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HeaderFooterResponse >(L"HeaderFooterResponse, _", response);
    }

    /*
     * GetHeaderFooterOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > GetHeaderFooterOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetHeaderFooterOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HeaderFooterResponse >(L"HeaderFooterResponse, _", response);
    }

    /*
     * GetHeaderFooters request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HeaderFootersResponse > GetHeaderFootersResponse::getModel() const
    {
        return m_Model;
    }

    void GetHeaderFootersResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HeaderFootersResponse >(L"HeaderFootersResponse, _", response);
    }

    /*
     * GetHeaderFootersOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HeaderFootersResponse > GetHeaderFootersOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetHeaderFootersOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HeaderFootersResponse >(L"HeaderFootersResponse, _", response);
    }

    /*
     * GetInfo request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::InfoResponse > GetInfoResponse::getModel() const
    {
        return m_Model;
    }

    void GetInfoResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::InfoResponse >(L"InfoResponse, _", response);
    }

    /*
     * GetList request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListResponse > GetListResponse::getModel() const
    {
        return m_Model;
    }

    void GetListResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ListResponse >(L"ListResponse, _", response);
    }

    /*
     * GetListOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListResponse > GetListOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetListOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ListResponse >(L"ListResponse, _", response);
    }

    /*
     * GetLists request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListsResponse > GetListsResponse::getModel() const
    {
        return m_Model;
    }

    void GetListsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ListsResponse >(L"ListsResponse, _", response);
    }

    /*
     * GetListsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListsResponse > GetListsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetListsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ListsResponse >(L"ListsResponse, _", response);
    }

    /*
     * GetOfficeMathObject request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectResponse > GetOfficeMathObjectResponse::getModel() const
    {
        return m_Model;
    }

    void GetOfficeMathObjectResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::OfficeMathObjectResponse >(L"OfficeMathObjectResponse, _", response);
    }

    /*
     * GetOfficeMathObjectOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectResponse > GetOfficeMathObjectOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetOfficeMathObjectOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::OfficeMathObjectResponse >(L"OfficeMathObjectResponse, _", response);
    }

    /*
     * GetOfficeMathObjects request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectsResponse > GetOfficeMathObjectsResponse::getModel() const
    {
        return m_Model;
    }

    void GetOfficeMathObjectsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::OfficeMathObjectsResponse >(L"OfficeMathObjectsResponse, _", response);
    }

    /*
     * GetOfficeMathObjectsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::OfficeMathObjectsResponse > GetOfficeMathObjectsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetOfficeMathObjectsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::OfficeMathObjectsResponse >(L"OfficeMathObjectsResponse, _", response);
    }

    /*
     * GetParagraph request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > GetParagraphResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphResponse >(L"ParagraphResponse, _", response);
    }

    /*
     * GetParagraphFormat request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > GetParagraphFormatResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphFormatResponse >(L"ParagraphFormatResponse, _", response);
    }

    /*
     * GetParagraphFormatOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > GetParagraphFormatOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphFormatOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphFormatResponse >(L"ParagraphFormatResponse, _", response);
    }

    /*
     * GetParagraphListFormat request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > GetParagraphListFormatResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphListFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphListFormatResponse >(L"ParagraphListFormatResponse, _", response);
    }

    /*
     * GetParagraphListFormatOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > GetParagraphListFormatOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphListFormatOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphListFormatResponse >(L"ParagraphListFormatResponse, _", response);
    }

    /*
     * GetParagraphOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > GetParagraphOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphResponse >(L"ParagraphResponse, _", response);
    }

    /*
     * GetParagraphs request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphLinkCollectionResponse > GetParagraphsResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphLinkCollectionResponse >(L"ParagraphLinkCollectionResponse, _", response);
    }

    /*
     * GetParagraphsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphLinkCollectionResponse > GetParagraphsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphLinkCollectionResponse >(L"ParagraphLinkCollectionResponse, _", response);
    }

    /*
     * GetParagraphTabStops request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > GetParagraphTabStopsResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphTabStopsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TabStopsResponse >(L"TabStopsResponse, _", response);
    }

    /*
     * GetParagraphTabStopsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > GetParagraphTabStopsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetParagraphTabStopsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TabStopsResponse >(L"TabStopsResponse, _", response);
    }

    /*
     * GetPublicKey request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::PublicKeyResponse > GetPublicKeyResponse::getModel() const
    {
        return m_Model;
    }

    void GetPublicKeyResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::PublicKeyResponse >(L"PublicKeyResponse, _", response);
    }

    /*
     * GetRangeText request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RangeTextResponse > GetRangeTextResponse::getModel() const
    {
        return m_Model;
    }

    void GetRangeTextResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RangeTextResponse >(L"RangeTextResponse, _", response);
    }

    /*
     * GetRangeTextOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RangeTextResponse > GetRangeTextOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetRangeTextOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RangeTextResponse >(L"RangeTextResponse, _", response);
    }

    /*
     * GetRun request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RunResponse > GetRunResponse::getModel() const
    {
        return m_Model;
    }

    void GetRunResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RunResponse >(L"RunResponse, _", response);
    }

    /*
     * GetRunFont request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FontResponse > GetRunFontResponse::getModel() const
    {
        return m_Model;
    }

    void GetRunFontResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FontResponse >(L"FontResponse, _", response);
    }

    /*
     * GetRunFontOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FontResponse > GetRunFontOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetRunFontOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FontResponse >(L"FontResponse, _", response);
    }

    /*
     * GetRunOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RunResponse > GetRunOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetRunOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RunResponse >(L"RunResponse, _", response);
    }

    /*
     * GetRuns request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RunsResponse > GetRunsResponse::getModel() const
    {
        return m_Model;
    }

    void GetRunsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RunsResponse >(L"RunsResponse, _", response);
    }

    /*
     * GetRunsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RunsResponse > GetRunsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetRunsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RunsResponse >(L"RunsResponse, _", response);
    }

    /*
     * GetSection request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SectionResponse > GetSectionResponse::getModel() const
    {
        return m_Model;
    }

    void GetSectionResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SectionResponse >(L"SectionResponse, _", response);
    }

    /*
     * GetSectionOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SectionResponse > GetSectionOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetSectionOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SectionResponse >(L"SectionResponse, _", response);
    }

    /*
     * GetSectionPageSetup request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > GetSectionPageSetupResponse::getModel() const
    {
        return m_Model;
    }

    void GetSectionPageSetupResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SectionPageSetupResponse >(L"SectionPageSetupResponse, _", response);
    }

    /*
     * GetSectionPageSetupOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > GetSectionPageSetupOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetSectionPageSetupOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SectionPageSetupResponse >(L"SectionPageSetupResponse, _", response);
    }

    /*
     * GetSections request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SectionLinkCollectionResponse > GetSectionsResponse::getModel() const
    {
        return m_Model;
    }

    void GetSectionsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SectionLinkCollectionResponse >(L"SectionLinkCollectionResponse, _", response);
    }

    /*
     * GetSectionsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SectionLinkCollectionResponse > GetSectionsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetSectionsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SectionLinkCollectionResponse >(L"SectionLinkCollectionResponse, _", response);
    }

    /*
     * GetSignatures request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > GetSignaturesResponse::getModel() const
    {
        return m_Model;
    }

    void GetSignaturesResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SignatureCollectionResponse >(L"SignatureCollectionResponse, _", response);
    }

    /*
     * GetSignaturesOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > GetSignaturesOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetSignaturesOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SignatureCollectionResponse >(L"SignatureCollectionResponse, _", response);
    }

    /*
     * GetStructuredDocumentTag request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > GetStructuredDocumentTagResponse::getModel() const
    {
        return m_Model;
    }

    void GetStructuredDocumentTagResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StructuredDocumentTagResponse >(L"StructuredDocumentTagResponse, _", response);
    }

    /*
     * GetStructuredDocumentTagOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > GetStructuredDocumentTagOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetStructuredDocumentTagOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StructuredDocumentTagResponse >(L"StructuredDocumentTagResponse, _", response);
    }

    /*
     * GetStructuredDocumentTags request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagsResponse > GetStructuredDocumentTagsResponse::getModel() const
    {
        return m_Model;
    }

    void GetStructuredDocumentTagsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StructuredDocumentTagsResponse >(L"StructuredDocumentTagsResponse, _", response);
    }

    /*
     * GetStructuredDocumentTagsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagsResponse > GetStructuredDocumentTagsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetStructuredDocumentTagsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StructuredDocumentTagsResponse >(L"StructuredDocumentTagsResponse, _", response);
    }

    /*
     * GetStyle request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > GetStyleResponse::getModel() const
    {
        return m_Model;
    }

    void GetStyleResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", response);
    }

    /*
     * GetStyleFromDocumentElement request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > GetStyleFromDocumentElementResponse::getModel() const
    {
        return m_Model;
    }

    void GetStyleFromDocumentElementResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", response);
    }

    /*
     * GetStyleFromDocumentElementOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > GetStyleFromDocumentElementOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetStyleFromDocumentElementOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", response);
    }

    /*
     * GetStyleOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > GetStyleOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetStyleOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", response);
    }

    /*
     * GetStyles request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StylesResponse > GetStylesResponse::getModel() const
    {
        return m_Model;
    }

    void GetStylesResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StylesResponse >(L"StylesResponse, _", response);
    }

    /*
     * GetStylesOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StylesResponse > GetStylesOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetStylesOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StylesResponse >(L"StylesResponse, _", response);
    }

    /*
     * GetTable request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableResponse > GetTableResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableResponse >(L"TableResponse, _", response);
    }

    /*
     * GetTableCell request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableCellResponse > GetTableCellResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableCellResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableCellResponse >(L"TableCellResponse, _", response);
    }

    /*
     * GetTableCellFormat request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > GetTableCellFormatResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableCellFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableCellFormatResponse >(L"TableCellFormatResponse, _", response);
    }

    /*
     * GetTableCellFormatOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > GetTableCellFormatOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableCellFormatOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableCellFormatResponse >(L"TableCellFormatResponse, _", response);
    }

    /*
     * GetTableCellOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableCellResponse > GetTableCellOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableCellOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableCellResponse >(L"TableCellResponse, _", response);
    }

    /*
     * GetTableOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableResponse > GetTableOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableResponse >(L"TableResponse, _", response);
    }

    /*
     * GetTableProperties request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > GetTablePropertiesResponse::getModel() const
    {
        return m_Model;
    }

    void GetTablePropertiesResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TablePropertiesResponse >(L"TablePropertiesResponse, _", response);
    }

    /*
     * GetTablePropertiesOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > GetTablePropertiesOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetTablePropertiesOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TablePropertiesResponse >(L"TablePropertiesResponse, _", response);
    }

    /*
     * GetTableRow request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableRowResponse > GetTableRowResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableRowResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableRowResponse >(L"TableRowResponse, _", response);
    }

    /*
     * GetTableRowFormat request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > GetTableRowFormatResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableRowFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableRowFormatResponse >(L"TableRowFormatResponse, _", response);
    }

    /*
     * GetTableRowFormatOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > GetTableRowFormatOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableRowFormatOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableRowFormatResponse >(L"TableRowFormatResponse, _", response);
    }

    /*
     * GetTableRowOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableRowResponse > GetTableRowOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetTableRowOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableRowResponse >(L"TableRowResponse, _", response);
    }

    /*
     * GetTables request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableLinkCollectionResponse > GetTablesResponse::getModel() const
    {
        return m_Model;
    }

    void GetTablesResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableLinkCollectionResponse >(L"TableLinkCollectionResponse, _", response);
    }

    /*
     * GetTablesOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableLinkCollectionResponse > GetTablesOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void GetTablesOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableLinkCollectionResponse >(L"TableLinkCollectionResponse, _", response);
    }

    /*
     * InsertBookmark request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > InsertBookmarkResponse::getModel() const
    {
        return m_Model;
    }

    void InsertBookmarkResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BookmarkResponse >(L"BookmarkResponse, _", response);
    }

    /*
     * InsertBookmarkOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > InsertBookmarkOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertBookmarkOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertBookmarkOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::BookmarkResponse >(L"BookmarkResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertComment request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CommentResponse > InsertCommentResponse::getModel() const
    {
        return m_Model;
    }

    void InsertCommentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CommentResponse >(L"CommentResponse, _", response);
    }

    /*
     * InsertCommentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CommentResponse > InsertCommentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertCommentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertCommentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::CommentResponse >(L"CommentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertCustomXmlPart request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > InsertCustomXmlPartResponse::getModel() const
    {
        return m_Model;
    }

    void InsertCustomXmlPartResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CustomXmlPartResponse >(L"CustomXmlPartResponse, _", response);
    }

    /*
     * InsertCustomXmlPartOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > InsertCustomXmlPartOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertCustomXmlPartOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertCustomXmlPartOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::CustomXmlPartResponse >(L"CustomXmlPartResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertDrawingObject request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > InsertDrawingObjectResponse::getModel() const
    {
        return m_Model;
    }

    void InsertDrawingObjectResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectResponse >(L"DrawingObjectResponse, _", response);
    }

    /*
     * InsertDrawingObjectByReference request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > InsertDrawingObjectByReferenceResponse::getModel() const
    {
        return m_Model;
    }

    void InsertDrawingObjectByReferenceResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectResponse >(L"DrawingObjectResponse, _", response);
    }

    /*
     * InsertDrawingObjectByReferenceOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > InsertDrawingObjectByReferenceOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertDrawingObjectByReferenceOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertDrawingObjectByReferenceOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectResponse >(L"DrawingObjectResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertDrawingObjectOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > InsertDrawingObjectOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertDrawingObjectOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertDrawingObjectOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectResponse >(L"DrawingObjectResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertField request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldResponse > InsertFieldResponse::getModel() const
    {
        return m_Model;
    }

    void InsertFieldResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FieldResponse >(L"FieldResponse, _", response);
    }

    /*
     * InsertFieldOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldResponse > InsertFieldOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertFieldOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertFieldOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::FieldResponse >(L"FieldResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertFootnote request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > InsertFootnoteResponse::getModel() const
    {
        return m_Model;
    }

    void InsertFootnoteResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FootnoteResponse >(L"FootnoteResponse, _", response);
    }

    /*
     * InsertFootnoteOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > InsertFootnoteOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertFootnoteOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertFootnoteOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::FootnoteResponse >(L"FootnoteResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertFormField request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > InsertFormFieldResponse::getModel() const
    {
        return m_Model;
    }

    void InsertFormFieldResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FormFieldResponse >(L"FormFieldResponse, _", response);
    }

    /*
     * InsertFormFieldOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > InsertFormFieldOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertFormFieldOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertFormFieldOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::FormFieldResponse >(L"FormFieldResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertHeaderFooter request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > InsertHeaderFooterResponse::getModel() const
    {
        return m_Model;
    }

    void InsertHeaderFooterResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::HeaderFooterResponse >(L"HeaderFooterResponse, _", response);
    }

    /*
     * InsertHeaderFooterOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::HeaderFooterResponse > InsertHeaderFooterOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertHeaderFooterOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertHeaderFooterOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::HeaderFooterResponse >(L"HeaderFooterResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertList request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListResponse > InsertListResponse::getModel() const
    {
        return m_Model;
    }

    void InsertListResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ListResponse >(L"ListResponse, _", response);
    }

    /*
     * InsertListOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListResponse > InsertListOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertListOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertListOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ListResponse >(L"ListResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertOrUpdateParagraphTabStop request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > InsertOrUpdateParagraphTabStopResponse::getModel() const
    {
        return m_Model;
    }

    void InsertOrUpdateParagraphTabStopResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TabStopsResponse >(L"TabStopsResponse, _", response);
    }

    /*
     * InsertOrUpdateParagraphTabStopOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TabStopsResponse > InsertOrUpdateParagraphTabStopOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertOrUpdateParagraphTabStopOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertOrUpdateParagraphTabStopOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::TabStopsResponse >(L"TabStopsResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertPageNumbers request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > InsertPageNumbersResponse::getModel() const
    {
        return m_Model;
    }

    void InsertPageNumbersResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * InsertPageNumbersOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > InsertPageNumbersOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertPageNumbersOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertPageNumbersOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertParagraph request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > InsertParagraphResponse::getModel() const
    {
        return m_Model;
    }

    void InsertParagraphResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphResponse >(L"ParagraphResponse, _", response);
    }

    /*
     * InsertParagraphOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphResponse > InsertParagraphOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertParagraphOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertParagraphOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ParagraphResponse >(L"ParagraphResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertRun request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RunResponse > InsertRunResponse::getModel() const
    {
        return m_Model;
    }

    void InsertRunResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RunResponse >(L"RunResponse, _", response);
    }

    /*
     * InsertRunOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RunResponse > InsertRunOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertRunOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertRunOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::RunResponse >(L"RunResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertSection request implementation
     */

    void InsertSectionResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * InsertSectionOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertSectionOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertSectionOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * InsertStructuredDocumentTag request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > InsertStructuredDocumentTagResponse::getModel() const
    {
        return m_Model;
    }

    void InsertStructuredDocumentTagResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StructuredDocumentTagResponse >(L"StructuredDocumentTagResponse, _", response);
    }

    /*
     * InsertStructuredDocumentTagOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > InsertStructuredDocumentTagOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertStructuredDocumentTagOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertStructuredDocumentTagOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::StructuredDocumentTagResponse >(L"StructuredDocumentTagResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertStyle request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > InsertStyleResponse::getModel() const
    {
        return m_Model;
    }

    void InsertStyleResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", response);
    }

    /*
     * InsertStyleOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > InsertStyleOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertStyleOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertStyleOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertTable request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableResponse > InsertTableResponse::getModel() const
    {
        return m_Model;
    }

    void InsertTableResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableResponse >(L"TableResponse, _", response);
    }

    /*
     * InsertTableCell request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableCellResponse > InsertTableCellResponse::getModel() const
    {
        return m_Model;
    }

    void InsertTableCellResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableCellResponse >(L"TableCellResponse, _", response);
    }

    /*
     * InsertTableCellOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableCellResponse > InsertTableCellOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertTableCellOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertTableCellOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::TableCellResponse >(L"TableCellResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertTableOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableResponse > InsertTableOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertTableOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertTableOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::TableResponse >(L"TableResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertTableRow request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableRowResponse > InsertTableRowResponse::getModel() const
    {
        return m_Model;
    }

    void InsertTableRowResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableRowResponse >(L"TableRowResponse, _", response);
    }

    /*
     * InsertTableRowOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableRowResponse > InsertTableRowOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertTableRowOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertTableRowOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::TableRowResponse >(L"TableRowResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertWatermark request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > InsertWatermarkResponse::getModel() const
    {
        return m_Model;
    }

    void InsertWatermarkResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * InsertWatermarkImage request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > InsertWatermarkImageResponse::getModel() const
    {
        return m_Model;
    }

    void InsertWatermarkImageResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * InsertWatermarkImageOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > InsertWatermarkImageOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertWatermarkImageOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertWatermarkImageOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertWatermarkOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > InsertWatermarkOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertWatermarkOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertWatermarkOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * InsertWatermarkText request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > InsertWatermarkTextResponse::getModel() const
    {
        return m_Model;
    }

    void InsertWatermarkTextResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * InsertWatermarkTextOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > InsertWatermarkTextOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > InsertWatermarkTextOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void InsertWatermarkTextOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * LinkHeaderFootersToPrevious request implementation
     */

    void LinkHeaderFootersToPreviousResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * LoadWebDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SaveResponse > LoadWebDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void LoadWebDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SaveResponse >(L"SaveResponse, _", response);
    }

    /*
     * LoadWebDocumentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SaveResponse > LoadWebDocumentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > LoadWebDocumentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void LoadWebDocumentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::SaveResponse >(L"SaveResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * MergeWithNext request implementation
     */

    void MergeWithNextResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * MergeWithNextOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > MergeWithNextOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void MergeWithNextOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * MoveFile request implementation
     */

    void MoveFileResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * MoveFolder request implementation
     */

    void MoveFolderResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * OptimizeDocument request implementation
     */

    void OptimizeDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * OptimizeDocumentOnline request implementation
     */
    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > OptimizeDocumentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void OptimizeDocumentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Document = parseFilesCollection(std::make_tuple("", contentType, response));
    }

    /*
     * ProtectDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > ProtectDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void ProtectDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ProtectionDataResponse >(L"ProtectionDataResponse, _", response);
    }

    /*
     * ProtectDocumentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > ProtectDocumentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > ProtectDocumentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void ProtectDocumentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ProtectionDataResponse >(L"ProtectionDataResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * RejectAllRevisions request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RevisionsModificationResponse > RejectAllRevisionsResponse::getModel() const
    {
        return m_Model;
    }

    void RejectAllRevisionsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RevisionsModificationResponse >(L"RevisionsModificationResponse, _", response);
    }

    /*
     * RejectAllRevisionsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RevisionsModificationResponse > RejectAllRevisionsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > RejectAllRevisionsOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void RejectAllRevisionsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::RevisionsModificationResponse >(L"RevisionsModificationResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * RemoveAllSignatures request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > RemoveAllSignaturesResponse::getModel() const
    {
        return m_Model;
    }

    void RemoveAllSignaturesResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SignatureCollectionResponse >(L"SignatureCollectionResponse, _", response);
    }

    /*
     * RemoveAllSignaturesOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > RemoveAllSignaturesOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > RemoveAllSignaturesOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void RemoveAllSignaturesOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::SignatureCollectionResponse >(L"SignatureCollectionResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * RemoveRange request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > RemoveRangeResponse::getModel() const
    {
        return m_Model;
    }

    void RemoveRangeResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * RemoveRangeOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > RemoveRangeOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > RemoveRangeOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void RemoveRangeOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * RenderDrawingObject request implementation
     */
    std::shared_ptr< std::istream > RenderDrawingObjectResponse::getModel() const
    {
        return m_Model;
    }

    void RenderDrawingObjectResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * RenderDrawingObjectOnline request implementation
     */
    std::shared_ptr< std::istream > RenderDrawingObjectOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void RenderDrawingObjectOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * RenderMathObject request implementation
     */
    std::shared_ptr< std::istream > RenderMathObjectResponse::getModel() const
    {
        return m_Model;
    }

    void RenderMathObjectResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * RenderMathObjectOnline request implementation
     */
    std::shared_ptr< std::istream > RenderMathObjectOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void RenderMathObjectOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * RenderPage request implementation
     */
    std::shared_ptr< std::istream > RenderPageResponse::getModel() const
    {
        return m_Model;
    }

    void RenderPageResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * RenderPageOnline request implementation
     */
    std::shared_ptr< std::istream > RenderPageOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void RenderPageOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * RenderParagraph request implementation
     */
    std::shared_ptr< std::istream > RenderParagraphResponse::getModel() const
    {
        return m_Model;
    }

    void RenderParagraphResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * RenderParagraphOnline request implementation
     */
    std::shared_ptr< std::istream > RenderParagraphOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void RenderParagraphOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * RenderTable request implementation
     */
    std::shared_ptr< std::istream > RenderTableResponse::getModel() const
    {
        return m_Model;
    }

    void RenderTableResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * RenderTableOnline request implementation
     */
    std::shared_ptr< std::istream > RenderTableOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void RenderTableOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = std::shared_ptr< std::istream >(new std::istringstream(std::string(response), std::ios_base::in));
    }

    /*
     * ReplaceText request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ReplaceTextResponse > ReplaceTextResponse::getModel() const
    {
        return m_Model;
    }

    void ReplaceTextResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ReplaceTextResponse >(L"ReplaceTextResponse, _", response);
    }

    /*
     * ReplaceTextOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ReplaceTextResponse > ReplaceTextOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > ReplaceTextOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void ReplaceTextOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ReplaceTextResponse >(L"ReplaceTextResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * ReplaceWithText request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > ReplaceWithTextResponse::getModel() const
    {
        return m_Model;
    }

    void ReplaceWithTextResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * ReplaceWithTextOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > ReplaceWithTextOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > ReplaceWithTextOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void ReplaceWithTextOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * ResetCache request implementation
     */

    void ResetCacheResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
    }

    /*
     * SaveAs request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SaveResponse > SaveAsResponse::getModel() const
    {
        return m_Model;
    }

    void SaveAsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SaveResponse >(L"SaveResponse, _", response);
    }

    /*
     * SaveAsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SaveResponse > SaveAsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > SaveAsOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void SaveAsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::SaveResponse >(L"SaveResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * SaveAsRange request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > SaveAsRangeResponse::getModel() const
    {
        return m_Model;
    }

    void SaveAsRangeResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * SaveAsRangeOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > SaveAsRangeOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > SaveAsRangeOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void SaveAsRangeOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * SaveAsTiff request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SaveResponse > SaveAsTiffResponse::getModel() const
    {
        return m_Model;
    }

    void SaveAsTiffResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SaveResponse >(L"SaveResponse, _", response);
    }

    /*
     * SaveAsTiffOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SaveResponse > SaveAsTiffOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > SaveAsTiffOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void SaveAsTiffOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::SaveResponse >(L"SaveResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * Search request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SearchResponse > SearchResponse::getModel() const
    {
        return m_Model;
    }

    void SearchResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SearchResponse >(L"SearchResponse, _", response);
    }

    /*
     * SearchOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SearchResponse > SearchOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void SearchOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SearchResponse >(L"SearchResponse, _", response);
    }

    /*
     * SignDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > SignDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void SignDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SignatureCollectionResponse >(L"SignatureCollectionResponse, _", response);
    }

    /*
     * SignDocumentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SignatureCollectionResponse > SignDocumentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > SignDocumentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void SignDocumentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::SignatureCollectionResponse >(L"SignatureCollectionResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * SplitDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SplitDocumentResponse > SplitDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void SplitDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SplitDocumentResponse >(L"SplitDocumentResponse, _", response);
    }

    /*
     * SplitDocumentJob request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::JobInfo > SplitDocumentJobResponse::getModel() const
    {
        return m_Model;
    }

    void SplitDocumentJobResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::JobInfo >(L"JobInfo, _", response);
    }

    /*
     * SplitDocumentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SplitDocumentResponse > SplitDocumentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > SplitDocumentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void SplitDocumentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::SplitDocumentResponse >(L"SplitDocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * SplitDocumentOnlineJob request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::JobInfo > SplitDocumentOnlineJobResponse::getModel() const
    {
        return m_Model;
    }

    void SplitDocumentOnlineJobResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::JobInfo >(L"JobInfo, _", response);
    }

    /*
     * TranslateNodeId request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TranslateNodeIdResponse > TranslateNodeIdResponse::getModel() const
    {
        return m_Model;
    }

    void TranslateNodeIdResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TranslateNodeIdResponse >(L"TranslateNodeIdResponse, _", response);
    }

    /*
     * TranslateNodeIdOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TranslateNodeIdResponse > TranslateNodeIdOnlineResponse::getModel() const
    {
        return m_Model;
    }

    void TranslateNodeIdOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TranslateNodeIdResponse >(L"TranslateNodeIdResponse, _", response);
    }

    /*
     * UnprotectDocument request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > UnprotectDocumentResponse::getModel() const
    {
        return m_Model;
    }

    void UnprotectDocumentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ProtectionDataResponse >(L"ProtectionDataResponse, _", response);
    }

    /*
     * UnprotectDocumentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ProtectionDataResponse > UnprotectDocumentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UnprotectDocumentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UnprotectDocumentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ProtectionDataResponse >(L"ProtectionDataResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateBookmark request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > UpdateBookmarkResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateBookmarkResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BookmarkResponse >(L"BookmarkResponse, _", response);
    }

    /*
     * UpdateBookmarkOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BookmarkResponse > UpdateBookmarkOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateBookmarkOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateBookmarkOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::BookmarkResponse >(L"BookmarkResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateBorder request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BorderResponse > UpdateBorderResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateBorderResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::BorderResponse >(L"BorderResponse, _", response);
    }

    /*
     * UpdateBorderOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::BorderResponse > UpdateBorderOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateBorderOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateBorderOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::BorderResponse >(L"BorderResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateComment request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CommentResponse > UpdateCommentResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateCommentResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CommentResponse >(L"CommentResponse, _", response);
    }

    /*
     * UpdateCommentOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CommentResponse > UpdateCommentOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateCommentOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateCommentOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::CommentResponse >(L"CommentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateCustomXmlPart request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > UpdateCustomXmlPartResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateCustomXmlPartResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::CustomXmlPartResponse >(L"CustomXmlPartResponse, _", response);
    }

    /*
     * UpdateCustomXmlPartOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::CustomXmlPartResponse > UpdateCustomXmlPartOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateCustomXmlPartOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateCustomXmlPartOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::CustomXmlPartResponse >(L"CustomXmlPartResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateDrawingObject request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > UpdateDrawingObjectResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateDrawingObjectResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectResponse >(L"DrawingObjectResponse, _", response);
    }

    /*
     * UpdateDrawingObjectOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > UpdateDrawingObjectOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateDrawingObjectOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateDrawingObjectOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DrawingObjectResponse >(L"DrawingObjectResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateField request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldResponse > UpdateFieldResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateFieldResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FieldResponse >(L"FieldResponse, _", response);
    }

    /*
     * UpdateFieldOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FieldResponse > UpdateFieldOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateFieldOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateFieldOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::FieldResponse >(L"FieldResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateFields request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > UpdateFieldsResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateFieldsResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", response);
    }

    /*
     * UpdateFieldsOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::DocumentResponse > UpdateFieldsOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateFieldsOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateFieldsOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::DocumentResponse >(L"DocumentResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateFootnote request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > UpdateFootnoteResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateFootnoteResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FootnoteResponse >(L"FootnoteResponse, _", response);
    }

    /*
     * UpdateFootnoteOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FootnoteResponse > UpdateFootnoteOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateFootnoteOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateFootnoteOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::FootnoteResponse >(L"FootnoteResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateFormField request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > UpdateFormFieldResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateFormFieldResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FormFieldResponse >(L"FormFieldResponse, _", response);
    }

    /*
     * UpdateFormFieldOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FormFieldResponse > UpdateFormFieldOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateFormFieldOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateFormFieldOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::FormFieldResponse >(L"FormFieldResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateList request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListResponse > UpdateListResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateListResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ListResponse >(L"ListResponse, _", response);
    }

    /*
     * UpdateListLevel request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListResponse > UpdateListLevelResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateListLevelResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ListResponse >(L"ListResponse, _", response);
    }

    /*
     * UpdateListLevelOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListResponse > UpdateListLevelOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateListLevelOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateListLevelOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ListResponse >(L"ListResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateListOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ListResponse > UpdateListOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateListOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateListOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ListResponse >(L"ListResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateParagraphFormat request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > UpdateParagraphFormatResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateParagraphFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphFormatResponse >(L"ParagraphFormatResponse, _", response);
    }

    /*
     * UpdateParagraphFormatOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphFormatResponse > UpdateParagraphFormatOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateParagraphFormatOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateParagraphFormatOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ParagraphFormatResponse >(L"ParagraphFormatResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateParagraphListFormat request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > UpdateParagraphListFormatResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateParagraphListFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::ParagraphListFormatResponse >(L"ParagraphListFormatResponse, _", response);
    }

    /*
     * UpdateParagraphListFormatOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::ParagraphListFormatResponse > UpdateParagraphListFormatOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateParagraphListFormatOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateParagraphListFormatOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::ParagraphListFormatResponse >(L"ParagraphListFormatResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateRun request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RunResponse > UpdateRunResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateRunResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::RunResponse >(L"RunResponse, _", response);
    }

    /*
     * UpdateRunFont request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FontResponse > UpdateRunFontResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateRunFontResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FontResponse >(L"FontResponse, _", response);
    }

    /*
     * UpdateRunFontOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FontResponse > UpdateRunFontOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateRunFontOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateRunFontOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::FontResponse >(L"FontResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateRunOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::RunResponse > UpdateRunOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateRunOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateRunOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::RunResponse >(L"RunResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateSectionPageSetup request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > UpdateSectionPageSetupResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateSectionPageSetupResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::SectionPageSetupResponse >(L"SectionPageSetupResponse, _", response);
    }

    /*
     * UpdateSectionPageSetupOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::SectionPageSetupResponse > UpdateSectionPageSetupOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateSectionPageSetupOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateSectionPageSetupOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::SectionPageSetupResponse >(L"SectionPageSetupResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateStructuredDocumentTag request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > UpdateStructuredDocumentTagResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateStructuredDocumentTagResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StructuredDocumentTagResponse >(L"StructuredDocumentTagResponse, _", response);
    }

    /*
     * UpdateStructuredDocumentTagOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StructuredDocumentTagResponse > UpdateStructuredDocumentTagOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateStructuredDocumentTagOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateStructuredDocumentTagOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::StructuredDocumentTagResponse >(L"StructuredDocumentTagResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateStyle request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > UpdateStyleResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateStyleResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", response);
    }

    /*
     * UpdateStyleOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::StyleResponse > UpdateStyleOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateStyleOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateStyleOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::StyleResponse >(L"StyleResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateTableCellFormat request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > UpdateTableCellFormatResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateTableCellFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableCellFormatResponse >(L"TableCellFormatResponse, _", response);
    }

    /*
     * UpdateTableCellFormatOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableCellFormatResponse > UpdateTableCellFormatOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateTableCellFormatOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateTableCellFormatOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::TableCellFormatResponse >(L"TableCellFormatResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateTableProperties request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > UpdateTablePropertiesResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateTablePropertiesResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TablePropertiesResponse >(L"TablePropertiesResponse, _", response);
    }

    /*
     * UpdateTablePropertiesOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TablePropertiesResponse > UpdateTablePropertiesOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateTablePropertiesOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateTablePropertiesOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::TablePropertiesResponse >(L"TablePropertiesResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UpdateTableRowFormat request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > UpdateTableRowFormatResponse::getModel() const
    {
        return m_Model;
    }

    void UpdateTableRowFormatResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::TableRowFormatResponse >(L"TableRowFormatResponse, _", response);
    }

    /*
     * UpdateTableRowFormatOnline request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::TableRowFormatResponse > UpdateTableRowFormatOnlineResponse::getModel() const
    {
        return m_Model;
    }

    std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > UpdateTableRowFormatOnlineResponse::getDocument() const
    {
        return m_Document;
    }

    void UpdateTableRowFormatOnlineResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        std::unordered_map<std::string, std::tuple<std::string, std::string, std::string_view> > parts;
        parseMultipart(response, parts);
        if (parts.find("Model") != parts.end()) {
            const auto& part = parts.at("Model");
            auto json = ::nlohmann::json::parse(std::get<2>(part));
            m_Model = createModelInstance< aspose::words::cloud::models::TableRowFormatResponse >(L"TableRowFormatResponse, _", std::get<2>(part));
        }
        if (parts.find("Document") != parts.end()) {
            const auto& part = parts.at("Document");
            m_Document = parseFilesCollection(part);
        }
    }

    /*
     * UploadFile request implementation
     */
    std::shared_ptr< aspose::words::cloud::models::FilesUploadResult > UploadFileResponse::getModel() const
    {
        return m_Model;
    }

    void UploadFileResponse::deserialize(const std::string& contentType, const std::string_view& response)
    {
        m_Model = createModelInstance< aspose::words::cloud::models::FilesUploadResult >(L"FilesUploadResult, _", response);
    }
}