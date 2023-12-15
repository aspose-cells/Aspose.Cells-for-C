// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HTMLSAVEOPTIONS_H
#define ASPOSE_CELLS_HTMLSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/EncodingType.h"

#include "Aspose.Cells/HtmlCrossType.h"
#include "Aspose.Cells/HtmlExportDataOptions.h"
#include "Aspose.Cells/HtmlHiddenColDisplayType.h"
#include "Aspose.Cells/HtmlHiddenRowDisplayType.h"
#include "Aspose.Cells/HtmlLinkTargetType.h"
#include "Aspose.Cells/PrintCommentsType.h"
#include "Aspose.Cells/SaveFormat.h"

namespace Aspose { namespace Cells {
    class CellArea;
    class IFilePathProvider;
} }

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Rendering;

class HtmlSaveOptions_Impl;

/// <summary>
/// Represents the options for saving html file.
/// </summary>
class HtmlSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    HtmlSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates options for saving html file.
    /// </summary>
    ASPOSE_CELLS_API HtmlSaveOptions();
    /// <summary>
    /// Creates options for saving htm file.
    /// </summary>
    /// <param name="saveFormat">The file format.
    /// It should be one of following types: <see cref="SaveFormat.Html"/>, <see cref="SaveFormat.MHtml"/>,
    /// or <see cref="SaveFormat.XHtml"/>,
    /// otherwise the saved format will be set as <see cref="SaveFormat.Html"/> automatically.</param>
    ASPOSE_CELLS_API explicit HtmlSaveOptions(SaveFormat saveFormat);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API HtmlSaveOptions(HtmlSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API HtmlSaveOptions(const HtmlSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API HtmlSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~HtmlSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API HtmlSaveOptions& operator=(const HtmlSaveOptions& src);
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
    /// Indicate whether exporting those not visible shapes
    /// </summary>
    /// <remarks>
    /// The default values is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetIgnoreInvisibleShapes();
    /// <summary>
    /// Indicate whether exporting those not visible shapes
    /// </summary>
    /// <remarks>
    /// The default values is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetIgnoreInvisibleShapes(bool value);
    /// <summary>
    /// The title of the html page.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPageTitle();
    /// <summary>
    /// The title of the html page.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API void SetPageTitle(const U16String& value);
    /// <summary>
    /// The title of the html page.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API void SetPageTitle(const char16_t* value);
    /// <summary>
    /// The directory that the attached files will be saved to.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAttachedFilesDirectory();
    /// <summary>
    /// The directory that the attached files will be saved to.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API void SetAttachedFilesDirectory(const U16String& value);
    /// <summary>
    /// The directory that the attached files will be saved to.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API void SetAttachedFilesDirectory(const char16_t* value);
    /// <summary>
    /// Specify the Url prefix of attached files such as image in the html file.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAttachedFilesUrlPrefix();
    /// <summary>
    /// Specify the Url prefix of attached files such as image in the html file.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API void SetAttachedFilesUrlPrefix(const U16String& value);
    /// <summary>
    /// Specify the Url prefix of attached files such as image in the html file.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API void SetAttachedFilesUrlPrefix(const char16_t* value);
    /// <summary>
    /// Specify the default font name for exporting html, the default font will be used  when the font of style is not existing,
    /// If this property is null, Aspose.Cells will use universal font which have the same family with the original font,
    /// the default value is null.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDefaultFontName();
    /// <summary>
    /// Specify the default font name for exporting html, the default font will be used  when the font of style is not existing,
    /// If this property is null, Aspose.Cells will use universal font which have the same family with the original font,
    /// the default value is null.
    /// </summary>
    ASPOSE_CELLS_API void SetDefaultFontName(const U16String& value);
    /// <summary>
    /// Specify the default font name for exporting html, the default font will be used  when the font of style is not existing,
    /// If this property is null, Aspose.Cells will use universal font which have the same family with the original font,
    /// the default value is null.
    /// </summary>
    ASPOSE_CELLS_API void SetDefaultFontName(const char16_t* value);
    /// <summary>
    /// Indicates if zooming in or out the html via worksheet zoom level when saving file to html, the default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetWorksheetScalable();
    /// <summary>
    /// Indicates if zooming in or out the html via worksheet zoom level when saving file to html, the default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetWorksheetScalable(bool value);
    /// <summary>
    /// Indicates if exporting comments when saving file to html, the default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsExportComments();
    /// <summary>
    /// Indicates if exporting comments when saving file to html, the default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsExportComments(bool value);
    /// <summary>
    /// Represents type of exporting comments to html files.
    /// </summary>
    ASPOSE_CELLS_API PrintCommentsType GetExportCommentsType();
    /// <summary>
    /// Represents type of exporting comments to html files.
    /// </summary>
    ASPOSE_CELLS_API void SetExportCommentsType(PrintCommentsType value);
    /// <summary>
    /// Indicates if disable Downlevel-revealed conditional comments when exporting file to html, the default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisableDownlevelRevealedComments();
    /// <summary>
    /// Indicates if disable Downlevel-revealed conditional comments when exporting file to html, the default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetDisableDownlevelRevealedComments(bool value);
    /// <summary>
    /// Indicates whether exporting image files to temp directory.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API bool IsExpImageToTempDir();
    /// <summary>
    /// Indicates whether exporting image files to temp directory.
    /// Only for saving to html stream.
    /// </summary>
    ASPOSE_CELLS_API void SetIsExpImageToTempDir(bool value);
    /// <summary>
    /// Indicates whether using scalable unit to describe the image width
    /// when using scalable unit to describe the column width.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetImageScalable();
    /// <summary>
    /// Indicates whether using scalable unit to describe the image width
    /// when using scalable unit to describe the column width.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetImageScalable(bool value);
    /// <summary>
    /// Indicates whether exporting column width in unit of scale to html.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetWidthScalable();
    /// <summary>
    /// Indicates whether exporting column width in unit of scale to html.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetWidthScalable(bool value);
    /// <summary>
    /// Indicates whether exporting the single tab when the file only has one worksheet.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportSingleTab();
    /// <summary>
    /// Indicates whether exporting the single tab when the file only has one worksheet.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetExportSingleTab(bool value);
    /// <summary>
    /// Specifies whether images are saved in Base64 format to HTML, MHTML or EPUB.
    /// </summary>
    /// <remarks>
    /// When this property is set to true image data is exported directly on the
    /// img elements and separate files are not created.
    /// </remarks>
    ASPOSE_CELLS_API bool GetExportImagesAsBase64();
    /// <summary>
    /// Specifies whether images are saved in Base64 format to HTML, MHTML or EPUB.
    /// </summary>
    /// <remarks>
    /// When this property is set to true image data is exported directly on the
    /// img elements and separate files are not created.
    /// </remarks>
    ASPOSE_CELLS_API void SetExportImagesAsBase64(bool value);
    /// <summary>
    /// Indicates if only exporting the active worksheet to html file.
    /// If true then only the active worksheet will be exported to html file;
    /// If false then the whole workbook will be exported to html file.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportActiveWorksheetOnly();
    /// <summary>
    /// Indicates if only exporting the active worksheet to html file.
    /// If true then only the active worksheet will be exported to html file;
    /// If false then the whole workbook will be exported to html file.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetExportActiveWorksheetOnly(bool value);
    /// <summary>
    /// Indicates if only exporting the print area to html file. The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportPrintAreaOnly();
    /// <summary>
    /// Indicates if only exporting the print area to html file. The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetExportPrintAreaOnly(bool value);
    /// <summary>
    /// Gets or Sets the exporting CellArea of current active Worksheet.
    /// If you set this attribute, the print area of current active Worksheet will be omitted.
    /// Only the specified area will be exported when saving the file to html.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetExportArea();
    /// <summary>
    /// Gets or Sets the exporting CellArea of current active Worksheet.
    /// If you set this attribute, the print area of current active Worksheet will be omitted.
    /// Only the specified area will be exported when saving the file to html.
    /// </summary>
    ASPOSE_CELLS_API void SetExportArea(const CellArea& value);
    /// <summary>
    /// Indicates whether html tag(such as <c>&lt;div&gt;&lt;/div&gt;</c>) in cell should be parsed as cell value or preserved as it is.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetParseHtmlTagInCell();
    /// <summary>
    /// Indicates whether html tag(such as <c>&lt;div&gt;&lt;/div&gt;</c>) in cell should be parsed as cell value or preserved as it is.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetParseHtmlTagInCell(bool value);
    /// <summary>
    /// Indicates if a cross-cell string will be displayed in the same way as MS Excel when saving an Excel file in html format.
    /// By default the value is Default, so, for cross-cell strings, there is little difference between the html files created by Aspose.Cells and MS Excel.
    /// But the performance for creating large html files,setting the value to Cross would be several times faster than setting it to Default or Fit2Cell.
    /// </summary>
    ASPOSE_CELLS_API HtmlCrossType GetHtmlCrossStringType();
    /// <summary>
    /// Indicates if a cross-cell string will be displayed in the same way as MS Excel when saving an Excel file in html format.
    /// By default the value is Default, so, for cross-cell strings, there is little difference between the html files created by Aspose.Cells and MS Excel.
    /// But the performance for creating large html files,setting the value to Cross would be several times faster than setting it to Default or Fit2Cell.
    /// </summary>
    ASPOSE_CELLS_API void SetHtmlCrossStringType(HtmlCrossType value);
    /// <summary>
    /// Hidden column(the width of this column is 0) in excel,before save this into html format,
    /// if HtmlHiddenColDisplayType is "Remove",the hidden column would not been output,
    /// if the value is "Hidden", the column would been output,but was hidden,the default value is "Hidden"
    /// </summary>
    ASPOSE_CELLS_API HtmlHiddenColDisplayType GetHiddenColDisplayType();
    /// <summary>
    /// Hidden column(the width of this column is 0) in excel,before save this into html format,
    /// if HtmlHiddenColDisplayType is "Remove",the hidden column would not been output,
    /// if the value is "Hidden", the column would been output,but was hidden,the default value is "Hidden"
    /// </summary>
    ASPOSE_CELLS_API void SetHiddenColDisplayType(HtmlHiddenColDisplayType value);
    /// <summary>
    /// Hidden row(the height of this row is 0) in excel,before save this into html format,
    /// if HtmlHiddenRowDisplayType is "Remove",the hidden row would not been output,
    /// if the value is "Hidden", the row would been output,but was hidden,the default value is "Hidden"
    /// </summary>
    ASPOSE_CELLS_API HtmlHiddenRowDisplayType GetHiddenRowDisplayType();
    /// <summary>
    /// Hidden row(the height of this row is 0) in excel,before save this into html format,
    /// if HtmlHiddenRowDisplayType is "Remove",the hidden row would not been output,
    /// if the value is "Hidden", the row would been output,but was hidden,the default value is "Hidden"
    /// </summary>
    ASPOSE_CELLS_API void SetHiddenRowDisplayType(HtmlHiddenRowDisplayType value);
    /// <summary>
    /// If not set,use Encoding.UTF8 as default enconding type.
    /// </summary>
    ASPOSE_CELLS_API EncodingType GetEncoding();
    /// <summary>
    /// If not set,use Encoding.UTF8 as default enconding type.
    /// </summary>
    ASPOSE_CELLS_API void SetEncoding(EncodingType value);
    /// <summary>
    /// Gets or sets the IFilePathProvider for exporting Worksheet to html separately.
    /// </summary>
    ASPOSE_CELLS_API IFilePathProvider* GetFilePathProvider();
    /// <summary>
    /// Gets or sets the IFilePathProvider for exporting Worksheet to html separately.
    /// </summary>
    ASPOSE_CELLS_API void SetFilePathProvider(IFilePathProvider* value);
    /// <summary>
    /// Get the ImageOrPrintOptions object before exporting
    /// </summary>
    ASPOSE_CELLS_API ImageOrPrintOptions GetImageOptions();
    /// <summary>
    /// Indicates whether save the html as single file.
    /// The default value is false.
    /// </summary>
    /// <remarks>
    /// If there are multiple worksheets or other required resources such as pictures in the workbook,
    /// commonly those worksheets and other resources need to be saved into separate files.
    /// For some scenarios, user maybe need to get only one resultant file such as for the convenience of transferring.
    /// If so, user may set this property as true.
    /// </remarks>
    ASPOSE_CELLS_API bool GetSaveAsSingleFile();
    /// <summary>
    /// Indicates whether save the html as single file.
    /// The default value is false.
    /// </summary>
    /// <remarks>
    /// If there are multiple worksheets or other required resources such as pictures in the workbook,
    /// commonly those worksheets and other resources need to be saved into separate files.
    /// For some scenarios, user maybe need to get only one resultant file such as for the convenience of transferring.
    /// If so, user may set this property as true.
    /// </remarks>
    ASPOSE_CELLS_API void SetSaveAsSingleFile(bool value);
    /// <summary>
    /// Indicates whether showing all sheets when saving  as a single html file.
    /// </summary>
    /// <remarks>
    /// Only works when <see cref="SaveAsSingleFile"/> is True.
    /// </remarks>
    ASPOSE_CELLS_API bool GetShowAllSheets();
    /// <summary>
    /// Indicates whether showing all sheets when saving  as a single html file.
    /// </summary>
    /// <remarks>
    /// Only works when <see cref="SaveAsSingleFile"/> is True.
    /// </remarks>
    ASPOSE_CELLS_API void SetShowAllSheets(bool value);
    /// <summary>
    /// Indicates whether exporting page headers.
    /// </summary>
    /// <remarks>
    /// Only works when <see cref="SaveAsSingleFile"/> is True.
    /// </remarks>
    ASPOSE_CELLS_API bool GetExportPageHeaders();
    /// <summary>
    /// Indicates whether exporting page headers.
    /// </summary>
    /// <remarks>
    /// Only works when <see cref="SaveAsSingleFile"/> is True.
    /// </remarks>
    ASPOSE_CELLS_API void SetExportPageHeaders(bool value);
    /// <summary>
    /// Indicates whether exporting page headers.
    /// </summary>
    /// <remarks>
    /// Only works when <see cref="SaveAsSingleFile"/> is True.
    /// </remarks>
    ASPOSE_CELLS_API bool GetExportPageFooters();
    /// <summary>
    /// Indicates whether exporting page headers.
    /// </summary>
    /// <remarks>
    /// Only works when <see cref="SaveAsSingleFile"/> is True.
    /// </remarks>
    ASPOSE_CELLS_API void SetExportPageFooters(bool value);
    /// <summary>
    /// Indicating if exporting the hidden worksheet content.The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportHiddenWorksheet();
    /// <summary>
    /// Indicating if exporting the hidden worksheet content.The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetExportHiddenWorksheet(bool value);
    /// <summary>
    /// Indicating if html or mht file is presentation preference.
    /// The default value is false.
    /// if you want to get more beautiful presentation,please set the value to true.
    /// </summary>
    ASPOSE_CELLS_API bool GetPresentationPreference();
    /// <summary>
    /// Indicating if html or mht file is presentation preference.
    /// The default value is false.
    /// if you want to get more beautiful presentation,please set the value to true.
    /// </summary>
    ASPOSE_CELLS_API void SetPresentationPreference(bool value);
    /// <summary>
    /// Gets and sets the prefix of the css name,the default value is "".
    /// </summary>
    ASPOSE_CELLS_API U16String GetCellCssPrefix();
    /// <summary>
    /// Gets and sets the prefix of the css name,the default value is "".
    /// </summary>
    ASPOSE_CELLS_API void SetCellCssPrefix(const U16String& value);
    /// <summary>
    /// Gets and sets the prefix of the css name,the default value is "".
    /// </summary>
    ASPOSE_CELLS_API void SetCellCssPrefix(const char16_t* value);
    /// <summary>
    /// Gets and sets the prefix of the type css name such as tr,col,td and so on, they are contained in the table element
    /// which has the specific TableCssId attribute. The default value is "".
    /// </summary>
    ASPOSE_CELLS_API U16String GetTableCssId();
    /// <summary>
    /// Gets and sets the prefix of the type css name such as tr,col,td and so on, they are contained in the table element
    /// which has the specific TableCssId attribute. The default value is "".
    /// </summary>
    ASPOSE_CELLS_API void SetTableCssId(const U16String& value);
    /// <summary>
    /// Gets and sets the prefix of the type css name such as tr,col,td and so on, they are contained in the table element
    /// which has the specific TableCssId attribute. The default value is "".
    /// </summary>
    ASPOSE_CELLS_API void SetTableCssId(const char16_t* value);
    /// <summary>
    /// Indicating whether using full path link in sheet00x.htm,filelist.xml and tabstrip.htm.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsFullPathLink();
    /// <summary>
    /// Indicating whether using full path link in sheet00x.htm,filelist.xml and tabstrip.htm.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsFullPathLink(bool value);
    /// <summary>
    /// Indicating whether export the worksheet css separately.The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportWorksheetCSSSeparately();
    /// <summary>
    /// Indicating whether export the worksheet css separately.The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetExportWorksheetCSSSeparately(bool value);
    /// <summary>
    /// Indicating whether exporting the similar border style when the border style is not supported by browsers.
    /// If you want to import the html or mht file to excel, please keep the default value.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportSimilarBorderStyle();
    /// <summary>
    /// Indicating whether exporting the similar border style when the border style is not supported by browsers.
    /// If you want to import the html or mht file to excel, please keep the default value.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetExportSimilarBorderStyle(bool value);
    /// <summary>
    /// Indicates whether merging empty TD element forcedly when exporting file to html.
    /// The size of html file will be reduced significantly after setting value to true. The default value is false.
    /// If you want to import the html file to excel or export perfect grid lines when saving file to html,
    /// please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API bool GetMergeEmptyTdForcely();
    /// <summary>
    /// Indicates whether merging empty TD element forcedly when exporting file to html.
    /// The size of html file will be reduced significantly after setting value to true. The default value is false.
    /// If you want to import the html file to excel or export perfect grid lines when saving file to html,
    /// please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API void SetMergeEmptyTdForcely(bool value);
    /// <summary>
    /// Indicates whether exporting excel coordinate of nonblank cells when saving file to html. The default value is false.
    /// If you want to import the output html to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportCellCoordinate();
    /// <summary>
    /// Indicates whether exporting excel coordinate of nonblank cells when saving file to html. The default value is false.
    /// If you want to import the output html to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API void SetExportCellCoordinate(bool value);
    /// <summary>
    /// Indicates whether exporting extra headings when the length of text is longer than max display column.
    /// The default value is false. If you want to import the html file to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportExtraHeadings();
    /// <summary>
    /// Indicates whether exporting extra headings when the length of text is longer than max display column.
    /// The default value is false. If you want to import the html file to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API void SetExportExtraHeadings(bool value);
    /// <summary>
    /// Indicates whether exports sheet's row and column headings when saving to HTML files.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetExportRowColumnHeadings();
    /// <summary>
    /// Indicates whether exports sheet's row and column headings when saving to HTML files.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetExportRowColumnHeadings(bool value);
    /// <summary>
    /// Indicates whether exporting formula when saving file to html. The default value is true.
    /// If you want to import the output html to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportFormula();
    /// <summary>
    /// Indicates whether exporting formula when saving file to html. The default value is true.
    /// If you want to import the output html to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API void SetExportFormula(bool value);
    /// <summary>
    /// Indicates whether adding tooltip text when the data can't be fully displayed.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetAddTooltipText();
    /// <summary>
    /// Indicates whether adding tooltip text when the data can't be fully displayed.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetAddTooltipText(bool value);
    /// <summary>
    /// Indicating whether exporting the gridlines.The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportGridLines();
    /// <summary>
    /// Indicating whether exporting the gridlines.The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetExportGridLines(bool value);
    /// <summary>
    /// Indicating whether exporting bogus bottom row data. The default value is true.If you want to import the html or mht file
    /// to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportBogusRowData();
    /// <summary>
    /// Indicating whether exporting bogus bottom row data. The default value is true.If you want to import the html or mht file
    /// to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API void SetExportBogusRowData(bool value);
    /// <summary>
    /// Indicating whether excludes unused styles.
    /// For the generated html files, excluding unused styles can make the file size smaller
    /// without affecting the visual effects. So the default value of this property is true.
    /// If user needs to keep all styles in the workbook for the generated html(such as the scenario that user
    /// needs to restore the workbook from the generated html later), please set this property as false.
    /// </summary>
    ASPOSE_CELLS_API bool GetExcludeUnusedStyles();
    /// <summary>
    /// Indicating whether excludes unused styles.
    /// For the generated html files, excluding unused styles can make the file size smaller
    /// without affecting the visual effects. So the default value of this property is true.
    /// If user needs to keep all styles in the workbook for the generated html(such as the scenario that user
    /// needs to restore the workbook from the generated html later), please set this property as false.
    /// </summary>
    ASPOSE_CELLS_API void SetExcludeUnusedStyles(bool value);
    /// <summary>
    /// Indicating whether exporting document properties.The default value is true.If you want to import
    /// the html or mht file to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportDocumentProperties();
    /// <summary>
    /// Indicating whether exporting document properties.The default value is true.If you want to import
    /// the html or mht file to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API void SetExportDocumentProperties(bool value);
    /// <summary>
    /// Indicating whether exporting worksheet properties.The default value is true.If you want to import
    /// the html or mht file to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportWorksheetProperties();
    /// <summary>
    /// Indicating whether exporting worksheet properties.The default value is true.If you want to import
    /// the html or mht file to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API void SetExportWorksheetProperties(bool value);
    /// <summary>
    /// Indicating whether exporting workbook properties.The default value is true.If you want to import
    /// the html or mht file to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportWorkbookProperties();
    /// <summary>
    /// Indicating whether exporting workbook properties.The default value is true.If you want to import
    /// the html or mht file to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API void SetExportWorkbookProperties(bool value);
    /// <summary>
    /// Indicating whether exporting frame scripts and document properties. The default value is true.If you want to import the html or mht file
    /// to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportFrameScriptsAndProperties();
    /// <summary>
    /// Indicating whether exporting frame scripts and document properties. The default value is true.If you want to import the html or mht file
    /// to excel, please keep the default value.
    /// </summary>
    ASPOSE_CELLS_API void SetExportFrameScriptsAndProperties(bool value);
    /// <summary>
    /// Indicating the rule of exporting html file data.The default value is All.
    /// </summary>
    ASPOSE_CELLS_API HtmlExportDataOptions GetExportDataOptions();
    /// <summary>
    /// Indicating the rule of exporting html file data.The default value is All.
    /// </summary>
    ASPOSE_CELLS_API void SetExportDataOptions(HtmlExportDataOptions value);
    /// <summary>
    /// Indicating the type of target attribute in <c>&lt;a&gt;</c> link. The default value is HtmlLinkTargetType.Parent.
    /// </summary>
    ASPOSE_CELLS_API HtmlLinkTargetType GetLinkTargetType();
    /// <summary>
    /// Indicating the type of target attribute in <c>&lt;a&gt;</c> link. The default value is HtmlLinkTargetType.Parent.
    /// </summary>
    ASPOSE_CELLS_API void SetLinkTargetType(HtmlLinkTargetType value);
    /// <summary>
    /// Indicating whether the output HTML is compatible with IE browser.
    /// The defalut value is false
    /// </summary>
    ASPOSE_CELLS_API bool IsIECompatible();
    /// <summary>
    /// Indicating whether the output HTML is compatible with IE browser.
    /// The defalut value is false
    /// </summary>
    ASPOSE_CELLS_API void SetIsIECompatible(bool value);
    /// <summary>
    /// Indicating whether show the whole formatted data of cell when overflowing the column.
    /// If true then ignore the column width and the whole data of cell will be exported.
    /// If false then the data will be exported same as Excel.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetFormatDataIgnoreColumnWidth();
    /// <summary>
    /// Indicating whether show the whole formatted data of cell when overflowing the column.
    /// If true then ignore the column width and the whole data of cell will be exported.
    /// If false then the data will be exported same as Excel.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetFormatDataIgnoreColumnWidth(bool value);
    /// <summary>
    /// Indicates whether to calculate formulas before saving html file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API bool GetCalculateFormula();
    /// <summary>
    /// Indicates whether to calculate formulas before saving html file.
    /// </summary>
    /// <remarks>
    /// The default value is false.
    /// </remarks>
    ASPOSE_CELLS_API void SetCalculateFormula(bool value);
    /// <summary>
    /// Indicates whether JavaScript is compatible with browsers that do not support JavaScript.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsJsBrowserCompatible();
    /// <summary>
    /// Indicates whether JavaScript is compatible with browsers that do not support JavaScript.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsJsBrowserCompatible(bool value);
    /// <summary>
    /// Indicates whether the output HTML is compatible with mobile devices.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsMobileCompatible();
    /// <summary>
    /// Indicates whether the output HTML is compatible with mobile devices.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsMobileCompatible(bool value);
    
};

} }

#endif
