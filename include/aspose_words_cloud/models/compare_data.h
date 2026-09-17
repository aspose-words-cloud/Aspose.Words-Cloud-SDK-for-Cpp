/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="compare_data.h">
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
#include "model_base.h"
#include "advanced_compare_options.h"
#include "compare_options.h"
#include "file_reference.h"

namespace aspose::words::cloud::models {
    /// <summary>
    /// Container class for compare documents.
    /// </summary>
    class CompareData : public ModelBase
    {
    public:

        ASPOSE_WORDS_CLOUD_EXPORT virtual ~CompareData() = default;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void getFileReferences(std::vector< FileReference* >& result) override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void validate() override;


        /// <summary>
        /// Gets or sets advanced compare options that might help to produce more precise comparison output.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::AdvancedCompareOptions > getAdvancedOptions() const;

        /// <summary>
        /// Gets or sets advanced compare options that might help to produce more precise comparison output.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setAdvancedOptions(std::shared_ptr< aspose::words::cloud::models::AdvancedCompareOptions > value);


        /// <summary>
        /// Gets or sets the initials of the author to use for revisions.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getAuthor() const;

        /// <summary>
        /// Gets or sets the initials of the author to use for revisions.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setAuthor(std::shared_ptr< std::wstring > value);


        /// <summary>
        /// Gets or sets the compare options.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::CompareOptions > getCompareOptions() const;

        /// <summary>
        /// Gets or sets the compare options.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setCompareOptions(std::shared_ptr< aspose::words::cloud::models::CompareOptions > value);


        /// <summary>
        /// Gets or sets the path to document to compare at the server.
        /// </summary>
        [[deprecated("This field is deprecated and used only for backward compatibility. Please use FileReference instead.")]]
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getComparingWithDocument() const;

        /// <summary>
        /// Gets or sets the path to document to compare at the server.
        /// </summary>
        [[deprecated("This field is deprecated and used only for backward compatibility. Please use FileReference instead.")]]
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setComparingWithDocument(std::shared_ptr< std::wstring > value);


        /// <summary>
        /// Gets or sets the date and time to use for revisions.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getDateTime() const;

        /// <summary>
        /// Gets or sets the date and time to use for revisions.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setDateTime(std::shared_ptr< std::wstring > value);


        /// <summary>
        /// Gets or sets the file reference.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::FileReference > getFileReference() const;

        /// <summary>
        /// Gets or sets the file reference.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setFileReference(std::shared_ptr< aspose::words::cloud::models::FileReference > value);


        /// <summary>
        /// Gets or sets the result document format.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getResultDocumentFormat() const;

        /// <summary>
        /// Gets or sets the result document format.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setResultDocumentFormat(std::shared_ptr< std::wstring > value);


    protected:
        std::shared_ptr< aspose::words::cloud::models::AdvancedCompareOptions > m_AdvancedOptions;
        std::shared_ptr< std::wstring > m_Author;
        std::shared_ptr< aspose::words::cloud::models::CompareOptions > m_CompareOptions;
        std::shared_ptr< std::wstring > m_ComparingWithDocument;
        std::shared_ptr< std::wstring > m_DateTime;
        std::shared_ptr< aspose::words::cloud::models::FileReference > m_FileReference;
        std::shared_ptr< std::wstring > m_ResultDocumentFormat;
    };
}

