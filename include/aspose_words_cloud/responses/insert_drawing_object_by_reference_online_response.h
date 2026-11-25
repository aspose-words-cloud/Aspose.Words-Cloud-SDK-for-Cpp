/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="insert_drawing_object_by_reference_online_response.h">
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

#pragma once
#include "./response_model_base.h"
#include "aspose_words_cloud/models/drawing_object_response.h"

namespace aspose::words::cloud::responses {
    class InsertDrawingObjectByReferenceOnlineResponse : public ResponseModelBase {
    public: 
        ASPOSE_WORDS_CLOUD_EXPORT virtual ~InsertDrawingObjectByReferenceOnlineResponse() = default;

        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > getModel() const;
        ASPOSE_WORDS_CLOUD_EXPORT std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > getDocument() const;

        ASPOSE_WORDS_CLOUD_EXPORT virtual void deserialize(const std::string& contentType, const std::string_view& response) override;
    private:
        std::shared_ptr< aspose::words::cloud::models::DrawingObjectResponse > m_Model;
        std::shared_ptr< std::map<std::wstring, std::shared_ptr<std::istream>> > m_Document;
    };
}
