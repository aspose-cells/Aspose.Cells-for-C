// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ROW_H
#define ASPOSE_CELLS_ROW_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Enumerator.h"

namespace Aspose { namespace Cells {
    class Cell;
    class Style;
    class StyleFlag;
} }

namespace Aspose { namespace Cells {

class Row_Impl;

/// <summary>
/// Represents a single row in a worksheet.
/// </summary>
class ASPOSE_CELLS_API2 Row {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Row_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Row(Row_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Row(const Row& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Row();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Row& operator=(const Row& src);
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
    /// Indicates whether the row contains any data
    /// </summary>
    ASPOSE_CELLS_API bool IsBlank();
    /// <summary>
    /// Gets the cell.
    /// </summary>
    /// <param name="column">The column index</param>
    /// <returns></returns>
    ASPOSE_CELLS_API Cell Get(int32_t column);
    /// <summary>
    /// Gets the cells enumerator
    /// </summary>
    /// <returns>The cells enumerator</returns>
    ASPOSE_CELLS_API Enumerator<Cell> GetEnumerator();
    /// <summary>
    /// Gets an enumerator that iterates cells through this row.
    /// </summary>
    /// <param name="reversed">whether enumerate cells in reversed order</param>
    /// <param name="sync">whether the returned enumerator should check the modification of cells in this row
    /// and keep synchronized with it.</param>
    /// <returns>The cell enumerator</returns>
    /// <remarks>If the row will be modified(by operations that may cause new Cell be instantiated or
    /// existing Cell be removed) during the traversal with the enumerator,
    /// synchronized enumerator should be used instead of normal enumerator so that the traversal can continue
    /// from the position just after the one has been traversed by the last MoveNext().
    /// However, together with the advantage that no element be skipped or traversed repeatedly,
    /// the disadvantage for synchronized enumerator is that the performance will be degraded a bit
    /// when comparing with normal enumerator.</remarks>
    ASPOSE_CELLS_API Enumerator<Cell> GetEnumerator(bool reversed, bool sync);
    /// <summary>
    /// Gets the cell or null in the specific index.
    /// </summary>
    /// <param name="column">The column index</param>
    /// <returns>Returns the cell object if the cell exists.
    /// Or returns null if the cell object does not exist.</returns>
    ASPOSE_CELLS_API Cell GetCellOrNull(int32_t column);
    /// <summary>
    /// whether the row is collapsed
    /// </summary>
    ASPOSE_CELLS_API bool IsCollapsed();
    /// <summary>
    /// whether the row is collapsed
    /// </summary>
    ASPOSE_CELLS_API void SetIsCollapsed(bool value);
    /// <summary>
    /// Gets and sets the row height in unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetHeight();
    /// <summary>
    /// Gets and sets the row height in unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetHeight(double value);
    /// <summary>
    /// Indicates whether the row is hidden.
    /// </summary>
    ASPOSE_CELLS_API bool IsHidden();
    /// <summary>
    /// Indicates whether the row is hidden.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHidden(bool value);
    /// <summary>
    /// Gets the index of this row.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetIndex();
    /// <summary>
    /// Gets the group level of the row.
    /// </summary>
    ASPOSE_CELLS_API uint8_t GetGroupLevel();
    /// <summary>
    /// Gets the group level of the row.
    /// </summary>
    ASPOSE_CELLS_API void SetGroupLevel(uint8_t value);
    /// <summary>
    /// Indicates that row height and default font height matches.
    /// </summary>
    ASPOSE_CELLS_API bool IsHeightMatched();
    /// <summary>
    /// Indicates that row height and default font height matches.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHeightMatched(bool value);
    /// <summary>
    /// Gets the style of this row.
    /// </summary>
    /// <remarks>
    /// Modifying the returned style object directly takes no effect for this row or any cells in this row.
    /// You have to call <see cref="ApplyStyle(Style, StyleFlag)"/> or <see cref="SetStyle(Style)"/> method
    /// to apply the change to this row.<br></br>
    /// Row's style is the style which will be inherited by cells in this row(those cells that have no custom style settings,
    /// such as existing cells that have not been set style explicitly, or those that have not been instantiated)
    /// </remarks>
    ASPOSE_CELLS_API Style GetStyle();
    /// <summary>
    /// Sets the style of this row.
    /// </summary>
    /// <param name="style">the style to be used as the default style for cells in this row.</param>
    /// <remarks>
    /// This method only sets the given style as the default style for this row,
    /// without changing the style settings for existing cells in this row.
    /// To update style settings of existing cells to the specified style at the same time,
    /// please use <see cref="ApplyStyle(Style, StyleFlag)"/>
    /// </remarks>
    ASPOSE_CELLS_API void SetStyle(const Style& style);
    /// <summary>
    /// Indicates whether this row has custom style settings(different from the default one inherited from workbook).
    /// </summary>
    ASPOSE_CELLS_API bool GetHasCustomStyle();
    /// <summary>
    /// Copy settings of row, such as style, height, visibility, ...etc.
    /// </summary>
    /// <param name="source">the source row whose settings will be copied to this one</param>
    /// <param name="checkStyle">whether check and gather style.
    /// Only takes effect and be needed when two row objects belong to different workbook and the styles of two workbooks are different.</param>
    ASPOSE_CELLS_API void CopySettings(const Row& source, bool checkStyle);
    /// <summary>
    /// Gets the first cell object in the row.
    /// </summary>
    ASPOSE_CELLS_API Cell GetFirstCell();
    /// <summary>
    /// Gets the first non-blank cell in the row.
    /// </summary>
    ASPOSE_CELLS_API Cell GetFirstDataCell();
    /// <summary>
    /// Gets the last cell object in the row.
    /// </summary>
    ASPOSE_CELLS_API Cell GetLastCell();
    /// <summary>
    /// Gets the last non-blank cell in the row.
    /// </summary>
    ASPOSE_CELLS_API Cell GetLastDataCell();
    /// <summary>
    /// Applies formats for a whole row.
    /// </summary>
    /// <param name="style">The style object which will be applied.</param>
    /// <param name="flag">Flags which indicates applied formatting properties.</param>
    ASPOSE_CELLS_API void ApplyStyle(const Style& style, const StyleFlag& flag);
    /// <summary>
    /// Checks whether this object refers to the same row with another row object.
    /// </summary>
    /// <param name="row">another row object</param>
    /// <returns>true if two row objects refers to the same row.</returns>
    ASPOSE_CELLS_API bool Equals(const Row& row);
    
};

} }

#endif
