// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PDFSAVEOPTIONS_H
#define ASPOSE_CELLS_PDFSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/PaginatedSaveOptions.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PdfCompliance.h"
#include "Aspose.Cells/PdfCompressionCore.h"
#include "Aspose.Cells/PdfCustomPropertiesExport.h"
#include "Aspose.Cells/PdfFontEncoding.h"
#include "Aspose.Cells/PdfOptimizationType.h"

namespace Aspose { namespace Cells { namespace Rendering {
    class PdfBookmarkEntry;
    class RenderingWatermark;
} } }

namespace Aspose { namespace Cells { namespace Rendering { namespace PdfSecurity {
    class PdfSecurityOptions;
} } } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Rendering;
using namespace Aspose::Cells::Rendering::PdfSecurity;

class PdfSaveOptions_Impl;

/// <summary>
/// Represents the options for saving pdf file.
/// </summary>
class PdfSaveOptions : public PaginatedSaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PdfSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates the options for saving pdf file.
    /// </summary>
    ASPOSE_CELLS_API PdfSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PdfSaveOptions(PdfSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PdfSaveOptions(const PdfSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PdfSaveOptions(const PaginatedSaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PdfSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PdfSaveOptions& operator=(const PdfSaveOptions& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// True to embed true type fonts.
    /// Affects only ASCII characters 32-127.
    /// Fonts for character codes greater than 127 are always embedded.
    /// Fonts are always embedded for PDF/A-1a, PDF/A-1b standard.
    /// Default is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetEmbedStandardWindowsFonts();
    /// <summary>
    /// True to embed true type fonts.
    /// Affects only ASCII characters 32-127.
    /// Fonts for character codes greater than 127 are always embedded.
    /// Fonts are always embedded for PDF/A-1a, PDF/A-1b standard.
    /// Default is true.
    /// </summary>
    ASPOSE_CELLS_API void SetEmbedStandardWindowsFonts(bool value);
    /// <summary>
    /// Gets and sets the <see cref ="PdfBookmarkEntry">PdfBookmarkEntry</see> object.
    /// </summary>
    ASPOSE_CELLS_API PdfBookmarkEntry GetBookmark();
    /// <summary>
    /// Gets and sets the <see cref ="PdfBookmarkEntry">PdfBookmarkEntry</see> object.
    /// </summary>
    ASPOSE_CELLS_API void SetBookmark(const PdfBookmarkEntry& value);
    /// <summary>
    /// Gets or sets the PDF standards compliance level for output documents.
    /// </summary>
    /// <remarks>
    /// Default is Pdf17.
    /// </remarks>
    ASPOSE_CELLS_API PdfCompliance GetCompliance();
    /// <summary>
    /// Gets or sets the PDF standards compliance level for output documents.
    /// </summary>
    /// <remarks>
    /// Default is Pdf17.
    /// </remarks>
    ASPOSE_CELLS_API void SetCompliance(PdfCompliance value);
    /// <summary>
    /// Set this options, when security is need in xls2pdf result.
    /// </summary>
    ASPOSE_CELLS_API PdfSecurityOptions GetSecurityOptions();
    /// <summary>
    /// Set this options, when security is need in xls2pdf result.
    /// </summary>
    ASPOSE_CELLS_API void SetSecurityOptions(const PdfSecurityOptions& value);
    /// <summary>
    /// Indicates whether to calculate formulas before saving pdf file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetCalculateFormula();
    /// <summary>
    /// Indicates whether to calculate formulas before saving pdf file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetCalculateFormula(bool value);
    /// <summary>
    /// Indicate the compression algorithm
    /// </summary>
    ASPOSE_CELLS_API PdfCompressionCore GetPdfCompression();
    /// <summary>
    /// Indicate the compression algorithm
    /// </summary>
    ASPOSE_CELLS_API void SetPdfCompression(PdfCompressionCore value);
    /// <summary>
    /// Sets desired PPI(pixels per inch) of resample images and jpeg quality.
    /// All images will be converted to JPEG with the specified quality setting,
    /// and images that are greater than the specified PPI (pixels per inch) will be resampled.
    /// </summary>
    /// <param name="desiredPPI">Desired pixels per inch. 220 high quality. 150 screen quality. 96 email quality.</param>
    /// <param name="jpegQuality">0 - 100% JPEG quality.</param>
    ASPOSE_CELLS_API void SetImageResample(int32_t desiredPPI, int32_t jpegQuality);
    /// <summary>
    /// Gets and sets the time of generating the pdf document.
    /// </summary>
    /// <remarks>
    /// if it is not be set, it will be the time of generating the pdf.
    /// </remarks>
    ASPOSE_CELLS_API Date GetCreatedTime();
    /// <summary>
    /// Gets and sets the time of generating the pdf document.
    /// </summary>
    /// <remarks>
    /// if it is not be set, it will be the time of generating the pdf.
    /// </remarks>
    ASPOSE_CELLS_API void SetCreatedTime(const Date& value);
    /// <summary>
    /// Gets and sets producer of generated pdf document.
    /// </summary>
    /// <remarks>
    /// If the value is null, or a valid LICENSE is not set, string Aspose.Cells vVERSION will be used.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetProducer();
    /// <summary>
    /// Gets and sets producer of generated pdf document.
    /// </summary>
    /// <remarks>
    /// If the value is null, or a valid LICENSE is not set, string Aspose.Cells vVERSION will be used.
    /// </remarks>
    ASPOSE_CELLS_API void SetProducer(const U16String& value);
    /// <summary>
    /// Gets and sets producer of generated pdf document.
    /// </summary>
    /// <remarks>
    /// If the value is null, or a valid LICENSE is not set, string Aspose.Cells vVERSION will be used.
    /// </remarks>
    ASPOSE_CELLS_API void SetProducer(const char16_t* value);
    /// <summary>
    /// Gets and sets pdf optimization type.
    /// </summary>
    /// <remarks>
    /// Default value is <see cref="PdfOptimizationType.Standard"/>
    /// </remarks>
    ASPOSE_CELLS_API PdfOptimizationType GetOptimizationType();
    /// <summary>
    /// Gets and sets pdf optimization type.
    /// </summary>
    /// <remarks>
    /// Default value is <see cref="PdfOptimizationType.Standard"/>
    /// </remarks>
    ASPOSE_CELLS_API void SetOptimizationType(PdfOptimizationType value);
    /// <summary>
    /// Gets or sets a value determining the way <see cref="CustomDocumentPropertyCollection"/> are exported to PDF file. Default value is None.
    /// </summary>
    ASPOSE_CELLS_API PdfCustomPropertiesExport GetCustomPropertiesExport();
    /// <summary>
    /// Gets or sets a value determining the way <see cref="CustomDocumentPropertyCollection"/> are exported to PDF file. Default value is None.
    /// </summary>
    ASPOSE_CELLS_API void SetCustomPropertiesExport(PdfCustomPropertiesExport value);
    /// <summary>
    /// Indicates whether to export document structure.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportDocumentStructure();
    /// <summary>
    /// Indicates whether to export document structure.
    /// </summary>
    ASPOSE_CELLS_API void SetExportDocumentStructure(bool value);
    /// <summary>
    /// Indicates whether the window's title bar should display the document title.
    /// </summary>
    /// <remarks>
    /// If false, the title bar should instead display the name of the PDF file.
    /// Default value is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetDisplayDocTitle();
    /// <summary>
    /// Indicates whether the window's title bar should display the document title.
    /// </summary>
    /// <remarks>
    /// If false, the title bar should instead display the name of the PDF file.
    /// Default value is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetDisplayDocTitle(bool value);
    /// <summary>
    /// Gets or sets embedded font encoding in pdf.
    /// </summary>
    /// <remarks>
    /// Default value is <see cref="PdfFontEncoding.Identity"/>
    /// </remarks>
    ASPOSE_CELLS_API PdfFontEncoding GetFontEncoding();
    /// <summary>
    /// Gets or sets embedded font encoding in pdf.
    /// </summary>
    /// <remarks>
    /// Default value is <see cref="PdfFontEncoding.Identity"/>
    /// </remarks>
    ASPOSE_CELLS_API void SetFontEncoding(PdfFontEncoding value);
    /// <summary>
    /// Gets or sets watermark to output.
    /// </summary>
    ASPOSE_CELLS_API RenderingWatermark GetWatermark();
    /// <summary>
    /// Gets or sets watermark to output.
    /// </summary>
    ASPOSE_CELLS_API void SetWatermark(const RenderingWatermark& value);
    
};

} }

#endif
