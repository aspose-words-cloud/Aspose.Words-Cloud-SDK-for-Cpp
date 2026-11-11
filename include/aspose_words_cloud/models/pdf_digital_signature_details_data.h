/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="pdf_digital_signature_details_data.h">
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
    /// Container class for details of digital signature.
    /// </summary>
    class PdfDigitalSignatureDetailsData : public ModelBase
    {
    public:
        /// <summary>
        /// Gets or sets the hash algorithm.
        /// </summary>
        enum class HashAlgorithm
        { 
            SHA256,
            SHA384,
            SHA512,
            RIPE_M_D160,
            AUTO
        };


        ASPOSE_WORDS_CLOUD_EXPORT virtual ~PdfDigitalSignatureDetailsData() = default;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void getFileReferences(std::vector< FileReference* >& result) override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void validate() override;


        /// <summary>
        /// Gets or sets the certificate's filename using for signing.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getCertificateFilename() const;

        /// <summary>
        /// Gets or sets the certificate's filename using for signing.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setCertificateFilename(std::shared_ptr< std::wstring > value);


        /// <summary>
        /// Gets or sets the hash algorithm.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfDigitalSignatureDetailsData::HashAlgorithm > getHashAlgorithm() const;

        /// <summary>
        /// Gets or sets the hash algorithm.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setHashAlgorithm(std::shared_ptr< aspose::words::cloud::models::PdfDigitalSignatureDetailsData::HashAlgorithm > value);


        /// <summary>
        /// Gets or sets the location of the signing.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getLocation() const;

        /// <summary>
        /// Gets or sets the location of the signing.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setLocation(std::shared_ptr< std::wstring > value);


        /// <summary>
        /// Gets or sets the reason for the signing.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getReason() const;

        /// <summary>
        /// Gets or sets the reason for the signing.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setReason(std::shared_ptr< std::wstring > value);


        /// <summary>
        /// Gets or sets the date of the signing.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getSignatureDate() const;

        /// <summary>
        /// Gets or sets the date of the signing.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setSignatureDate(std::shared_ptr< std::wstring > value);


    protected:
        std::shared_ptr< std::wstring > m_CertificateFilename;
        std::shared_ptr< aspose::words::cloud::models::PdfDigitalSignatureDetailsData::HashAlgorithm > m_HashAlgorithm;
        std::shared_ptr< std::wstring > m_Location;
        std::shared_ptr< std::wstring > m_Reason;
        std::shared_ptr< std::wstring > m_SignatureDate;
    };
}

