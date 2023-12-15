// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_COMBOBOX_H
#define ASPOSE_CELLS_DRAWING_COMBOBOX_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Cell;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class ComboBox_Impl;

/// <summary>
/// Represents the control form ComboBox.
/// </summary>
class ComboBox : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ComboBox_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ComboBox(ComboBox_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ComboBox(const ComboBox& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ComboBox(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ComboBox();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ComboBox& operator=(const ComboBox& src);
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
    /// Gets or sets the index number of the currently selected item in a list box or combo box.
    /// Zero-based.
    /// </summary>
    /// <remarks>-1 presents no item is selected.</remarks>
    ASPOSE_CELLS_API int32_t GetSelectedIndex();
    /// <summary>
    /// Gets or sets the index number of the currently selected item in a list box or combo box.
    /// Zero-based.
    /// </summary>
    /// <remarks>-1 presents no item is selected.</remarks>
    ASPOSE_CELLS_API void SetSelectedIndex(int32_t value);
    /// <summary>
    /// Gets the selected value of the combox box.
    /// </summary>
    ASPOSE_CELLS_API U16String GetSelectedValue();
    /// <summary>
    /// Gets the selected cell in the input range of the combo box.
    /// </summary>
    ASPOSE_CELLS_API Cell GetSelectedCell();
    /// <summary>
    /// Indicates whether the combobox has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// Indicates whether the combobox has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    /// <summary>
    /// Gets or sets the number of list lines displayed in the drop-down portion of a combo box.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDropDownLines();
    /// <summary>
    /// Gets or sets the number of list lines displayed in the drop-down portion of a combo box.
    /// </summary>
    ASPOSE_CELLS_API void SetDropDownLines(int32_t value);
    
};

} } }

#endif
