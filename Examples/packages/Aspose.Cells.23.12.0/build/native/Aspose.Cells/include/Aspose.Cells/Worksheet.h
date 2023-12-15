// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_WORKSHEET_H
#define ASPOSE_CELLS_WORKSHEET_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Color.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/AccessCacheOptions.h"
#include "Aspose.Cells/PaneStateType.h"
#include "Aspose.Cells/ProtectionType.h"
#include "Aspose.Cells/SheetType.h"
#include "Aspose.Cells/ViewType.h"
#include "Aspose.Cells/VisibilityType.h"

namespace Aspose { namespace Cells {
    class Protection;
    class PaneCollection;
    class Workbook;
    class Cells;
    class QueryTableCollection;
    class HorizontalPageBreakCollection;
    class VerticalPageBreakCollection;
    class HyperlinkCollection;
    class CopyOptions;
    class AutoFitterOptions;
    class PageSetup;
    class AutoFilter;
    class CommentCollection;
    class ValidationCollection;
    class ProtectedRangeCollection;
    class ErrorCheckOptionCollection;
    class Outline;
    class ConditionalFormattingCollection;
    class CellArea;
    class ScenarioCollection;
    class CalculationOptions;
    class CellWatchCollection;
} }

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotTableCollection;
} } }

namespace Aspose { namespace Cells { namespace Tables {
    class ListObjectCollection;
} } }

namespace Aspose { namespace Cells { namespace Charts {
    class SparklineGroupCollection;
    class ChartCollection;
} } }

namespace Aspose { namespace Cells { namespace Drawing {
    class PictureCollection;
    class TextBoxCollection;
    class CheckBoxCollection;
    class OleObjectCollection;
    class ShapeCollection;
} } }

namespace Aspose { namespace Cells { namespace Slicers {
    class SlicerCollection;
} } }

namespace Aspose { namespace Cells { namespace Timelines {
    class TimelineCollection;
} } }

namespace Aspose { namespace Cells { namespace Properties {
    class CustomPropertyCollection;
} } }

namespace Aspose { namespace Cells { namespace Rendering {
    class ImageOrPrintOptions;
} } }

