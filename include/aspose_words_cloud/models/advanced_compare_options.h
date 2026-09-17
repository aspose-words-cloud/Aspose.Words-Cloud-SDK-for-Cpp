/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="advanced_compare_options.h">
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

namespace aspose::words::cloud::models {
    /// <summary>
    /// Allows to set advanced compare options.
    /// </summary>
    class AdvancedCompareOptions : public ModelBase
    {
    public:

        ASPOSE_WORDS_CLOUD_EXPORT virtual ~AdvancedCompareOptions() = default;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void getFileReferences(std::vector< FileReference* >& result) override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void validate() override;


        /// <summary>
        /// Gets or sets the value indicating whether list definition contents are compared instead of list definition Ids.
        /// Default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getCompareListDefinitions() const;

        /// <summary>
        /// Gets or sets the value indicating whether list definition contents are compared instead of list definition Ids.
        /// Default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setCompareListDefinitions(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the value indicating whether to ignore difference in DrawingML unique Id.
        /// Default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getIgnoreDmlUniqueId() const;

        /// <summary>
        /// Gets or sets the value indicating whether to ignore difference in DrawingML unique Id.
        /// Default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setIgnoreDmlUniqueId(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the value indicating whether to ignore difference in StructuredDocumentTag store item Id.
        /// Default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getIgnoreStoreItemId() const;

        /// <summary>
        /// Gets or sets the value indicating whether to ignore difference in StructuredDocumentTag store item Id.
        /// Default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setIgnoreStoreItemId(std::shared_ptr< bool > value);


    protected:
        std::shared_ptr< bool > m_CompareListDefinitions;
        std::shared_ptr< bool > m_IgnoreDmlUniqueId;
        std::shared_ptr< bool > m_IgnoreStoreItemId;
    };
}

