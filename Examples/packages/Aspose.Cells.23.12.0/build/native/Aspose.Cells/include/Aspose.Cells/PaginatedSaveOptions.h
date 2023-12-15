// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PAGINATEDSAVEOPTIONS_H
#define ASPOSE_CELLS_PAGINATEDSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/DefaultEditLanguage.h"
#include "Aspose.Cells/EmfRenderSetting.h"
#include "Aspose.Cells/GridlineType.h"
#include "Aspose.Cells/PrintingPageType.h"
#include "Aspose.Cells/TextCrossType.h"

namespace Aspose { namespace Cells { namespace Rendering {
    class SheetSet;
    class DrawObjectEventHandler;
    class IPageSavingCallback;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Rendering;

class PaginatedSaveOptions_Impl;

/// <summary>
/// Represents the options for pagination.
/// </summary>
class PaginatedSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PaginatedSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PaginatedSaveOptions(PaginatedSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PaginatedSaveOptions(const PaginatedSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PaginatedSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PaginatedSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PaginatedSaveOptions& operator=(const PaginatedSaveOptions& src);
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
    /// Indicates whether to check font compatibility for every character in text.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// Disable this property may give better performance.
    /// But when the default or specified font of text/character cannot be used to render it,
    /// unreadable characters(such as block) maybe occur in the generated pdf.
    /// For such situation user should keep this property as true so that
    /// alternative font can be searched and used to render the text instead;
    /// </remarks>
    ASPOSE_CELLS_API void SetCheckFontCompatibility(bool value);
    /// <summary>
    /// Indicates whether to check font compatibility for every character in text.
    /// </summary>
    /// <remarks>
    /// The default value is true.
    /// Disable this property may give better performance.
    /// But when the default or specified font of text/character cannot be used to render it,
    /// unreadable characters(such as block) maybe occur in the generated pdf.
    /// For such situation user should keep this property as true so that
    /// alternative font can be searched and used to render the text instead;
    /// </remarks>
    ASPOSE_CELLS_API bool GetCheckFontCompatibility();
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
    /// The width of paper size of pagesetup will be ignored, and the other settings of pagesetup
    /// will still take effect.
    /// </summary>
    ASPOSE_CELLS_API bool GetAllColumnsInOnePagePerSheet();
    /// <summary>
    /// If AllColumnsInOnePagePerSheet is true , all column content of one sheet will output to only one page in result.
    /// The width of paper size of pagesetup will be ignored, and the other settings of pagesetup
    /// will still take effect.
    /// </summary>
    ASPOSE_CELLS_API void SetAllColumnsInOnePagePerSheet(bool value);
    /// <summary>
    /// Indicates if you need to hide the error while rendering.
    /// The error can be error in shape, image, chart rendering, etc.
    /// </summary>
    ASPOSE_CELLS_API bool GetIgnoreError();
    /// <summary>
    /// Indicates if you need to hide the error while rendering.
    /// The error can be error in shape, image, chart rendering, etc.
    /// </summary>
    ASPOSE_CELLS_API void SetIgnoreError(bool value);
    /// <summary>
    /// Indicates whether to output a blank page when there is nothing to print.
    /// </summary>
    /// <remarks>
    /// Default is true.
    /// </remarks>
    ASPOSE_CELLS_API bool GetOutputBlankPageWhenNothingToPrint();
    /// <summary>
    /// Indicates whether to output a blank page when there is nothing to print.
    /// </summary>
    /// <remarks>
    /// Default is true.
    /// </remarks>
    ASPOSE_CELLS_API void SetOutputBlankPageWhenNothingToPrint(bool value);
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
    /// Default is System.Int32.MaxValue which means all pages will be rendered..
    /// </remarks>
    ASPOSE_CELLS_API void SetPageCount(int32_t value);
    /// <summary>
    /// Gets or sets the number of pages to save.
    /// </summary>
    /// <remarks>
    /// Default is System.Int32.MaxValue which means all pages will be rendered..
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetPageCount();
    /// <summary>
    /// Indicates which pages will not be printed.
    /// </summary>
    /// <remarks>
    /// If content in the sheet is sparse, there will be some pages are totally blank in the output pdf file.
    /// If you don't want these blank pages, you can use this option to omit them.
    /// </remarks>
    ASPOSE_CELLS_API PrintingPageType GetPrintingPageType();
    /// <summary>
    /// Indicates which pages will not be printed.
    /// </summary>
    /// <remarks>
    /// If content in the sheet is sparse, there will be some pages are totally blank in the output pdf file.
    /// If you don't want these blank pages, you can use this option to omit them.
    /// </remarks>
    ASPOSE_CELLS_API void SetPrintingPageType(PrintingPageType value);
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
    ASPOSE_CELLS_API SheetSet GetSheetSet();
    /// <summary>
    /// Gets or sets the sheets to render. Default is all visible sheets in the workbook: <see cref="Aspose.Cells.Rendering.SheetSet.Visible"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetSheetSet(const SheetSet& value);
    /// <summary>
    /// Implements this interface to get DrawObject and Bound when rendering.
    /// </summary>
    ASPOSE_CELLS_API DrawObjectEventHandler* GetDrawObjectEventHandler();
    /// <summary>
    /// Implements this interface to get DrawObject and Bound when rendering.
    /// </summary>
    ASPOSE_CELLS_API void SetDrawObjectEventHandler(DrawObjectEventHandler* value);
    /// <summary>
    /// Control/Indicate progress of page saving process.
    /// </summary>
    ASPOSE_CELLS_API IPageSavingCallback* GetPageSavingCallback();
    /// <summary>
    /// Control/Indicate progress of page saving process.
    /// </summary>
    ASPOSE_CELLS_API void SetPageSavingCallback(IPageSavingCallback* value);
    /// <summary>
    /// Setting for rendering Emf metafile.
    /// </summary>
    /// <remarks>
    /// EMF metafiles identified as "EMF+ Dual" can contain both EMF+ records and EMF records.
    /// Either type of record can be used to render the image, only EMF+ records, or only EMF records.
    /// When <see cref="Aspose.Cells.EmfRenderSetting.EmfPlusPrefer"/> is set, then EMF+ records will be parsed while rendering to page, otherwise only EMF records will be parsed.
    /// Default value is <see cref="Aspose.Cells.EmfRenderSetting.EmfOnly"/>.
    /// </remarks>
    ASPOSE_CELLS_API EmfRenderSetting GetEmfRenderSetting();
    /// <summary>
    /// Setting for rendering Emf metafile.
    /// </summary>
    /// <remarks>
    /// EMF metafiles identified as "EMF+ Dual" can contain both EMF+ records and EMF records.
    /// Either type of record can be used to render the image, only EMF+ records, or only EMF records.
    /// When <see cref="Aspose.Cells.EmfRenderSetting.EmfPlusPrefer"/> is set, then EMF+ records will be parsed while rendering to page, otherwise only EMF records will be parsed.
    /// Default value is <see cref="Aspose.Cells.EmfRenderSetting.EmfOnly"/>.
    /// </remarks>
    ASPOSE_CELLS_API void SetEmfRenderSetting(EmfRenderSetting value);
    
};

} }

#endif