namespace Aspose { namespace Cells { namespace Markup {
    class SmartTagSetting;
} } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Charts;
using namespace Aspose::Cells::Drawing;
using namespace Aspose::Cells::Markup;
using namespace Aspose::Cells::Pivot;
using namespace Aspose::Cells::Properties;
using namespace Aspose::Cells::Rendering;
using namespace Aspose::Cells::Slicers;
using namespace Aspose::Cells::Tables;
using namespace Aspose::Cells::Timelines;

class Worksheet_Impl;

/// <summary>
/// Encapsulates the object that represents a single worksheet.
/// </summary>
class ASPOSE_CELLS_API2 Worksheet {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Worksheet_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Worksheet(Worksheet_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Worksheet(const Worksheet& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Worksheet();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Worksheet& operator=(const Worksheet& src);
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
    /// Performs application-defined tasks associated with freeing, releasing, or
    /// resetting unmanaged resources.
    /// </summary>
    ASPOSE_CELLS_API void Dispose();
    /// <summary>
    /// Represents the various types of protection options available for a worksheet. Supports advanced protection options in ExcelXP and above version.
    /// </summary>
    /// <remarks>This property can protect worksheet in all versions of Excel file and support advanced protection options in ExcelXP and above version.
    /// </remarks>
    ASPOSE_CELLS_API Protection GetProtection();
    /// <summary>
    /// Gets and sets the unique id, it is same as {15DB5C3C-A5A1-48AF-8F25-3D86AC232D4F}.
    /// </summary>
    ASPOSE_CELLS_API U16String GetUniqueId();
    /// <summary>
    /// Gets and sets the unique id, it is same as {15DB5C3C-A5A1-48AF-8F25-3D86AC232D4F}.
    /// </summary>
    ASPOSE_CELLS_API void SetUniqueId(const U16String& value);
    /// <summary>
    /// Gets and sets the unique id, it is same as {15DB5C3C-A5A1-48AF-8F25-3D86AC232D4F}.
    /// </summary>
    ASPOSE_CELLS_API void SetUniqueId(const char16_t* value);
    /// <summary>
    /// Gets the window panes.
    /// </summary>
    /// <remarks>
    /// If the window is not split or frozen.
    /// </remarks>
    ASPOSE_CELLS_API PaneCollection GetPanes();
    /// <summary>
    /// Gets the workbook object which contains this sheet.
    /// </summary>
    ASPOSE_CELLS_API Workbook GetWorkbook();
    /// <summary>
    /// Gets the <see cref="Cells"/> collection.
    /// </summary>
    ASPOSE_CELLS_API Cells GetCells();
    /// <summary>
    /// Gets <see cref="QueryTableCollection"/> in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API QueryTableCollection GetQueryTables();
    /// <summary>
    /// Gets all pivot tables in this worksheet.
    /// </summary>
    ASPOSE_CELLS_API PivotTableCollection GetPivotTables();
    /// <summary>
    /// Represents worksheet type.
    /// </summary>
    ASPOSE_CELLS_API SheetType GetType();
    /// <summary>
    /// Represents worksheet type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(SheetType value);
    /// <summary>
    /// Gets or sets the name of the worksheet.
    /// </summary>
    /// <remarks>The max length of sheet name is 31. And you cannot assign same name(case insensitive) to two worksheets.
    /// For example, you cannot set "SheetName1" to the first worksheet and set "SHEETNAME1" to the second worksheet.</remarks>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets or sets the name of the worksheet.
    /// </summary>
    /// <remarks>The max length of sheet name is 31. And you cannot assign same name(case insensitive) to two worksheets.
    /// For example, you cannot set "SheetName1" to the first worksheet and set "SHEETNAME1" to the second worksheet.</remarks>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets or sets the name of the worksheet.
    /// </summary>
    /// <remarks>The max length of sheet name is 31. And you cannot assign same name(case insensitive) to two worksheets.
    /// For example, you cannot set "SheetName1" to the first worksheet and set "SHEETNAME1" to the second worksheet.</remarks>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Indicates whether to show formulas or their results.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowFormulas();
    /// <summary>
    /// Indicates whether to show formulas or their results.
    /// </summary>
    ASPOSE_CELLS_API void SetShowFormulas(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether the gridlines are visible.Default is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsGridlinesVisible();
    /// <summary>
    /// Gets or sets a value indicating whether the gridlines are visible.Default is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsGridlinesVisible(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether the worksheet will display row and column headers.
    /// Default is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsRowColumnHeadersVisible();
    /// <summary>
    /// Gets or sets a value indicating whether the worksheet will display row and column headers.
    /// Default is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsRowColumnHeadersVisible(bool value);
    /// <summary>
    /// Indicates whether the pane has horizontal or vertical splits, and whether those splits are frozen.
    /// </summary>
    ASPOSE_CELLS_API PaneStateType GetPaneState();
    /// <summary>
    /// True if zero values are displayed.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayZeros();
    /// <summary>
    /// True if zero values are displayed.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayZeros(bool value);
    /// <summary>
    /// Indicates if the specified worksheet is displayed from right to left instead of from left to right.
    /// Default is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayRightToLeft();
    /// <summary>
    /// Indicates if the specified worksheet is displayed from right to left instead of from left to right.
    /// Default is false.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayRightToLeft(bool value);
    /// <summary>
    /// Indicates whether to show outline.
    /// </summary>
    ASPOSE_CELLS_API bool IsOutlineShown();
    /// <summary>
    /// Indicates whether to show outline.
    /// </summary>
    ASPOSE_CELLS_API void SetIsOutlineShown(bool value);
    /// <summary>
    /// Indicates whether this worksheet is selected when the workbook is opened.
    /// </summary>
    ASPOSE_CELLS_API bool IsSelected();
    /// <summary>
    /// Indicates whether this worksheet is selected when the workbook is opened.
    /// </summary>
    ASPOSE_CELLS_API void SetIsSelected(bool value);
    /// <summary>
    /// Freezes panes at the specified cell in the worksheet.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="column">Column index.</param>
    /// <param name="freezedRows">Number of visible rows in top pane, no more than row index.</param>
    /// <param name="freezedColumns">Number of visible columns in left pane, no more than column index.</param>
    /// <remarks><p>Row index and column index cannot all be zero. Number of rows and number of columns
    /// also cannot all be zero.</p>
    /// <p>The first two parameters specify the froze position and the last two parameters specify the area frozen on the left top pane.</p></remarks>
    ASPOSE_CELLS_API void FreezePanes(int32_t row, int32_t column, int32_t freezedRows, int32_t freezedColumns);
    /// <summary>
    /// Gets the freeze panes.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="column">Column index.</param>
    /// <param name="freezedRows">Number of visible rows in top pane, no more than row index.</param>
    /// <param name="freezedColumns">Number of visible columns in left pane, no more than column index.</param>
    /// <returns>Return whether the worksheet is frozen</returns>
    ASPOSE_CELLS_API bool GetFreezedPanes(int32_t& row, int32_t& column, int32_t& freezedRows, int32_t& freezedColumns);
    /// <summary>
    /// Splits window.
    /// </summary>
    ASPOSE_CELLS_API void Split();
    /// <summary>
    /// Freezes panes at the specified cell in the worksheet.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <param name="freezedRows">Number of visible rows in top pane, no more than row index.</param>
    /// <param name="freezedColumns">Number of visible columns in left pane, no more than column index.</param>
    /// <remarks>Row index and column index cannot all be zero. Number of rows and number of columns
    /// also cannot all be zero.</remarks>
    ASPOSE_CELLS_API void FreezePanes(const U16String& cellName, int32_t freezedRows, int32_t freezedColumns);
    /// <summary>
    /// Freezes panes at the specified cell in the worksheet.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <param name="freezedRows">Number of visible rows in top pane, no more than row index.</param>
    /// <param name="freezedColumns">Number of visible columns in left pane, no more than column index.</param>
    /// <remarks>Row index and column index cannot all be zero. Number of rows and number of columns
    /// also cannot all be zero.</remarks>
    ASPOSE_CELLS_API void FreezePanes(const char16_t* cellName, int32_t freezedRows, int32_t freezedColumns);
    /// <summary>
    /// Unfreezes panes in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API void UnFreezePanes();
    /// <summary>
    /// Removes split window.
    /// </summary>
    ASPOSE_CELLS_API void RemoveSplit();
    /// <summary>
    /// Gets all ListObjects in this worksheet.
    /// </summary>
    ASPOSE_CELLS_API ListObjectCollection GetListObjects();
    /// <summary>
    /// Specifies the internal identifier for the sheet.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTabId();
    /// <summary>
    /// Specifies the internal identifier for the sheet.
    /// </summary>
    ASPOSE_CELLS_API void SetTabId(int32_t value);
    /// <summary>
    /// Gets the <see cref="HorizontalPageBreakCollection"/> collection.
    /// </summary>
    ASPOSE_CELLS_API HorizontalPageBreakCollection GetHorizontalPageBreaks();
    /// <summary>
    /// Gets the <see cref="VerticalPageBreakCollection"/> collection.
    /// </summary>
    ASPOSE_CELLS_API VerticalPageBreakCollection GetVerticalPageBreaks();
    /// <summary>
    /// Adds page break.
    /// </summary>
    /// <param name="cellName"></param>
    ASPOSE_CELLS_API void AddPageBreaks(const U16String& cellName);
    /// <summary>
    /// Adds page break.
    /// </summary>
    /// <param name="cellName"></param>
    ASPOSE_CELLS_API void AddPageBreaks(const char16_t* cellName);
    /// <summary>
    /// Gets the <see cref="HyperlinkCollection"/> collection.
    /// </summary>
    ASPOSE_CELLS_API HyperlinkCollection GetHyperlinks();
    /// <summary>
    /// Copies contents and formats from another worksheet.
    /// </summary>
    /// <param name="sourceSheet">Source worksheet.</param>
    ASPOSE_CELLS_API void Copy(const Worksheet& sourceSheet);
    /// <summary>
    /// Copies contents and formats from another worksheet.
    /// </summary>
    /// <param name="sourceSheet">Source worksheet.</param>
    /// <param name="copyOptions"></param>
    /// <remarks>You can copy data from another worksheet in the same file or another file. However, this method does not support to copy drawing objects, such as comments, images and charts.</remarks>
    ASPOSE_CELLS_API void Copy(const Worksheet& sourceSheet, const CopyOptions& copyOptions);
    /// <summary>
    /// Autofits the column width.
    /// </summary>
    /// <param name="columnIndex">Column index.</param>
    /// <param name="firstRow">First row index.</param>
    /// <param name="lastRow">Last row index.</param>
    /// <remarks>This method autofits a row based on content in a range of cells within the row.
    /// </remarks>
    ASPOSE_CELLS_API void AutoFitColumn(int32_t columnIndex, int32_t firstRow, int32_t lastRow);
    /// <summary>
    /// Autofits all columns in this worksheet.
    /// </summary>
    ASPOSE_CELLS_API void AutoFitColumns();
    /// <summary>
    /// Autofits all columns in this worksheet.
    /// </summary>
    /// <param name="options">The auto fitting options
    /// </param>
    ASPOSE_CELLS_API void AutoFitColumns(const AutoFitterOptions& options);
    /// <summary>
    /// Autofits the column width.
    /// </summary>
    /// <param name="columnIndex">Column index.</param>
    /// <remarks>AutoFitColumn is an imprecise function.</remarks>
    ASPOSE_CELLS_API void AutoFitColumn(int32_t columnIndex);
    /// <summary>
    /// Autofits the columns width.
    /// </summary>
    /// <param name="firstColumn">First column index.</param>
    /// <param name="lastColumn">Last column index.</param>
    /// <remarks>AutoFitColumn is an imprecise function.</remarks>
    ASPOSE_CELLS_API void AutoFitColumns(int32_t firstColumn, int32_t lastColumn);
    /// <summary>
    /// Autofits the columns width.
    /// </summary>
    /// <param name="firstColumn">First column index.</param>
    /// <param name="lastColumn">Last column index.</param>
    /// <param name="options">The auto fitting options</param>
    /// <remarks>AutoFitColumn is an imprecise function.</remarks>
    ASPOSE_CELLS_API void AutoFitColumns(int32_t firstColumn, int32_t lastColumn, const AutoFitterOptions& options);
    /// <summary>
    /// Autofits the columns width.
    /// </summary>
    /// <param name="firstRow">First row index.</param>
    /// <param name="firstColumn">First column index.</param>
    /// <param name="lastRow">Last row index.</param>
    /// <param name="lastColumn">Last column index.</param>
    /// <remarks>AutoFitColumn is an imprecise function.</remarks>
    ASPOSE_CELLS_API void AutoFitColumns(int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn);
    /// <summary>
    /// Autofits the columns width.
    /// </summary>
    /// <param name="firstRow">First row index.</param>
    /// <param name="firstColumn">First column index.</param>
    /// <param name="lastRow">Last row index.</param>
    /// <param name="lastColumn">Last column index.</param>
    /// <param name="options">The auto fitting options</param>
    /// <remarks>AutoFitColumn is an imprecise function.</remarks>
    ASPOSE_CELLS_API void AutoFitColumns(int32_t firstRow, int32_t firstColumn, int32_t lastRow, int32_t lastColumn, const AutoFitterOptions& options);
    /// <summary>
    /// Autofits the row height.
    /// </summary>
    /// <param name="rowIndex">Row index.</param>
    /// <param name="firstColumn">First column index.</param>
    /// <param name="lastColumn">Last column index.</param>
    /// <remarks>This method autofits a row based on content in a range of cells within the row.
    /// </remarks>
    ASPOSE_CELLS_API void AutoFitRow(int32_t rowIndex, int32_t firstColumn, int32_t lastColumn);
    /// <summary>
    /// Autofits the row height.
    /// </summary>
    /// <param name="rowIndex">Row index.</param>
    /// <param name="firstColumn">First column index.</param>
    /// <param name="lastColumn">Last column index.</param>
    /// <param name="options">The auto fitter options</param>
    /// <remarks>This method autofits a row based on content in a range of cells within the row.
    /// </remarks>
    ASPOSE_CELLS_API void AutoFitRow(int32_t rowIndex, int32_t firstColumn, int32_t lastColumn, const AutoFitterOptions& options);
    /// <summary>
    /// Autofits all rows in this worksheet.
    /// </summary>
    ASPOSE_CELLS_API void AutoFitRows();
    /// <summary>
    /// Autofits all rows in this worksheet.
    /// </summary>
    /// <param name="onlyAuto">
    /// True,only autofits the row height when row height is not customed.
    /// </param>
    ASPOSE_CELLS_API void AutoFitRows(bool onlyAuto);
    /// <summary>
    /// Autofits all rows in this worksheet.
    /// </summary>
    /// <param name="options">The auto fitter options</param>
    ASPOSE_CELLS_API void AutoFitRows(const AutoFitterOptions& options);
    /// <summary>
    /// Autofits row height in a range.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="endRow">End row index.</param>
    ASPOSE_CELLS_API void AutoFitRows(int32_t startRow, int32_t endRow);
    /// <summary>
    /// Autofits row height in a range.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="endRow">End row index.</param>
    /// <param name="options">The options of auto fitter.</param>
    ASPOSE_CELLS_API void AutoFitRows(int32_t startRow, int32_t endRow, const AutoFitterOptions& options);
    /// <summary>
    /// Autofits row height in a rectangle range.
    /// </summary>
    /// <param name="startRow">Start row index.</param>
    /// <param name="endRow">End row index.</param>
    /// <param name="startColumn">Start column index.</param>
    /// <param name="endColumn">End column index.</param>
    ASPOSE_CELLS_API void AutoFitRow(int32_t startRow, int32_t endRow, int32_t startColumn, int32_t endColumn);
    /// <summary>
    /// Autofits the row height.
    /// </summary>
    /// <param name="rowIndex">Row index.</param>
    /// <remarks>AutoFitRow is an imprecise function.</remarks>
    ASPOSE_CELLS_API void AutoFitRow(int32_t rowIndex);
    /// <summary>
    /// Represents the page setup description in this sheet.
    /// </summary>
    ASPOSE_CELLS_API PageSetup GetPageSetup();
    /// <summary>
    /// Represents auto filter for the specified worksheet.
    /// </summary>
    ASPOSE_CELLS_API AutoFilter GetAutoFilter();
    /// <summary>
    /// Filters data using complex criteria.
    /// </summary>
    /// <param name="isFilter">Indicates whether filtering the list in place.</param>
    /// <param name="listRange">The list range.</param>
    /// <param name="criteriaRange">The criteria range.</param>
    /// <param name="copyTo">The range where copying data to. </param>
    /// <param name="uniqueRecordOnly">Only displaying or copying unique rows.</param>
    ASPOSE_CELLS_API void Advanced_Filter(bool isFilter, const U16String& listRange, const U16String& criteriaRange, const U16String& copyTo, bool uniqueRecordOnly);
    /// <summary>
    /// Filters data using complex criteria.
    /// </summary>
    /// <param name="isFilter">Indicates whether filtering the list in place.</param>
    /// <param name="listRange">The list range.</param>
    /// <param name="criteriaRange">The criteria range.</param>
    /// <param name="copyTo">The range where copying data to. </param>
    /// <param name="uniqueRecordOnly">Only displaying or copying unique rows.</param>
    ASPOSE_CELLS_API void Advanced_Filter(bool isFilter, const char16_t* listRange, const char16_t* criteriaRange, const char16_t* copyTo, bool uniqueRecordOnly);
    /// <summary>
    /// Removes the auto filter of the worksheet.
    /// </summary>
    ASPOSE_CELLS_API void RemoveAutoFilter();
    /// <summary>
    /// Indicates whether this worksheet has auto filter.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasAutofilter();
    /// <summary>
    /// Indicates whether the Transition Formula Evaluation (Lotus compatibility) option is enabled.
    /// </summary>
    ASPOSE_CELLS_API bool GetTransitionEvaluation();
    /// <summary>
    /// Indicates whether the Transition Formula Evaluation (Lotus compatibility) option is enabled.
    /// </summary>
    ASPOSE_CELLS_API void SetTransitionEvaluation(bool value);
    /// <summary>
    /// Indicates whether the Transition Formula Entry (Lotus compatibility) option is enabled.
    /// </summary>
    ASPOSE_CELLS_API bool GetTransitionEntry();
    /// <summary>
    /// Indicates whether the Transition Formula Entry (Lotus compatibility) option is enabled.
    /// </summary>
    ASPOSE_CELLS_API void SetTransitionEntry(bool value);
    /// <summary>
    /// Indicates the visible state for this sheet.
    /// </summary>
    ASPOSE_CELLS_API VisibilityType GetVisibilityType();
    /// <summary>
    /// Indicates the visible state for this sheet.
    /// </summary>
    ASPOSE_CELLS_API void SetVisibilityType(VisibilityType value);
    /// <summary>
    /// Sets the visible options.
    /// </summary>
    /// <param name="isVisible">Whether the worksheet is visible</param>
    /// <param name="ignoreError">Whether to ignore error if this option is not valid.</param>
    ASPOSE_CELLS_API void SetVisible(bool isVisible, bool ignoreError);
    /// <summary>
    /// Represents if the worksheet is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Represents if the worksheet is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    /// <summary>
    /// Selects a range.
    /// </summary>
    /// <param name="startRow">The start row.
    /// </param>
    /// <param name="startColumn">The start column</param>
    /// <param name="totalRows">The number of rows.</param>
    /// <param name="totalColumns">The number of columns</param>
    /// <param name="removeOthers">True means removing other selected range and only select this range.
    /// </param>
    ASPOSE_CELLS_API void SelectRange(int32_t startRow, int32_t startColumn, int32_t totalRows, int32_t totalColumns, bool removeOthers);
    /// <summary>
    /// Removes all drawing objects in this worksheet.
    /// </summary>
    ASPOSE_CELLS_API void RemoveAllDrawingObjects();
    /// <summary>
    /// Clears all comments in designer spreadsheet.
    /// </summary>
    ASPOSE_CELLS_API void ClearComments();
    /// <summary>
    /// Gets the sparkline groups in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API SparklineGroupCollection GetSparklineGroups();
    /// <summary>
    /// Gets a <see cref="Chart"/> collection
    /// </summary>
    ASPOSE_CELLS_API ChartCollection GetCharts();
    /// <summary>
    /// Gets the <see cref="Comment"/> collection.
    /// </summary>
    ASPOSE_CELLS_API CommentCollection GetComments();
    /// <summary>
    /// Gets a <see cref="Picture"/> collection.
    /// </summary>
    ASPOSE_CELLS_API PictureCollection GetPictures();
    /// <summary>
    /// Gets a <see cref="TextBox"/> collection.
    /// </summary>
    ASPOSE_CELLS_API TextBoxCollection GetTextBoxes();
    /// <summary>
    /// Gets a <see cref="CheckBox"/> collection.
    /// </summary>
    ASPOSE_CELLS_API CheckBoxCollection GetCheckBoxes();
    /// <summary>
    /// Represents a collection of <see cref="OleObject"/> in a worksheet.
    /// </summary>
    ASPOSE_CELLS_API OleObjectCollection GetOleObjects();
    /// <summary>
    /// Returns all drawing shapes in this worksheet.
    /// </summary>
    ASPOSE_CELLS_API ShapeCollection GetShapes();
    /// <summary>
    /// Get the Slicer collection in the worksheet
    /// </summary>
    ASPOSE_CELLS_API SlicerCollection GetSlicers();
    /// <summary>
    /// Get the Timeline collection in the worksheet
    /// </summary>
    ASPOSE_CELLS_API TimelineCollection GetTimelines();
    /// <summary>
    /// Protects worksheet.
    /// </summary>
    /// <param name="type">Protection type.</param>
    /// <remarks>This method protects worksheet without password. It can protect worksheet in all versions of Excel file.
    /// </remarks>
    ASPOSE_CELLS_API void Protect(ProtectionType type);
    /// <summary>
    /// Protects worksheet.
    /// </summary>
    /// <param name="type">Protection type.</param>
    /// <param name="password">Password.</param>
    /// <param name="oldPassword">If the worksheet is already protected by a password, please supply the old password.
    /// Otherwise, you can set a null value or blank string to this parameter.</param>
    /// <remarks>This method can protect worksheet in all versions of Excel file.
    /// </remarks>
    ASPOSE_CELLS_API void Protect(ProtectionType type, const U16String& password, const U16String& oldPassword);
    /// <summary>
    /// Protects worksheet.
    /// </summary>
    /// <param name="type">Protection type.</param>
    /// <param name="password">Password.</param>
    /// <param name="oldPassword">If the worksheet is already protected by a password, please supply the old password.
    /// Otherwise, you can set a null value or blank string to this parameter.</param>
    /// <remarks>This method can protect worksheet in all versions of Excel file.
    /// </remarks>
    ASPOSE_CELLS_API void Protect(ProtectionType type, const char16_t* password, const char16_t* oldPassword);
    /// <summary>
    /// Unprotects worksheet.
    /// </summary>
    /// <remarks> This method unprotects worksheet which is protected without password.
    /// </remarks>
    ASPOSE_CELLS_API void Unprotect();
    /// <summary>
    /// Unprotects worksheet.
    /// </summary>
    /// <param name="password">Password</param>
    /// <remarks>If the worksheet is protected without a password, you can set a null value or blank string to password parameter.
    /// </remarks>
    ASPOSE_CELLS_API void Unprotect(const U16String& password);
    /// <summary>
    /// Unprotects worksheet.
    /// </summary>
    /// <param name="password">Password</param>
    /// <remarks>If the worksheet is protected without a password, you can set a null value or blank string to password parameter.
    /// </remarks>
    ASPOSE_CELLS_API void Unprotect(const char16_t* password);
    /// <summary>
    /// Gets the index of sheet in the worksheet collection.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetIndex();
    /// <summary>
    /// Moves the sheet to another location in the spreadsheet.
    /// </summary>
    /// <param name="index">Destination sheet index.</param>
    ASPOSE_CELLS_API void MoveTo(int32_t index);
    /// <summary>
    /// Indicates if the worksheet is protected.
    /// </summary>
    ASPOSE_CELLS_API bool IsProtected();
    /// <summary>
    /// Gets the data validation setting collection in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API ValidationCollection GetValidations();
    /// <summary>
    /// Gets the allow edit range collection in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API ProtectedRangeCollection GetAllowEditRanges();
    /// <summary>
    /// Gets error check setting applied on certain ranges.
    /// </summary>
    ASPOSE_CELLS_API ErrorCheckOptionCollection GetErrorCheckOptions();
    /// <summary>
    /// Gets the outline on this worksheet.
    /// </summary>
    ASPOSE_CELLS_API Outline GetOutline();
    /// <summary>
    /// Represents first visible row index.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFirstVisibleRow();
    /// <summary>
    /// Represents first visible row index.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstVisibleRow(int32_t value);
    /// <summary>
    /// Represents first visible column index.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFirstVisibleColumn();
    /// <summary>
    /// Represents first visible column index.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstVisibleColumn(int32_t value);
    /// <summary>
    /// Replaces all cells' text with a new string.
    /// </summary>
    /// <param name="oldString">Old string value.</param>
    /// <param name="newString">New string value.</param>
    ASPOSE_CELLS_API int32_t Replace(const U16String& oldString, const U16String& newString);
    /// <summary>
    /// Replaces all cells' text with a new string.
    /// </summary>
    /// <param name="oldString">Old string value.</param>
    /// <param name="newString">New string value.</param>
    ASPOSE_CELLS_API int32_t Replace(const char16_t* oldString, const char16_t* newString);
    /// <summary>
    /// Represents the scaling factor in percentage. It should be between 10 and 400.
    /// </summary>
    /// <remarks>Please set the view type first.</remarks>
    ASPOSE_CELLS_API int32_t GetZoom();
    /// <summary>
    /// Represents the scaling factor in percentage. It should be between 10 and 400.
    /// </summary>
    /// <remarks>Please set the view type first.</remarks>
    ASPOSE_CELLS_API void SetZoom(int32_t value);
    /// <summary>
    /// Gets and sets the view type.
    /// </summary>
    ASPOSE_CELLS_API ViewType GetViewType();
    /// <summary>
    /// Gets and sets the view type.
    /// </summary>
    ASPOSE_CELLS_API void SetViewType(ViewType value);
    /// <summary>
    /// Indicates whether the specified worksheet is shown in normal view or page break preview.
    /// </summary>
    ASPOSE_CELLS_API bool IsPageBreakPreview();
    /// <summary>
    /// Indicates whether the specified worksheet is shown in normal view or page break preview.
    /// </summary>
    ASPOSE_CELLS_API void SetIsPageBreakPreview(bool value);
    /// <summary>
    /// Indicates whether the ruler is visible. This property is only applied for page break preview.
    /// </summary>
    ASPOSE_CELLS_API bool IsRulerVisible();
    /// <summary>
    /// Indicates whether the ruler is visible. This property is only applied for page break preview.
    /// </summary>
    ASPOSE_CELLS_API void SetIsRulerVisible(bool value);
    /// <summary>
    /// Represents worksheet tab color.
    /// </summary>
    /// <remarks>This feature is only supported in ExcelXP(Excel2002) and later versions.
    /// If you save file as Excel97 or Excel2000 format, it will be omitted.</remarks>
    ASPOSE_CELLS_API Aspose::Cells::Color GetTabColor();
    /// <summary>
    /// Represents worksheet tab color.
    /// </summary>
    /// <remarks>This feature is only supported in ExcelXP(Excel2002) and later versions.
    /// If you save file as Excel97 or Excel2000 format, it will be omitted.</remarks>
    ASPOSE_CELLS_API void SetTabColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets worksheet code name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetCodeName();
    /// <summary>
    /// Gets worksheet code name.
    /// </summary>
    ASPOSE_CELLS_API void SetCodeName(const U16String& value);
    /// <summary>
    /// Gets worksheet code name.
    /// </summary>
    ASPOSE_CELLS_API void SetCodeName(const char16_t* value);
    /// <summary>
    /// Gets and sets worksheet background image.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetBackgroundImage();
    /// <summary>
    /// Gets and sets worksheet background image.
    /// </summary>
    ASPOSE_CELLS_API void SetBackgroundImage(const Vector<uint8_t>& value);
    /// <summary>
    /// Gets the ConditionalFormattings in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API ConditionalFormattingCollection GetConditionalFormattings();
    /// <summary>
    /// Gets or sets the active cell in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API U16String GetActiveCell();
    /// <summary>
    /// Gets or sets the active cell in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetActiveCell(const U16String& value);
    /// <summary>
    /// Gets or sets the active cell in the worksheet.
    /// </summary>
    ASPOSE_CELLS_API void SetActiveCell(const char16_t* value);
    /// <summary>
    /// Gets an object representing
    /// the identifier information associated with a worksheet.
    /// </summary>
    /// <remarks>
    /// Worksheet.CustomProperties provide a preferred mechanism for storing arbitrary data.
    /// It supports legacy third-party document components, as well as those situations that have a stringent need for binary parts.
    /// </remarks>
    ASPOSE_CELLS_API CustomPropertyCollection GetCustomProperties();
    /// <summary>
    /// Gets automatic page breaks.
    /// </summary>
    /// <param name="options">The print options</param>
    /// <returns>The automatic page breaks areas.</returns>
    /// <remarks>
    /// Each cell area represents a paper.
    /// </remarks>
    ASPOSE_CELLS_API Vector<CellArea> GetPrintingPageBreaks(const ImageOrPrintOptions& options);
    /// <summary>
    /// Gets all <see cref="SmartTagCollection"/> objects of the worksheet.
    /// </summary>
    ASPOSE_CELLS_API SmartTagSetting GetSmartTagSetting();
    /// <summary>
    /// Returns a string represents the current Worksheet object.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String ToString();
    /// <summary>
    /// Gets the collection of <see cref="Scenario"/>.
    /// </summary>
    ASPOSE_CELLS_API ScenarioCollection GetScenarios();
    /// <summary>
    /// Starts the session that uses caches to access the data in this worksheet.
    /// </summary>
    /// <param name="opts">options of data access</param>
    /// <remarks>
    /// After finishing the access to the data, <see cref="CloseAccessCache(AccessCacheOptions)"/> should
    /// be invoked with same options to clear all caches and recover normal access mode.
    /// </remarks>
    ASPOSE_CELLS_API void StartAccessCache(AccessCacheOptions opts);
    /// <summary>
    /// Closes the session that uses caches to access the data in this worksheet.
    /// </summary>
    /// <param name="opts">options of data access</param>
    ASPOSE_CELLS_API void CloseAccessCache(AccessCacheOptions opts);
    /// <summary>
    /// Converts the formula reference style.
    /// </summary>
    /// <param name="formula">The formula to be converted.</param>
    /// <param name="toR1C1">Which reference style to convert the formula to.
    /// If the original formula is of A1 reference style,
    /// then this value should be true so the formula will be converted from A1 to R1C1 reference style;
    /// If the original formula is of R1C1 reference style,
    /// then this value should be false so the formula will be converted from R1C1 to A1 reference style;
    /// </param>
    /// <param name="baseCellRow">The row index of the base cell.</param>
    /// <param name="baseCellColumn">The column index of the base cell.</param>
    /// <returns>The converted formula.</returns>
    ASPOSE_CELLS_API U16String ConvertFormulaReferenceStyle(const U16String& formula, bool toR1C1, int32_t baseCellRow, int32_t baseCellColumn);
    /// <summary>
    /// Converts the formula reference style.
    /// </summary>
    /// <param name="formula">The formula to be converted.</param>
    /// <param name="toR1C1">Which reference style to convert the formula to.
    /// If the original formula is of A1 reference style,
    /// then this value should be true so the formula will be converted from A1 to R1C1 reference style;
    /// If the original formula is of R1C1 reference style,
    /// then this value should be false so the formula will be converted from R1C1 to A1 reference style;
    /// </param>
    /// <param name="baseCellRow">The row index of the base cell.</param>
    /// <param name="baseCellColumn">The column index of the base cell.</param>
    /// <returns>The converted formula.</returns>
    ASPOSE_CELLS_API U16String ConvertFormulaReferenceStyle(const char16_t* formula, bool toR1C1, int32_t baseCellRow, int32_t baseCellColumn);
    /// <summary>
    /// Calculates all formulas in this worksheet.
    /// </summary>
    /// <param name="options">Options for calculation</param>
    /// <param name="recursive">True means if the worksheet' cells depend on the cells of other worksheets,
    /// the dependent cells in other worksheets will be calculated too.
    /// False means all the formulas in the worksheet have been calculated and the values are right.</param>
    ASPOSE_CELLS_API void CalculateFormula(const CalculationOptions& options, bool recursive);
    /// <summary>
    /// Gets collection of cells on this worksheet being watched in the 'watch window'.
    /// </summary>
    ASPOSE_CELLS_API CellWatchCollection GetCellWatches();
    /// <summary>
    /// Refreshes all the PivotTables in this Worksheet.
    /// </summary>
    ASPOSE_CELLS_API void RefreshPivotTables();
    
};

} }

#endif
