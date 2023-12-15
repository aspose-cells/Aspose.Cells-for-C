// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_NAME_H
#define ASPOSE_CELLS_NAME_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells {
    class Range;
    class ReferredArea;
} }

namespace Aspose { namespace Cells {

class Name_Impl;

/// <summary>
/// Represents a defined name for a range of cells.
/// </summary>
class ASPOSE_CELLS_API2 Name {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Name_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Name(Name_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Name(const Name& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Name();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Name& operator=(const Name& src);
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
    /// Gets and sets the comment of the name.
    /// Only applies for Excel 2007 or higher versions.
    /// </summary>
    ASPOSE_CELLS_API U16String GetComment();
    /// <summary>
    /// Gets and sets the comment of the name.
    /// Only applies for Excel 2007 or higher versions.
    /// </summary>
    ASPOSE_CELLS_API void SetComment(const U16String& value);
    /// <summary>
    /// Gets and sets the comment of the name.
    /// Only applies for Excel 2007 or higher versions.
    /// </summary>
    ASPOSE_CELLS_API void SetComment(const char16_t* value);
    /// <summary>
    /// Gets the name text of the object.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Gets the name text of the object.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Gets the name text of the object.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// Gets the name  full text of the object with the scope setting.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFullText();
    /// <summary>
    /// Returns or sets the formula that the name is defined to refer to, beginning with an equal sign.
    /// </summary>
    ASPOSE_CELLS_API U16String GetRefersTo();
    /// <summary>
    /// Returns or sets the formula that the name is defined to refer to, beginning with an equal sign.
    /// </summary>
    ASPOSE_CELLS_API void SetRefersTo(const U16String& value);
    /// <summary>
    /// Returns or sets the formula that the name is defined to refer to, beginning with an equal sign.
    /// </summary>
    ASPOSE_CELLS_API void SetRefersTo(const char16_t* value);
    /// <summary>
    /// Gets or sets a R1C1 reference of the <see cref="Name"/>.
    /// </summary>
    ASPOSE_CELLS_API U16String GetR1C1RefersTo();
    /// <summary>
    /// Gets or sets a R1C1 reference of the <see cref="Name"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetR1C1RefersTo(const U16String& value);
    /// <summary>
    /// Gets or sets a R1C1 reference of the <see cref="Name"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetR1C1RefersTo(const char16_t* value);
    /// <summary>
    /// Get the reference of this Name.
    /// </summary>
    /// <param name="isR1C1">Whether the reference needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the reference needs to be formatted by locale.</param>
    ASPOSE_CELLS_API U16String GetRefersTo(bool isR1C1, bool isLocal);
    /// <summary>
    /// Get the reference of this Name based on specified cell.
    /// </summary>
    /// <param name="isR1C1">Whether the reference needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the reference needs to be formatted by locale.</param>
    /// <param name="row">The row index of the cell.</param>
    /// <param name="column">The column index of the cell.</param>
    ASPOSE_CELLS_API U16String GetRefersTo(bool isR1C1, bool isLocal, int32_t row, int32_t column);
    /// <summary>
    /// Set the reference of this Name.
    /// </summary>
    /// <param name="refersTo">The reference.</param>
    /// <param name="isR1C1">Whether the reference is R1C1 format.</param>
    /// <param name="isLocal">Whether the reference is locale formatted.</param>
    ASPOSE_CELLS_API void SetRefersTo(const U16String& refersTo, bool isR1C1, bool isLocal);
    /// <summary>
    /// Set the reference of this Name.
    /// </summary>
    /// <param name="refersTo">The reference.</param>
    /// <param name="isR1C1">Whether the reference is R1C1 format.</param>
    /// <param name="isLocal">Whether the reference is locale formatted.</param>
    ASPOSE_CELLS_API void SetRefersTo(const char16_t* refersTo, bool isR1C1, bool isLocal);
    /// <summary>
    /// Indicates whether this name is referred by other formulas.
    /// </summary>
    ASPOSE_CELLS_API bool IsReferred();
    /// <summary>
    /// Indicates whether the name is visible.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Indicates whether the name is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    /// <summary>
    /// Indicates this name belongs to Workbook or Worksheet.
    /// 0 = Global name, otherwise index to sheet (one-based)
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSheetIndex();
    /// <summary>
    /// Indicates this name belongs to Workbook or Worksheet.
    /// 0 = Global name, otherwise index to sheet (one-based)
    /// </summary>
    ASPOSE_CELLS_API void SetSheetIndex(int32_t value);
    /// <summary>
    /// Returns a string represents the current Range object.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String ToString();
    /// <summary>
    /// Gets all ranges referred by this name.
    /// </summary>
    /// <returns>All ranges.</returns>
    ASPOSE_CELLS_API Vector<Range> GetRanges();
    /// <summary>
    /// Gets all ranges referred by this name.
    /// </summary>
    /// <param name="recalculate">whether recalculate it if this name has been calculated before this invocation.</param>
    /// <returns>All ranges.</returns>
    ASPOSE_CELLS_API Vector<Range> GetRanges(bool recalculate);
    /// <summary>
    /// Gets all references referred by this name.
    /// </summary>
    /// <param name="recalculate">whether recalculate it if this name has been calculated before this invocation.</param>
    /// <returns>All ranges.</returns>
    ASPOSE_CELLS_API Vector<ReferredArea> GetReferredAreas(bool recalculate);
    /// <summary>
    /// Gets the range if this name refers to a range.
    /// </summary>
    /// <returns>The range.</returns>
    ASPOSE_CELLS_API Range GetRange();
    /// <summary>
    /// Gets the range if this name refers to a range
    /// </summary>
    /// <param name="recalculate">whether recalculate it if this name has been calculated before this invocation.</param>
    /// <returns>The range.</returns>
    ASPOSE_CELLS_API Range GetRange(bool recalculate);
    /// <summary>
    /// Gets the range if this name refers to a range.
    /// If the reference of this name is not absolute, the range may be different for different cell.
    /// </summary>
    /// <param name="sheetIndex">The according sheet index.</param>
    /// <param name="row">The according row index.</param>
    /// <param name="column">The according column index</param>
    /// <returns>The range.</returns>
    ASPOSE_CELLS_API Range GetRange(int32_t sheetIndex, int32_t row, int32_t column);
    
};

} }

#endif
