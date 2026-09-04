/** --------------------------------------------------------------------------------------------------------------------
* <copyright company="Aspose" file="pdf_save_options_data.h">
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
#include "downsample_options_data.h"
#include "fixed_page_save_options_data.h"
#include "outline_options_data.h"
#include "pdf_digital_signature_details_data.h"
#include "pdf_encryption_details_data.h"

namespace aspose::words::cloud::models {
    /// <summary>
    /// Container class for pdf save options.
    /// </summary>
    class PdfSaveOptionsData : public FixedPageSaveOptionsData
    {
    public:
        /// <summary>
        /// Gets or sets a value determining how attachments are embedded to the PDF document.
        /// The default value is None and attachments are not embedded.
        /// PDF/A-1, PDF/A-2 and regular PDF/A-4 (not PDF/A-4f) standards do not allow embedded files.
        /// None value will be used automatically.
        /// </summary>
        enum class AttachmentsEmbeddingMode
        { 
            NONE,
            ANNOTATIONS,
            DOCUMENT_EMBEDDED_FILES
        };

        /// <summary>
        /// Gets or sets the PDF standards compliance level for output documents.
        /// </summary>
        enum class Compliance
        { 
            PDF17,
            PDF20,
            PDF_A1A,
            PDF_A1B,
            PDF_A2A,
            PDF_A2U,
            PDF_A3A,
            PDF_A3U,
            PDF_A4,
            PDF_A4F,
            PDF_A4_UA2,
            PDF_UA1,
            PDF_UA2
        };

        /// <summary>
        /// Gets or sets the option that controls the way CustomDocumentProperties are exported to PDF file.
        /// The default value is None.
        /// </summary>
        enum class CustomPropertiesExport
        { 
            NONE,
            STANDARD,
            METADATA
        };

        /// <summary>
        /// Gets or sets the font embedding mode.
        /// </summary>
        enum class FontEmbeddingMode
        { 
            EMBED_ALL,
            EMBED_NONSTANDARD,
            EMBED_NONE
        };

        /// <summary>
        /// Gets or sets the option that controls how bookmarks in headers/footers are exported.
        /// The default value is Aspose.Words.Saving.HeaderFooterBookmarksExportMode.All.
        /// </summary>
        enum class HeaderFooterBookmarksExportMode
        { 
            NONE,
            FIRST,
            ALL
        };

        /// <summary>
        /// Gets or sets the option that controls how the color space will be selected for the images in PDF document.
        /// The default value is "Auto". If "SimpleCmyk" value is specified, ImageCompression option is ignored and Flate compression is used for all images in the document.
        /// </summary>
        enum class ImageColorSpaceExportMode
        { 
            AUTO,
            SIMPLE_CMYK
        };

        /// <summary>
        /// Gets or sets the option that controls how the PDF document should be displayed when opened in the PDF reader.
        /// </summary>
        enum class PageMode
        { 
            USE_NONE,
            USE_OUTLINES,
            USE_THUMBS,
            FULL_SCREEN,
            USE_OC,
            USE_ATTACHMENTS
        };

        /// <summary>
        /// Gets or sets the compression type to be used for all textual content in the document.
        /// </summary>
        enum class TextCompression
        { 
            NONE,
            FLATE
        };

        /// <summary>
        /// Gets or sets the option that controls what type of zoom should be applied when a document is opened with a PDF viewer.
        /// </summary>
        enum class ZoomBehavior
        { 
            NONE,
            ZOOM_FACTOR,
            FIT_PAGE,
            FIT_WIDTH,
            FIT_HEIGHT,
            FIT_BOX
        };


        ASPOSE_WORDS_CLOUD_EXPORT virtual ~PdfSaveOptionsData() = default;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void toJson(void* jsonIfc) const override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void fromJson(const void* jsonIfc) override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void getFileReferences(std::vector< FileReference* >& result) override;
        ASPOSE_WORDS_CLOUD_EXPORT virtual void validate() override;

        void abstractFixedPageSaveOptionsData() override {}
        void abstractSaveOptionsData() override {}

        /// <summary>
        /// Gets or sets a value determining how attachments are embedded to the PDF document.
        /// The default value is None and attachments are not embedded.
        /// PDF/A-1, PDF/A-2 and regular PDF/A-4 (not PDF/A-4f) standards do not allow embedded files.
        /// None value will be used automatically.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::AttachmentsEmbeddingMode > getAttachmentsEmbeddingMode() const;

        /// <summary>
        /// Gets or sets a value determining how attachments are embedded to the PDF document.
        /// The default value is None and attachments are not embedded.
        /// PDF/A-1, PDF/A-2 and regular PDF/A-4 (not PDF/A-4f) standards do not allow embedded files.
        /// None value will be used automatically.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setAttachmentsEmbeddingMode(std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::AttachmentsEmbeddingMode > value);


        /// <summary>
        /// Gets or sets a value determining whether or not to cache graphics placed in document's background.
        /// The default value is true and background graphics are written to the PDF document as an xObject. When the value is false background graphics are not cached. Some shapes are not supported for caching(shapes with fields, bookmarks, HRefs). Document background graphic is various shapes, charts, images placed in the footer or header,
        /// well as background and border of a page.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getCacheBackgroundGraphics() const;

        /// <summary>
        /// Gets or sets a value determining whether or not to cache graphics placed in document's background.
        /// The default value is true and background graphics are written to the PDF document as an xObject. When the value is false background graphics are not cached. Some shapes are not supported for caching(shapes with fields, bookmarks, HRefs). Document background graphic is various shapes, charts, images placed in the footer or header,
        /// well as background and border of a page.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setCacheBackgroundGraphics(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the PDF standards compliance level for output documents.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::Compliance > getCompliance() const;

        /// <summary>
        /// Gets or sets the PDF standards compliance level for output documents.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setCompliance(std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::Compliance > value);


        /// <summary>
        /// Gets or sets a value indicating whether to convert footnote/endnote references in main text story into active hyperlinks.
        /// When clicked the hyperlink will lead to the corresponding footnote/endnote.
        /// The default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getCreateNoteHyperlinks() const;

        /// <summary>
        /// Gets or sets a value indicating whether to convert footnote/endnote references in main text story into active hyperlinks.
        /// When clicked the hyperlink will lead to the corresponding footnote/endnote.
        /// The default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setCreateNoteHyperlinks(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the option that controls the way CustomDocumentProperties are exported to PDF file.
        /// The default value is None.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::CustomPropertiesExport > getCustomPropertiesExport() const;

        /// <summary>
        /// Gets or sets the option that controls the way CustomDocumentProperties are exported to PDF file.
        /// The default value is None.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setCustomPropertiesExport(std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::CustomPropertiesExport > value);


        /// <summary>
        /// Gets or sets the details for signing the output PDF document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfDigitalSignatureDetailsData > getDigitalSignatureDetails() const;

        /// <summary>
        /// Gets or sets the details for signing the output PDF document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setDigitalSignatureDetails(std::shared_ptr< aspose::words::cloud::models::PdfDigitalSignatureDetailsData > value);


        /// <summary>
        /// Gets or sets a value indicating whether the window’s title bar should display the document title taken from the Title entry of the document information dictionary.
        /// If false, the title bar should instead display the name of the PDF file containing the document.
        /// The default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getDisplayDocTitle() const;

        /// <summary>
        /// Gets or sets a value indicating whether the window’s title bar should display the document title taken from the Title entry of the document information dictionary.
        /// If false, the title bar should instead display the name of the PDF file containing the document.
        /// The default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setDisplayDocTitle(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the downsample options.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::DownsampleOptionsData > getDownsampleOptions() const;

        /// <summary>
        /// Gets or sets the downsample options.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setDownsampleOptions(std::shared_ptr< aspose::words::cloud::models::DownsampleOptionsData > value);


        /// <summary>
        /// Gets or sets a value determining whether or not to embed attachments to the PDF document.
        /// The default value is false and attachments are not embedded.
        /// When the value is true attachments are embedded to the PDF document.
        /// Embedding attachments is not supported when saving to PDF/A and PDF/UA compliance.
        /// false value will be used automatically.
        /// Embedding attachments is not supported when encryption is enabled. false value will be used automatically.
        /// </summary>
        [[deprecated("Obsolete, please use AttachmentsEmbeddingMode instead.")]]
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getEmbedAttachments() const;

        /// <summary>
        /// Gets or sets a value determining whether or not to embed attachments to the PDF document.
        /// The default value is false and attachments are not embedded.
        /// When the value is true attachments are embedded to the PDF document.
        /// Embedding attachments is not supported when saving to PDF/A and PDF/UA compliance.
        /// false value will be used automatically.
        /// Embedding attachments is not supported when encryption is enabled. false value will be used automatically.
        /// </summary>
        [[deprecated("Obsolete, please use AttachmentsEmbeddingMode instead.")]]
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setEmbedAttachments(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets a value indicating whether fonts are embedded into the resulting PDF documents.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getEmbedFullFonts() const;

        /// <summary>
        /// Gets or sets a value indicating whether fonts are embedded into the resulting PDF documents.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setEmbedFullFonts(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the details for encrypting the output PDF document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfEncryptionDetailsData > getEncryptionDetails() const;

        /// <summary>
        /// Gets or sets the details for encrypting the output PDF document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setEncryptionDetails(std::shared_ptr< aspose::words::cloud::models::PdfEncryptionDetailsData > value);


        /// <summary>
        /// Gets or sets a value indicating whether to export document structure.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getExportDocumentStructure() const;

        /// <summary>
        /// Gets or sets a value indicating whether to export document structure.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setExportDocumentStructure(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets a value determining whether or not to create a "Span" tag in the document structure to export the text language.
        /// The default value is false and "Lang" attribute is attached to a marked-content sequence in a page content stream.
        /// When the value is true "Span" tag is created for the text with non-default language and "Lang" attribute is attached to this tag.
        /// This value is ignored when Aspose.Words.Saving.PdfSaveOptions.ExportDocumentStructure is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getExportLanguageToSpanTag() const;

        /// <summary>
        /// Gets or sets a value determining whether or not to create a "Span" tag in the document structure to export the text language.
        /// The default value is false and "Lang" attribute is attached to a marked-content sequence in a page content stream.
        /// When the value is true "Span" tag is created for the text with non-default language and "Lang" attribute is attached to this tag.
        /// This value is ignored when Aspose.Words.Saving.PdfSaveOptions.ExportDocumentStructure is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setExportLanguageToSpanTag(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the font embedding mode.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::FontEmbeddingMode > getFontEmbeddingMode() const;

        /// <summary>
        /// Gets or sets the font embedding mode.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setFontEmbeddingMode(std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::FontEmbeddingMode > value);


        /// <summary>
        /// Gets or sets a value determining  whether to generate scripts that emulate specific Microsoft Word form field behavior in PDF.
        /// Default is false.
        /// When this option is enabled, the exporter generates PDF JavaScript actions to emulate Microsoft Word
        /// form field behavior, such as date and time form fields with formatting and validation rules.When set to true, supported behavior will be exported as PDF JavaScript actions.
        /// When set to false, no form field scripts will be generated.Script execution depends on the PDF viewer. Some PDF viewers might ignore scripts, restrict script execution,
        /// or require the user to enable JavaScript.JavaScript actions are prohibited by PDF/A-1, PDF/A-2 and PDF/A-3 compliance.
        /// The false value will be used automatically in this case.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getGenerateFormFieldScripts() const;

        /// <summary>
        /// Gets or sets a value determining  whether to generate scripts that emulate specific Microsoft Word form field behavior in PDF.
        /// Default is false.
        /// When this option is enabled, the exporter generates PDF JavaScript actions to emulate Microsoft Word
        /// form field behavior, such as date and time form fields with formatting and validation rules.When set to true, supported behavior will be exported as PDF JavaScript actions.
        /// When set to false, no form field scripts will be generated.Script execution depends on the PDF viewer. Some PDF viewers might ignore scripts, restrict script execution,
        /// or require the user to enable JavaScript.JavaScript actions are prohibited by PDF/A-1, PDF/A-2 and PDF/A-3 compliance.
        /// The false value will be used automatically in this case.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setGenerateFormFieldScripts(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the option that controls how bookmarks in headers/footers are exported.
        /// The default value is Aspose.Words.Saving.HeaderFooterBookmarksExportMode.All.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::HeaderFooterBookmarksExportMode > getHeaderFooterBookmarksExportMode() const;

        /// <summary>
        /// Gets or sets the option that controls how bookmarks in headers/footers are exported.
        /// The default value is Aspose.Words.Saving.HeaderFooterBookmarksExportMode.All.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setHeaderFooterBookmarksExportMode(std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::HeaderFooterBookmarksExportMode > value);


        /// <summary>
        /// Gets or sets the option that controls how the color space will be selected for the images in PDF document.
        /// The default value is "Auto". If "SimpleCmyk" value is specified, ImageCompression option is ignored and Flate compression is used for all images in the document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::ImageColorSpaceExportMode > getImageColorSpaceExportMode() const;

        /// <summary>
        /// Gets or sets the option that controls how the color space will be selected for the images in PDF document.
        /// The default value is "Auto". If "SimpleCmyk" value is specified, ImageCompression option is ignored and Flate compression is used for all images in the document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setImageColorSpaceExportMode(std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::ImageColorSpaceExportMode > value);


        /// <summary>
        /// Gets or sets the compression type to be used for all images in the document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getImageCompression() const;

        /// <summary>
        /// Gets or sets the compression type to be used for all images in the document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setImageCompression(std::shared_ptr< std::wstring > value);


        /// <summary>
        /// Gets or sets a value indicating whether image interpolation shall be performed by a conforming reader. When false is specified, the flag is not written to the output document and the default behavior of reader is used instead.
        /// When the resolution of a source image is significantly lower than that of the output device, each source sample covers many device pixels. As a result, images can appear jaggy or blocky. These visual artifacts can be reduced by applying an image interpolation algorithm during rendering. Instead of painting all pixels covered by a source sample with the same color, image interpolation attempts to produce a smooth transition between adjacent sample values. A conforming Reader may choose to not implement this feature of PDF, or may use any specific implementation of interpolation that it wishes. The default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getInterpolateImages() const;

        /// <summary>
        /// Gets or sets a value indicating whether image interpolation shall be performed by a conforming reader. When false is specified, the flag is not written to the output document and the default behavior of reader is used instead.
        /// When the resolution of a source image is significantly lower than that of the output device, each source sample covers many device pixels. As a result, images can appear jaggy or blocky. These visual artifacts can be reduced by applying an image interpolation algorithm during rendering. Instead of painting all pixels covered by a source sample with the same color, image interpolation attempts to produce a smooth transition between adjacent sample values. A conforming Reader may choose to not implement this feature of PDF, or may use any specific implementation of interpolation that it wishes. The default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setInterpolateImages(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets a value indicating whether hyperlinks in the output Pdf document are forced to be opened in a new window (or tab) of a browser.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getOpenHyperlinksInNewWindow() const;

        /// <summary>
        /// Gets or sets a value indicating whether hyperlinks in the output Pdf document are forced to be opened in a new window (or tab) of a browser.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setOpenHyperlinksInNewWindow(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the outline options.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::OutlineOptionsData > getOutlineOptions() const;

        /// <summary>
        /// Gets or sets the outline options.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setOutlineOptions(std::shared_ptr< aspose::words::cloud::models::OutlineOptionsData > value);


        /// <summary>
        /// Gets or sets the option that controls how the PDF document should be displayed when opened in the PDF reader.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::PageMode > getPageMode() const;

        /// <summary>
        /// Gets or sets the option that controls how the PDF document should be displayed when opened in the PDF reader.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setPageMode(std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::PageMode > value);


        /// <summary>
        /// Gets or sets a value indicating whether to preblend transparent images with black background color.
        /// Preblending images may improve PDF document visual appearance in Adobe Reader and remove anti-aliasing artifacts.In order to properly display preblended images, PDF viewer application must support /Matte entry in soft-mask image dictionary.
        /// Also preblending images may decrease PDF rendering performance.The default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getPreblendImages() const;

        /// <summary>
        /// Gets or sets a value indicating whether to preblend transparent images with black background color.
        /// Preblending images may improve PDF document visual appearance in Adobe Reader and remove anti-aliasing artifacts.In order to properly display preblended images, PDF viewer application must support /Matte entry in soft-mask image dictionary.
        /// Also preblending images may decrease PDF rendering performance.The default value is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setPreblendImages(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets a value indicating whether to preserve Microsoft Word form fields as form fields in PDF or convert them to text.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getPreserveFormFields() const;

        /// <summary>
        /// Gets or sets a value indicating whether to preserve Microsoft Word form fields as form fields in PDF or convert them to text.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setPreserveFormFields(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets a value indicating whether to render PDF choice form field border.
        /// PDF choice form fields are used for export of SDT Combo Box Content Control, SDT Drop-Down List Content
        /// Control and legacy Drop-Down Form Field when PreserveFormFields option is enabled.The default value is true.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getRenderChoiceFormFieldBorder() const;

        /// <summary>
        /// Gets or sets a value indicating whether to render PDF choice form field border.
        /// PDF choice form fields are used for export of SDT Combo Box Content Control, SDT Drop-Down List Content
        /// Control and legacy Drop-Down Form Field when PreserveFormFields option is enabled.The default value is true.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setRenderChoiceFormFieldBorder(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the compression type to be used for all textual content in the document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::TextCompression > getTextCompression() const;

        /// <summary>
        /// Gets or sets the compression type to be used for all textual content in the document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setTextCompression(std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::TextCompression > value);


        /// <summary>
        /// Gets or sets a value indicating whether the document should be saved using a booklet printing layout.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getUseBookFoldPrintingSettings() const;

        /// <summary>
        /// Gets or sets a value indicating whether the document should be saved using a booklet printing layout.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setUseBookFoldPrintingSettings(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets a value indicating whether to substitute TrueType fonts Arial, Times New Roman, Courier New and Symbol with core PDF Type 1 fonts.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getUseCoreFonts() const;

        /// <summary>
        /// Gets or sets a value indicating whether to substitute TrueType fonts Arial, Times New Roman, Courier New and Symbol with core PDF Type 1 fonts.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setUseCoreFonts(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets a value indicating whether to use SDT control Tag or Id property as a name of form field in PDF.
        /// The default value is false.When set to false, SDT control Id property is used as a name of form field in PDF.When set to true, SDT control Tag property is used as a name of form field in PDF.If set to true and Tag is empty, Id property will be used as a form field name.If set to true and Tag values are not unique, duplicate Tag values will be altered to build
        /// unique PDF form field names.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getUseSdtTagAsFormFieldName() const;

        /// <summary>
        /// Gets or sets a value indicating whether to use SDT control Tag or Id property as a name of form field in PDF.
        /// The default value is false.When set to false, SDT control Id property is used as a name of form field in PDF.When set to true, SDT control Tag property is used as a name of form field in PDF.If set to true and Tag is empty, Id property will be used as a form field name.If set to true and Tag values are not unique, duplicate Tag values will be altered to build
        /// unique PDF form field names.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setUseSdtTagAsFormFieldName(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets or sets the option that controls what type of zoom should be applied when a document is opened with a PDF viewer.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::ZoomBehavior > getZoomBehavior() const;

        /// <summary>
        /// Gets or sets the option that controls what type of zoom should be applied when a document is opened with a PDF viewer.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setZoomBehavior(std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::ZoomBehavior > value);


        /// <summary>
        /// Gets or sets the zoom factor (in percentages) for a document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< int32_t > getZoomFactor() const;

        /// <summary>
        /// Gets or sets the zoom factor (in percentages) for a document.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setZoomFactor(std::shared_ptr< int32_t > value);


        /// <summary>
        /// Gets or sets a value determining whether floating shapes are exported as inline tags in the document structure.
        /// The default value is false and floating shapes will be exported as block-level tags,
        /// placed after the paragraph in which they are anchored. When the value is true floating shapes will be exported as inline tags,
        /// placed within the paragraph where they are anchored. This value is ignored when ExportDocumentStructure is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< bool > getExportFloatingShapesAsInlineTag() const;

        /// <summary>
        /// Gets or sets a value determining whether floating shapes are exported as inline tags in the document structure.
        /// The default value is false and floating shapes will be exported as block-level tags,
        /// placed after the paragraph in which they are anchored. When the value is true floating shapes will be exported as inline tags,
        /// placed within the paragraph where they are anchored. This value is ignored when ExportDocumentStructure is false.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual void setExportFloatingShapesAsInlineTag(std::shared_ptr< bool > value);


        /// <summary>
        /// Gets the format of save.
        /// </summary>
        ASPOSE_WORDS_CLOUD_EXPORT virtual std::shared_ptr< std::wstring > getSaveFormat() const override;



    protected:
        std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::AttachmentsEmbeddingMode > m_AttachmentsEmbeddingMode;
        std::shared_ptr< bool > m_CacheBackgroundGraphics;
        std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::Compliance > m_Compliance;
        std::shared_ptr< bool > m_CreateNoteHyperlinks;
        std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::CustomPropertiesExport > m_CustomPropertiesExport;
        std::shared_ptr< aspose::words::cloud::models::PdfDigitalSignatureDetailsData > m_DigitalSignatureDetails;
        std::shared_ptr< bool > m_DisplayDocTitle;
        std::shared_ptr< aspose::words::cloud::models::DownsampleOptionsData > m_DownsampleOptions;
        std::shared_ptr< bool > m_EmbedAttachments;
        std::shared_ptr< bool > m_EmbedFullFonts;
        std::shared_ptr< aspose::words::cloud::models::PdfEncryptionDetailsData > m_EncryptionDetails;
        std::shared_ptr< bool > m_ExportDocumentStructure;
        std::shared_ptr< bool > m_ExportLanguageToSpanTag;
        std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::FontEmbeddingMode > m_FontEmbeddingMode;
        std::shared_ptr< bool > m_GenerateFormFieldScripts;
        std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::HeaderFooterBookmarksExportMode > m_HeaderFooterBookmarksExportMode;
        std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::ImageColorSpaceExportMode > m_ImageColorSpaceExportMode;
        std::shared_ptr< std::wstring > m_ImageCompression;
        std::shared_ptr< bool > m_InterpolateImages;
        std::shared_ptr< bool > m_OpenHyperlinksInNewWindow;
        std::shared_ptr< aspose::words::cloud::models::OutlineOptionsData > m_OutlineOptions;
        std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::PageMode > m_PageMode;
        std::shared_ptr< bool > m_PreblendImages;
        std::shared_ptr< bool > m_PreserveFormFields;
        std::shared_ptr< bool > m_RenderChoiceFormFieldBorder;
        std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::TextCompression > m_TextCompression;
        std::shared_ptr< bool > m_UseBookFoldPrintingSettings;
        std::shared_ptr< bool > m_UseCoreFonts;
        std::shared_ptr< bool > m_UseSdtTagAsFormFieldName;
        std::shared_ptr< aspose::words::cloud::models::PdfSaveOptionsData::ZoomBehavior > m_ZoomBehavior;
        std::shared_ptr< int32_t > m_ZoomFactor;
        std::shared_ptr< bool > m_ExportFloatingShapesAsInlineTag;
        std::shared_ptr< std::wstring > m_SaveFormat = std::make_shared<std::wstring>(L"pdf");
    };
}

