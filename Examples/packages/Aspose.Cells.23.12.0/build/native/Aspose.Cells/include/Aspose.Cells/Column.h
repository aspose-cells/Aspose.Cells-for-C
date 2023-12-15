// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_COLUMN_H
#define ASPOSE_CELLS_COLUMN_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class Style;
    class StyleFlag;
} }

namespace Aspose { namespace Cells {

class Column_Impl;

/// <summary>
/// Represents a single column in a worksheet.
/// </summary>
class Column {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Column_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Column(Column_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Column(const Column& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Column();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Column& operator=(const Column& src);
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
    /// Gets the index of this column.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetIndex();
    /// <summary>
    /// Gets and sets the column width in unit of characters.
    /// </summary>
    /// <remarks>
    /// For spreadsheet, column width is measured as the number of characters
    /// of the maximum digit width of the numbers 0~9 as rendered in the normal style's font.
    /// </remarks>
    ASPOSE_CELLS_API double GetWidth();
    /// <summary>
    /// Gets and sets the column width in unit of characters.
    /// </summary>
    /// <remarks>
    /// For spreadsheet, column width is measured as the number of characters
    /// of the maximum digit width of the numbers 0~9 as rendered in the normal style's font.
    /// </remarks>
    ASPOSE_CELLS_API void SetWidth(double value);
    /// <summary>
    /// Gets the group level of the column.
    /// </summary>
    ASPOSE_CELLS_API uint8_t GetGroupLevel();
    /// <summary>
    /// Gets the group level of the column.
    /// </summary>
    ASPOSE_CELLS_API void SetGroupLevel(uint8_t value);
    /// <summary>
    /// Indicates whether the column is hidden.
    /// </summary>
    ASPOSE_CELLS_API bool IsHidden();
    /// <summary>
    /// Indicates whether the column is hidden.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHidden(bool value);
    /// <summary>
    /// Indicates whether this column has custom style settings(different from the default one inherited from workbook).
    /// </summary>
    ASPOSE_CELLS_API bool GetHasCustomStyle();
    /// <summary>
    /// Applies formats for a whole column.
    /// </summary>
    /// <param name="style">The style object which will be applied.</param>
    /// <param name="flag">Flags which indicates applied formatting properties.</param>
    ASPOSE_CELLS_API void ApplyStyle(const Style& style, const StyleFlag& flag);
    /// <summary>
    /// Gets the style of this column.
    /// </summary>
    /// <remarks>
    /// Modifying the returned style object directly takes no effect for this column or any cells in this column.
    /// You have to call <see cref="ApplyStyle(Style, StyleFlag)"/> or <see cref="SetStyle(Style)"/> method
    /// to apply the change to this column.<br></br>
    /// Column's style is the style which will be inherited by cells in this column(those cells that have no custom style settings,
    /// such as existing cells that have not been set style explicitly, or those that have not been instantiated)
    /// </remarks>
    ASPOSE_CELLS_API Style GetStyle();
    /// <summary>
    /// Sets the style of this column.
    /// </summary>
    /// <param name="style">the style to be used as the default style for cells in this column.</param>
    /// <remarks>
    /// This method only sets the given style as the default style for this column,
    /// without changing the style settings for existing cells in this column.
    /// To update style settings of existing cells to the specified style at the same time,
    /// please use <see cref="ApplyStyle(Style, StyleFlag)"/>
    /// </remarks>
    ASPOSE_CELLS_API void SetStyle(const Style& style);
    /// <summary>
    /// whether the column is collapsed
    /// </summary>
    ASPOSE_CELLS_API bool IsCollapsed();
    /// <summary>
    /// whether the column is collapsed
    /// </summary>
    ASPOSE_CELLS_API void SetIsCollapsed(bool value);
    
};

} }

#endif
