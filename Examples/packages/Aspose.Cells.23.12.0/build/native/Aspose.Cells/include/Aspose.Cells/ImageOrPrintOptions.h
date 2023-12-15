// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_IMAGEORPRINTOPTIONS_H
#define ASPOSE_CELLS_RENDERING_IMAGEORPRINTOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ColorDepth.h"
#include "Aspose.Cells/DefaultEditLanguage.h"
#include "Aspose.Cells/EmfRenderSetting.h"
#include "Aspose.Cells/GridlineType.h"
#include "Aspose.Cells/ImageBinarizationMethod.h"
#include "Aspose.Cells/ImageType.h"
#include "Aspose.Cells/PrintingPageType.h"
#include "Aspose.Cells/TextCrossType.h"
#include "Aspose.Cells/TiffCompression.h"

namespace Aspose { namespace Cells { namespace Rendering {
    class DrawObjectEventHandler;
    class IPageSavingCallback;
    class SheetSet;
} } }

namespace Aspose { namespace Cells {
    class IWarningCallback;
} }

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class ImageOrPrintOptions_Impl;

/// <summary>
/// Allows to specify options when rendering worksheet to images, printing worksheet or rendering chart to image.
/// </summary>
class ImageOrPrintOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ImageOrPrintOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API ImageOrPrintOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ImageOrPrintOptions(ImageOrPrintOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ImageOrPrintOptions(const ImageOrPrintOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ImageOrPrintOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ImageOrPrintOptions& operator=(const ImageOrPrintOptions& src);
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
    /// If PrintWithStatusDialog = true , there will be a dialog that shows current print status.
    /// else no such dialog will show.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintWithStatusDialog(bool value);
    /// <summary>
    /// If PrintWithStatusDialog = true , there will be a dialog that shows current print status.
    /// else no such dialog will show.
    /// </summary>
    ASPOSE_CELLS_API bool GetPrintWithStatusDialog();
    /// <summary>
    /// Gets or sets the horizontal resolution for generated images, in dots per inch.
    /// Applies generating image method except Emf format images.
    /// </summary>
    /// <remarks>
    /// The default value is 96.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetHorizontalResolution();
    /// <summary>
    /// Gets or sets the horizontal resolution for generated images, in dots per inch.
    /// Applies generating image method except Emf format images.
    /// </summary>
    /// <remarks>
    /// The default value is 96.
    /// </remarks>
    ASPOSE_CELLS_API void SetHorizontalResolution(int32_t value);
    /// <summary>
    /// Gets or sets the vertical  resolution for generated images, in dots per inch.
    /// Applies generating image method except Emf format image.
    /// </summary>
    /// <remarks>
    /// The default value is 96.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetVerticalResolution();
    /// <summary>
    /// Gets or sets the vertical  resolution for generated images, in dots per inch.
    /// Applies generating image method except Emf format image.
    /// </summary>
    /// <remarks>
    /// The default value is 96.
    /// </remarks>
    ASPOSE_CELLS_API void SetVerticalResolution(int32_t value);
    /// <summary>
    /// Gets or sets the type of compression to apply only when saving pages to the <c>Tiff</c> format.
    /// </summary>
    /// <remarks>
    /// Has effect only when saving to TIFF.
    /// The default value is Lzw.
    /// </remarks>
    ASPOSE_CELLS_API TiffCompression GetTiffCompression();
    /// <summary>
    /// Gets or sets the type of compression to apply only when saving pages to the <c>Tiff</c> format.
    /// </summary>
    /// <remarks>
    /// Has effect only when saving to TIFF.
    /// The default value is Lzw.
    /// </remarks>
    ASPOSE_CELLS_API void SetTiffCompression(TiffCompression value);
    /// <summary>
    /// Gets or sets bit depth to apply only when saving pages to the <c>Tiff</c> format.
    /// </summary>
    /// <remarks>
    /// Has effect only when saving to TIFF.
    /// If TiffCompression is set to CCITT3, CCITT4, this will not take effect, the bit depth of the generated tiff image will be always 1.
    /// </remarks>
    ASPOSE_CELLS_API ColorDepth GetTiffColorDepth();
    /// <summary>
    /// Gets or sets bit depth to apply only when saving pages to the <c>Tiff</c> format.
    /// </summary>
    /// <remarks>
    /// Has effect only when saving to TIFF.
    /// If TiffCompression is set to CCITT3, CCITT4, this will not take effect, the bit depth of the generated tiff image will be always 1.
    /// </remarks>
    ASPOSE_CELLS_API void SetTiffColorDepth(ColorDepth value);
    /// <summary>
    /// Gets or sets method used while converting images to 1 bpp format
    /// when <see cref="ImageType"/> is Tiff and <see cref="TiffCompression"/> is equal to Ccitt3 or Ccitt4.
    /// </summary>
    /// <remarks>
    /// The default value is FloydSteinbergDithering.
    /// </remarks>
    ASPOSE_CELLS_API ImageBinarizationMethod GetTiffBinarizationMethod();
    /// <summary>
    /// Gets or sets method used while converting images to 1 bpp format
    /// when <see cref="ImageType"/> is Tiff and <see cref="TiffCompression"/> is equal to Ccitt3 or Ccitt4.
    /// </summary>
    /// <remarks>
    /// The default value is FloydSteinbergDithering.
    /// </remarks>
    ASPOSE_CELLS_API void SetTiffBinarizationMethod(ImageBinarizationMethod value);
    /// <summary>
    /// Indicates which pages will not be printed.
    /// </summary>
    ASPOSE_CELLS_API PrintingPageType GetPrintingPage();
    /// <summary>
    /// Indicates which pages will not be printed.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintingPage(PrintingPageType value);
    /// <summary>
    /// Gets or sets a value determining the quality of the generated  images
    /// to apply only when saving pages to the <c>Jpeg</c> format. The default value is 100
    /// </summary>
    /// <remarks>
    /// Has effect only when saving to JPEG.
    /// The value must be between 0 and 100.
    /// The default value is 100.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetQuality();
    /// <summary>
    /// Gets or sets a value determining the quality of the generated  images
    /// to apply only when saving pages to the <c>Jpeg</c> format. The default value is 100
    /// </summary>
    /// <remarks>
    /// Has effect only when saving to JPEG.
    /// The value must be between 0 and 100.
    /// The default value is 100.
    /// </remarks>
    ASPOSE_CELLS_API void SetQuality(int32_t value);
    /// <summary>
    /// Gets or sets the format of the generated images.
    /// default value: PNG.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::ImageType GetImageType();
    /// <summary>
    /// Gets or sets the format of the generated images.
    /// default value: PNG.
    /// </summary>
    ASPOSE_CELLS_API void SetImageType(Aspose::Cells::Drawing::ImageType value);
    /// <summary>
    /// If OnePagePerSheet is true , all content of one sheet will output to only one page in result.
    /// The paper size of pagesetup will be invalid, and the other settings of pagesetup
    /// will still take effect.
    /// </summary>
    ASPOSE_CELLS_API bool GetOnePagePerSheet();
    /// <summary>
    /// If OnePagePerSheet is true , all content of one sheet will output to only one page in result.
    /// The paper size of pagesetup will be invalid, and the other settings of pagesetup
    /// will still take effect.
    /// </summary>
    ASPOSE_CELLS_API void SetOnePagePerSheet(bool value);
    /// <summary>
    /// If AllColumnsInOnePagePerSheet is true , all column content of one sheet will output to only one page in result.
    /// The width of paper size of pagesetup will be invalid, and the other settings of pagesetup
    /// will still take effect.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllColumnsInOnePagePerSheet();
    /// <summary>
    /// If AllColumnsInOnePagePerSheet is true , all column content of one sheet will output to only one page in result.
    /// The width of paper size of pagesetup will be invalid, and the other settings of pagesetup
    /// will still take effect.
    /// </summary>
    ASPOSE_CELLS_API void SetAllColumnsInOnePagePerSheet(bool value);
    /// <summary>
    /// Implements this interface to get DrawObject and Bound when rendering.
    /// </summary>
    ASPOSE_CELLS_API DrawObjectEventHandler* GetDrawObjectEventHandler();
    /// <summary>
    /// Implements this interface to get DrawObject and Bound when rendering.
    /// </summary>
    ASPOSE_CELLS_API void SetDrawObjectEventHandler(DrawObjectEventHandler* value);
    /// <summary>
    /// Indicate the filename of embedded image in svg.
    /// This should be full path with directory like "c:\\xpsEmbedded"
    /// </summary>
    ASPOSE_CELLS_API U16String GetEmbededImageNameInSvg();
    /// <summary>
    /// Indicate the filename of embedded image in svg.
    /// This should be full path with directory like "c:\\xpsEmbedded"
    /// </summary>
    ASPOSE_CELLS_API void SetEmbededImageNameInSvg(const U16String& value);
    /// <summary>
    /// Indicate the filename of embedded image in svg.
    /// This should be full path with directory like "c:\\xpsEmbedded"
    /// </summary>
    ASPOSE_CELLS_API void SetEmbededImageNameInSvg(const char16_t* value);
    /// <summary>
    /// if this property is true, the generated svg will fit to view port.
    /// </summary>
    ASPOSE_CELLS_API bool GetSVGFitToViewPort();
    /// <summary>
    /// if this property is true, the generated svg will fit to view port.
    /// </summary>
    ASPOSE_CELLS_API void SetSVGFitToViewPort(bool value);
    /// <summary>
    /// If this property is true , one Area will be output, and no scale will take effect.
    /// </summary>
    ASPOSE_CELLS_API bool GetOnlyArea();
    /// <summary>
    /// If this property is true , one Area will be output, and no scale will take effect.
    /// </summary>
    ASPOSE_CELLS_API void SetOnlyArea(bool value);
    /// <summary>
    /// Indicates if the background of generated image should be transparent.
    /// </summary>
    /// <remarks>
    /// The default value is false. That means the background of the generated images is white.
    /// </remarks>
    ASPOSE_CELLS_API bool GetTransparent();
    /// <summary>
    /// Indicates if the background of generated image should be transparent.
    /// </summary>
    /// <remarks>
    /// The default value is false. That means the background of the generated images is white.
    /// </remarks>
    ASPOSE_CELLS_API void SetTransparent(bool value);
    /// <summary>
    /// Gets or sets warning callback.
    /// </summary>
    ASPOSE_CELLS_API void SetWarningCallback(IWarningCallback* value);
    /// <summary>
    /// Gets or sets warning callback.
    /// </summary>
    ASPOSE_CELLS_API IWarningCallback* GetWarningCallback();
    /// <summary>
    /// Control/Indicate progress of page saving process.
    /// </summary>
    ASPOSE_CELLS_API IPageSavingCallback* GetPageSavingCallback();
    /// <summary>
    /// Control/Indicate progress of page saving process.
    /// </summary>
    ASPOSE_CELLS_API void SetPageSavingCallback(IPageSavingCallback* value);
    /// <summary>
    /// Indicates whether to only substitute the font of character when the cell font is not compatibility for it.
    /// </summary>
    /// <remarks>
    /// Default is false. We will try default font of Workbook and PdfSaveOption/system for cell font first.
    /// </remarks>
    ASPOSE_CELLS_API void SetIsFontSubstitutionCharGranularity(bool value);
    /// <summary>
    /// Indicates whether to only substitute the font of character when the cell font is not compatibility for it.
    /// </summary>
    /// <remarks>
    /// Default is false. We will try default font of Workbook and PdfSaveOption/system for cell font first.
    /// </remarks>
    ASPOSE_CELLS_API bool IsFontSubstitutionCharGranularity();
    /// <summary>
    /// Gets or sets the 0-based index of the first page to save.
    /// </summary>
    /// <remarks>
    /// Default is 0.
    /// </remarks>
    ASPOSE_CELLS_API void SetPageIndex(int32_t value);
    /// <summary>
    /// Gets or sets the 0-based index of the first page to save.
    /// </summary>
    /// <remarks>
    /// Default is 0.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetPageIndex();
    /// <summary>
    /// Gets or sets the number of pages to save.
    /// </summary>
    /// <remarks>
    /// Default is System.Int32.MaxValue which means all pages will be rendered.
    /// </remarks>
    ASPOSE_CELLS_API void SetPageCount(int32_t value);
    /// <summary>
    /// Gets or sets the number of pages to save.
    /// </summary>
    /// <remarks>
    /// Default is System.Int32.MaxValue which means all pages will be rendered.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetPageCount();
    /// <summary>
    /// Sets desired width and height of image.
    /// </summary>
    /// <param name="desiredWidth">desired width in pixels</param>
    /// <param name="desiredHeight">desired height in pixels</param>
    /// <param name="keepAspectRatio">whether to keep aspect ratio of origin image</param>
    ASPOSE_CELLS_API void SetDesiredSize(int32_t desiredWidth, int32_t desiredHeight, bool keepAspectRatio);
    /// <summary>
    /// Indicates whether to optimize the output elements.
    /// </summary>
    /// <remarks>
    /// Default value is false.
    /// Currently when this property is set to true, the following optimizations will be done:
    /// 1. optimize the border lines.
    /// 2. optimize the file size while rendering to Svg image.
    /// </remarks>
    ASPOSE_CELLS_API bool IsOptimized();
    /// <summary>
    /// Indicates whether to optimize the output elements.
    /// </summary>
    /// <remarks>
    /// Default value is false.
    /// Currently when this property is set to true, the following optimizations will be done:
    /// 1. optimize the border lines.
    /// 2. optimize the file size while rendering to Svg image.
    /// </remarks>
    ASPOSE_CELLS_API void SetIsOptimized(bool value);
    /// <summary>
    /// When characters in the Excel are Unicode and not be set with correct font in cell style,
    /// They may appear as block in pdf,image.
    /// Set the DefaultFont such as MingLiu or MS Gothic to show these characters.
    /// If this property is not set, Aspose.Cells will use system default font to show these unicode characters.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDefaultFont();
    /// <summary>
    /// When characters in the Excel are Unicode and not be set with correct font in cell style,
    /// They may appear as block in pdf,image.
    /// Set the DefaultFont such as MingLiu or MS Gothic to show these characters.
    /// If this property is not set, Aspose.Cells will use system default font to show these unicode characters.
    /// </summary>
    ASPOSE_CELLS_API void SetDefaultFont(const U16String& value);
    /// <summary>
    /// When characters in the Excel are Unicode and not be set with correct font in cell style,
    /// They may appear as block in pdf,image.
    /// Set the DefaultFont such as MingLiu or MS Gothic to show these characters.
    /// If this property is not set, Aspose.Cells will use system default font to show these unicode characters.
    /// </summary>
    ASPOSE_CELLS_API void SetDefaultFont(const char16_t* value);
    /// <summary>
    /// When characters in the Excel are Unicode and not be set with correct font in cell style,
    /// They may appear as block in pdf,image.
    /// Set this to true to try to use workbook's default font to show these characters first.
    /// </summary>
    /// <remarks>
    /// Default is true.
    /// </remarks>
    ASPOSE_CELLS_API bool GetCheckWorkbookDefaultFont();
    /// <summary>
    /// When characters in the Excel are Unicode and not be set with correct font in cell style,
    /// They may appear as block in pdf,image.
    /// Set this to true to try to use workbook's default font to show these characters first.
    /// </summary>
    /// <remarks>
    /// Default is true.
    /// </remarks>
    ASPOSE_CELLS_API void SetCheckWorkbookDefaultFont(bool value);
    /// <summary>
    /// Indicates whether to output a blank page when there is nothing to print.
    /// </summary>
    /// <remarks>
    /// Default is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetOutputBlankPageWhenNothingToPrint();
    /// <summary>
    /// Indicates whether to output a blank page when there is nothing to print.
    /// </summary>
    /// <remarks>
    /// Default is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetOutputBlankPageWhenNothingToPrint(bool value);
    /// <summary>
    /// Gets or sets gridline type.
    /// </summary>
    /// <remarks>
    /// Default is Dotted type.
    /// </remarks>
    ASPOSE_CELLS_API GridlineType GetGridlineType();
    /// <summary>
    /// Gets or sets gridline type.
    /// </summary>
    /// <remarks>
    /// Default is Dotted type.
    /// </remarks>
    ASPOSE_CELLS_API void SetGridlineType(GridlineType value);
    /// <summary>
    /// Gets or sets displaying text type when the text width is larger than cell width.
    /// </summary>
    ASPOSE_CELLS_API TextCrossType GetTextCrossType();
    /// <summary>
    /// Gets or sets displaying text type when the text width is larger than cell width.
    /// </summary>
    ASPOSE_CELLS_API void SetTextCrossType(TextCrossType value);
    /// <summary>
    /// Gets or sets default edit language.
    /// </summary>
    /// <remarks>
    /// It may display/render different layouts for text paragraph when different edit languages is set.
    /// Default is <see cref="Aspose.Cells.DefaultEditLanguage.Auto"/>.
    /// </remarks>
    ASPOSE_CELLS_API DefaultEditLanguage GetDefaultEditLanguage();
    /// <summary>
    /// Gets or sets default edit language.
    /// </summary>
    /// <remarks>
    /// It may display/render different layouts for text paragraph when different edit languages is set.
    /// Default is <see cref="Aspose.Cells.DefaultEditLanguage.Auto"/>.
    /// </remarks>
    ASPOSE_CELLS_API void SetDefaultEditLanguage(DefaultEditLanguage value);
    /// <summary>
    /// Gets or sets the sheets to render. Default is all visible sheets in the workbook: <see cref="Aspose.Cells.Rendering.SheetSet.Visible"/>.
    /// </summary>
    /// <remarks>The set is ignored when it is used in <see cref="SheetRender"/></remarks>
    ASPOSE_CELLS_API SheetSet GetSheetSet();
    /// <summary>
    /// Gets or sets the sheets to render. Default is all visible sheets in the workbook: <see cref="Aspose.Cells.Rendering.SheetSet.Visible"/>.
    /// </summary>
    /// <remarks>The set is ignored when it is used in <see cref="SheetRender"/></remarks>
    ASPOSE_CELLS_API void SetSheetSet(const SheetSet& value);
    /// <summary>
    /// Setting for rendering Emf metafile.
    /// </summary>
    /// <remarks>
    /// EMF metafiles identified as "EMF+ Dual" can contain both EMF+ records and EMF records.
    /// Either type of record can be used to render the image, only EMF+ records, or only EMF records.
    /// When <see cref="Aspose.Cells.EmfRenderSetting.EmfPlusPrefer"/> is set, then EMF+ records will be parsed while rendering to image, otherwise only EMF records will be parsed.
    /// Default value is <see cref="Aspose.Cells.EmfRenderSetting.EmfOnly"/>.
    /// For the frameworks that depend on .Net System.Drawing.Common, this setting is ignored.
    /// </remarks>
    ASPOSE_CELLS_API EmfRenderSetting GetEmfRenderSetting();
    /// <summary>
    /// Setting for rendering Emf metafile.
    /// </summary>
    /// <remarks>
    /// EMF metafiles identified as "EMF+ Dual" can contain both EMF+ records and EMF records.
    /// Either type of record can be used to render the image, only EMF+ records, or only EMF records.
    /// When <see cref="Aspose.Cells.EmfRenderSetting.EmfPlusPrefer"/> is set, then EMF+ records will be parsed while rendering to image, otherwise only EMF records will be parsed.
    /// Default value is <see cref="Aspose.Cells.EmfRenderSetting.EmfOnly"/>.
    /// For the frameworks that depend on .Net System.Drawing.Common, this setting is ignored.
    /// </remarks>
    ASPOSE_CELLS_API void SetEmfRenderSetting(EmfRenderSetting value);
    
};

} } }

#endif
