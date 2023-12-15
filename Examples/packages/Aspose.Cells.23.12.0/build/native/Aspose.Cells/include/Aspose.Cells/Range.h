// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RANGE_H
#define ASPOSE_CELLS_RANGE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Enumerator.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/AutoFillType.h"
#include "Aspose.Cells/BorderType.h"
#include "Aspose.Cells/CellBorderType.h"

namespace Aspose { namespace Cells {
    class Hyperlink;
    class Cell;
    class Style;
    class StyleFlag;
    class CellsColor;
    class PasteOptions;
    class Worksheet;
} }

namespace Aspose { namespace Cells {

class Range_Impl;

/// <summary>
/// Encapsulates the object that represents a range of cells within a spreadsheet.
/// </summary>
/// <remarks>
/// The Range class denotes a region of Excel spreadsheet.
/// With this, you can format and set value of the range.
/// And you can simply copy range of Excel too.
/// </remarks>
class ASPOSE_CELLS_API2 Range {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Range_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Range(Range_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Range(const Range& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Range();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Range& operator=(const Range& src);
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
    /// Automaticall fill the target range.
    /// </summary>
    /// <param name="target">the target range.</param>
    ASPOSE_CELLS_API void AutoFill(const Range& target);
    /// <summary>
    /// Automaticall fill the target range.
    /// </summary>
    /// <param name="target">The targed range.</param>
    /// <param name="autoFillType">The auto fill type.</param>
    ASPOSE_CELLS_API void AutoFill(const Range& target, AutoFillType autoFillType);
    /// <summary>
    /// Returns a Range object that represents the current region.
    /// The current region is a range bounded by any combination of blank rows and blank columns.
    /// </summary>
    ASPOSE_CELLS_API Range GetCurrentRegion();
    /// <summary>
    /// Gets all hyperlink in the range.
    /// </summary>
    ASPOSE_CELLS_API Vector<Hyperlink> GetHyperlinks();
    /// <summary>
    /// Adds a hyperlink to a specified cell or a range of cells.
    /// </summary>
    /// <param name="address">Address of the hyperlink.</param>
    /// <param name="textToDisplay">The text to be displayed for the specified hyperlink.</param>
    /// <param name="screenTip">The screenTip text for the specified hyperlink.</param>
    /// <returns><see cref="Hyperlink"/> object.</returns>
    ASPOSE_CELLS_API Hyperlink AddHyperlink(const U16String& address, const U16String& textToDisplay, const U16String& screenTip);
    /// <summary>
    /// Adds a hyperlink to a specified cell or a range of cells.
    /// </summary>
    /// <param name="address">Address of the hyperlink.</param>
    /// <param name="textToDisplay">The text to be displayed for the specified hyperlink.</param>
    /// <param name="screenTip">The screenTip text for the specified hyperlink.</param>
    /// <returns><see cref="Hyperlink"/> object.</returns>
    ASPOSE_CELLS_API Hyperlink AddHyperlink(const char16_t* address, const char16_t* textToDisplay, const char16_t* screenTip);
    /// <summary>
    /// Gets the enumerator for cells in this Range.
    /// </summary>
    /// <returns>The cells enumerator</returns>
    /// <remarks>When traversing elements by the returned Enumerator, the cells collection
    /// should not be modified(such as operations that will cause new Cell/Row be instantiated or existing Cell/Row be deleted).
    /// Otherwise the enumerator may not be able to traverse all cells correctly(some elements may be traversed repeatedly or skipped).</remarks>
    ASPOSE_CELLS_API Enumerator<Cell> GetEnumerator();
    /// <summary>
    /// Indicates whether the range is intersect.
    /// </summary>
    /// <param name="range">The range.</param>
    /// <returns> Whether the range is intersect.</returns>
    /// <remarks>If the two ranges area not in the same worksheet ,return false.</remarks>
    ASPOSE_CELLS_API bool IsIntersect(const Range& range);
    /// <summary>
    /// Returns a <see cref="Range"/> object that represents the rectangular intersection of two ranges.
    /// </summary>
    /// <param name="range">The intersecting range.</param>
    /// <returns>Returns a <see cref="Range"/> object</returns>
    /// <remarks>If the two ranges are not intersected, returns null.</remarks>
    ASPOSE_CELLS_API Range Intersect(const Range& range);
    /// <summary>
    /// Returns the union result of two ranges.
    /// </summary>
    /// <param name="range">The range</param>
    /// <returns>The union of two ranges.
    /// </returns>
    ASPOSE_CELLS_API Vector<Range> UnionRang(const Range& range);
    /// <summary>
    /// Gets the count of rows in the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRowCount();
    /// <summary>
    /// Gets the count of columns in the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumnCount();
    /// <summary>
    /// Gets or sets the name of the range.
    /// </summary>
    /// <remarks>Named range is supported. For example,
    /// <p>range.Name = "Sheet1!MyRange";</p>
    /// </remarks>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets or sets the name of the range.
    /// </summary>
    /// <remarks>Named range is supported. For example,
    /// <p>range.Name = "Sheet1!MyRange";</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets or sets the name of the range.
    /// </summary>
    /// <remarks>Named range is supported. For example,
    /// <p>range.Name = "Sheet1!MyRange";</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets the range's refers to.
    /// </summary>
    ASPOSE_CELLS_API U16String GetRefersTo();
    /// <summary>
    /// Gets address of the range.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAddress();
    /// <summary>
    /// Indicates whether the range contains values.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API bool IsBlank();
    /// <summary>
    /// Gets the distance, in points, from the left edge of column A to the left edge of the range.
    /// </summary>
    ASPOSE_CELLS_API double GetLeft();
    /// <summary>
    /// Gets the distance, in points, from the top edge of row 1 to the top edge of the range.
    /// </summary>
    ASPOSE_CELLS_API double GetTop();
    /// <summary>
    /// Gets the width of a range in points.
    /// </summary>
    ASPOSE_CELLS_API double GetWidth();
    /// <summary>
    /// Gets the width of a range in points.
    /// </summary>
    ASPOSE_CELLS_API double GetHeight();
    /// <summary>
    /// Gets the index of the first row of the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFirstRow();
    /// <summary>
    /// Gets the index of the first column of the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFirstColumn();
    /// <summary>
    /// Combines a range of cells into a single cell.
    /// </summary>
    /// <remarks>
    /// Reference the merged cell via the address of the upper-left cell in the range.
    /// </remarks>
    ASPOSE_CELLS_API void Merge();
    /// <summary>
    /// Unmerges merged cells of this range.
    /// </summary>
    ASPOSE_CELLS_API void UnMerge();
    /// <summary>
    /// Puts a value into the range, if appropriate the value will be converted to other data type and cell's number format will be reset.
    /// </summary>
    /// <param name="stringValue">Input value</param>
    /// <param name="isConverted">True: converted to other data type if appropriate.</param>
    /// <param name="setStyle">True: set the number format to cell's style when converting to other data type</param>
    ASPOSE_CELLS_API void PutValue(const U16String& stringValue, bool isConverted, bool setStyle);
    /// <summary>
    /// Puts a value into the range, if appropriate the value will be converted to other data type and cell's number format will be reset.
    /// </summary>
    /// <param name="stringValue">Input value</param>
    /// <param name="isConverted">True: converted to other data type if appropriate.</param>
    /// <param name="setStyle">True: set the number format to cell's style when converting to other data type</param>
    ASPOSE_CELLS_API void PutValue(const char16_t* stringValue, bool isConverted, bool setStyle);
    /// <summary>
    /// Apply the cell style.
    /// </summary>
    /// <param name="style">The cell style.</param>
    /// <param name="explicitFlag">True, only overwriting formatting which is explicitly set.
    /// </param>
    ASPOSE_CELLS_API void SetStyle(const Style& style, bool explicitFlag);
    /// <summary>
    /// Applies formats for a whole range.
    /// </summary>
    /// <param name="style">The style object which will be applied.</param>
    /// <param name="flag">Flags which indicates applied formatting properties.</param>
    /// <remarks>Each cell in this range will contains a <see cref="Style"/> object.
    /// So this is a memory-consuming method. Please use it carefully.</remarks>
    ASPOSE_CELLS_API void ApplyStyle(const Style& style, const StyleFlag& flag);
    /// <summary>
    /// Sets the style of the range.
    /// </summary>
    /// <param name="style">The Style object.</param>
    ASPOSE_CELLS_API void SetStyle(const Style& style);
    /// <summary>
    /// Sets the outline borders around a range of cells with same border style and color.
    /// </summary>
    /// <param name="borderStyle">Border style.</param>
    /// <param name="borderColor">Border color.</param>
    ASPOSE_CELLS_API void SetOutlineBorders(CellBorderType borderStyle, const CellsColor& borderColor);
    /// <summary>
    /// Sets the outline borders around a range of cells with same border style and color.
    /// </summary>
    /// <param name="borderStyle">Border style.</param>
    /// <param name="borderColor">Border color.</param>
    ASPOSE_CELLS_API void SetOutlineBorders(CellBorderType borderStyle, const Aspose::Cells::Color& borderColor);
    /// <summary>
    /// Sets out line borders around a range of cells.
    /// </summary>
    /// <param name="borderStyles">Border styles.</param>
    /// <param name="borderColors">Border colors.</param>
    /// <remarks>
    /// Both the length of borderStyles and borderStyles must be 4.
    /// The order of borderStyles and borderStyles must be top,bottom,left,right
    /// </remarks>
    ASPOSE_CELLS_API void SetOutlineBorders(const Vector<CellBorderType>& borderStyles, const Vector<Aspose::Cells::Color>& borderColors);
    /// <summary>
    /// Sets outline border around a range of cells.
    /// </summary>
    /// <param name="borderEdge">Border edge.</param>
    /// <param name="borderStyle">Border style.</param>
    /// <param name="borderColor">Border color.</param>
    ASPOSE_CELLS_API void SetOutlineBorder(BorderType borderEdge, CellBorderType borderStyle, const CellsColor& borderColor);
    /// <summary>
    /// Sets outline border around a range of cells.
    /// </summary>
    /// <param name="borderEdge">Border edge.</param>
    /// <param name="borderStyle">Border style.</param>
    /// <param name="borderColor">Border color.</param>
    ASPOSE_CELLS_API void SetOutlineBorder(BorderType borderEdge, CellBorderType borderStyle, const Aspose::Cells::Color& borderColor);
    /// <summary>
    /// Set inside borders of the range.
    /// </summary>
    /// <param name="borderEdge">Inside borde type, only can be <see cref="BorderType.Vertical"/> and <see cref="BorderType.Horizontal"/>.</param>
    /// <param name="lineStyle">The border style.</param>
    /// <param name="borderColor">The color of the border.</param>
    ASPOSE_CELLS_API void SetInsideBorders(BorderType borderEdge, CellBorderType lineStyle, const CellsColor& borderColor);
    /// <summary>
    /// Sets or gets the column width of this range
    /// </summary>
    ASPOSE_CELLS_API double GetColumnWidth();
    /// <summary>
    /// Sets or gets the column width of this range
    /// </summary>
    ASPOSE_CELLS_API void SetColumnWidth(double value);
    /// <summary>
    /// Sets or gets the height of rows in this range
    /// </summary>
    ASPOSE_CELLS_API double GetRowHeight();
    /// <summary>
    /// Sets or gets the height of rows in this range
    /// </summary>
    ASPOSE_CELLS_API void SetRowHeight(double value);
    /// <summary>
    /// Move the current range to the dest range.
    /// </summary>
    /// <param name="destRow">The start row of the dest range.</param>
    /// <param name="destColumn">The start column of the dest range.</param>
    ASPOSE_CELLS_API void MoveTo(int32_t destRow, int32_t destColumn);
    /// <summary>
    /// Copies cell data (including formulas) from a source range.
    /// </summary>
    /// <param name="range">Source <see cref="Range"/> object.</param>
    ASPOSE_CELLS_API void CopyData(const Range& range);
    /// <summary>
    /// Copies cell value from a source range.
    /// </summary>
    /// <param name="range">Source <see cref="Range"/> object.</param>
    ASPOSE_CELLS_API void CopyValue(const Range& range);
    /// <summary>
    /// Copies style settings from a source range.
    /// </summary>
    /// <param name="range">Source <see cref="Range"/> object.</param>
    ASPOSE_CELLS_API void CopyStyle(const Range& range);
    /// <summary>
    /// Copying the range with paste special options.
    /// </summary>
    /// <param name="range">The source range.</param>
    /// <param name="options">The paste special options.</param>
    ASPOSE_CELLS_API void Copy(const Range& range, const PasteOptions& options);
    /// <summary>
    /// Copies data (including formulas), formatting, drawing objects etc. from a source range.
    /// </summary>
    /// <param name="range">Source <see cref="Range"/> object.</param>
    ASPOSE_CELLS_API void Copy(const Range& range);
    /// <summary>
    /// Gets <see cref="Cell"/> object in this range.
    /// </summary>
    /// <param name="rowOffset">Row offset in this range, zero based.</param>
    /// <param name="columnOffset">Column offset in this range, zero based.</param>
    /// <returns><see cref="Cell"/> object.</returns>
    ASPOSE_CELLS_API Cell Get(int32_t rowOffset, int32_t columnOffset);
    /// <summary>
    /// Gets <see cref="Cell"/> object or null in this range.
    /// </summary>
    /// <param name="rowOffset">Row offset in this range, zero based.</param>
    /// <param name="columnOffset">Column offset in this range, zero based.</param>
    /// <returns><see cref="Cell"/> object.</returns>
    ASPOSE_CELLS_API Cell GetCellOrNull(int32_t rowOffset, int32_t columnOffset);
    /// <summary>
    /// Gets <see cref="Range"/> range by offset.
    /// </summary>
    /// <param name="rowOffset">Row offset in this range, zero based.</param>
    /// <param name="columnOffset">Column offset in this range, zero based.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Range GetOffset(int32_t rowOffset, int32_t columnOffset);
    /// <summary>
    /// Gets a Range object that represents the entire column (or columns) that contains the specified range.
    /// </summary>
    ASPOSE_CELLS_API Range GetEntireColumn();
    /// <summary>
    /// Gets a Range object that represents the entire row (or rows) that contains the specified range.
    /// </summary>
    ASPOSE_CELLS_API Range GetEntireRow();
    /// <summary>
    /// Gets the <see cref="Worksheet"/>object which contains this range.
    /// </summary>
    ASPOSE_CELLS_API Worksheet GetWorksheet();
    /// <summary>
    /// Returns a string represents the current Range object.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String ToString();
    
};

} }

#endif
