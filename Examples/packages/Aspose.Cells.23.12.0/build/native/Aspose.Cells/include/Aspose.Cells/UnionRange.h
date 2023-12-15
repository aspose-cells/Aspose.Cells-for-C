// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_UNIONRANGE_H
#define ASPOSE_CELLS_UNIONRANGE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/Enumerator.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/CellBorderType.h"

namespace Aspose { namespace Cells {
    class Hyperlink;
    class Style;
    class StyleFlag;
    class PasteOptions;
    class Cell;
    class Range;
} }

namespace Aspose { namespace Cells {

class UnionRange_Impl;

/// <summary>
/// Represents union range.
/// </summary>
class UnionRange {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    UnionRange_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API UnionRange(UnionRange_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API UnionRange(const UnionRange& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~UnionRange();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API UnionRange& operator=(const UnionRange& src);
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
    /// Gets the index of the first row of the range.
    /// </summary>
    /// <remarks>
    /// Only effects when it only contains one range.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetFirstRow();
    /// <summary>
    /// Gets the index of the first column of the range.
    /// </summary>
    /// <remarks>
    /// Only effects when it only contains one range.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetFirstColumn();
    /// <summary>
    /// Gets the count of rows in the range.
    /// </summary>
    /// <remarks>
    /// Only effects when it only contains one range.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetRowCount();
    /// <summary>
    /// Gets the count of rows in the range.
    /// </summary>
    /// <remarks>
    /// Only effects when it only contains one range.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetColumnCount();
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
    /// Indicates whether this has range.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasRange();
    /// <summary>
    /// Gets all hyperlink in the range.
    /// </summary>
    ASPOSE_CELLS_API Vector<Hyperlink> GetHyperlinks();
    /// <summary>
    /// Sets the style of the range.
    /// </summary>
    /// <param name="style">The Style object.</param>
    ASPOSE_CELLS_API void SetStyle(const Style& style);
    /// <summary>
    /// Applies formats for a whole range.
    /// </summary>
    /// <param name="style">The style object which will be applied.</param>
    /// <param name="flag">Flags which indicates applied formatting properties.</param>
    /// <remarks>Each cell in this range will contains a <see cref="Style"/> object.
    /// So this is a memory-consuming method. Please use it carefully.</remarks>
    ASPOSE_CELLS_API void ApplyStyle(const Style& style, const StyleFlag& flag);
    /// <summary>
    /// Copying the range with paste special options.
    /// </summary>
    /// <param name="range">The source range.</param>
    /// <param name="options">The paste special options.</param>
    ASPOSE_CELLS_API void Copy(const UnionRange& range, const PasteOptions& options);
    /// <summary>
    /// Gets the enumerator for cells in this Range.
    /// </summary>
    /// <returns>The cells enumerator</returns>
    /// <remarks>When traversing elements by the returned Enumerator, the cells collection
    /// should not be modified(such as operations that will cause new Cell/Row be instantiated or existing Cell/Row be deleted).
    /// Otherwise the enumerator may not be able to traverse all cells correctly(some elements may be traversed repeatedly or skipped).</remarks>
    ASPOSE_CELLS_API Enumerator<Cell> GetEnumerator();
    /// <summary>
    /// Gets all cell count in the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCellCount();
    /// <summary>
    /// Gets the count of the ranges.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRangeCount();
    /// <summary>
    /// Gets all union ranges.
    /// </summary>
    ASPOSE_CELLS_API Vector<Range> GetRanges();
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
    /// Sets the outline borders around a range of cells with same border style and color.
    /// </summary>
    /// <param name="borderStyle">Border style.</param>
    /// <param name="borderColor">Border color.</param>
    ASPOSE_CELLS_API void SetOutlineBorders(CellBorderType borderStyle, const Aspose::Cells::Color& borderColor);
    /// <summary>
    /// Intersects another range.
    /// </summary>
    /// <param name="range">The range.</param>
    /// <remarks>If the two union ranges are not intersected, returns null.</remarks>
    ASPOSE_CELLS_API UnionRange Intersect(const U16String& range);
    /// <summary>
    /// Intersects another range.
    /// </summary>
    /// <param name="range">The range.</param>
    /// <remarks>If the two union ranges are not intersected, returns null.</remarks>
    ASPOSE_CELLS_API UnionRange Intersect(const char16_t* range);
    /// <summary>
    /// Intersects another range.
    /// </summary>
    /// <param name="unionRange">The range.</param>
    /// <remarks>If the two union ranges are not intersected, returns null.</remarks>
    ASPOSE_CELLS_API UnionRange Intersect(const UnionRange& unionRange);
    /// <summary>
    /// Intersects another range.
    /// </summary>
    /// <param name="ranges">The range.</param>
    /// <remarks>If the two union ranges are not intersected, returns null.</remarks>
    ASPOSE_CELLS_API UnionRange Intersect(const Vector<Range>& ranges);
    /// <summary>
    /// Union another range.
    /// </summary>
    /// <param name="range">The range.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API UnionRange Union(const U16String& range);
    /// <summary>
    /// Union another range.
    /// </summary>
    /// <param name="range">The range.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API UnionRange Union(const char16_t* range);
    /// <summary>
    /// Union another range.
    /// </summary>
    /// <param name="unionRange">The range.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API UnionRange Union(const UnionRange& unionRange);
    /// <summary>
    /// Union the ranges.
    /// </summary>
    /// <param name="ranges">The ranges.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API UnionRange Union(const Vector<Range>& ranges);
    
};

} }

#endif
