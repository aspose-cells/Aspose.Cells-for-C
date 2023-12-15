// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_LISTBOX_H
#define ASPOSE_CELLS_DRAWING_LISTBOX_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/SelectionType.h"

namespace Aspose { namespace Cells {
    class Cell;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class ListBox_Impl;

/// <summary>
/// Represents a list box object.
/// </summary>
class ListBox : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ListBox_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ListBox(ListBox_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ListBox(const ListBox& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ListBox(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ListBox();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ListBox& operator=(const ListBox& src);
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
    /// Gets the number of items in the list box.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetItemCount();
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
    /// Sets whether the item is selected
    /// </summary>
    /// <param name="itemIndex">The item index</param>
    /// <param name="isSelected">Whether the item is selected.
    /// True means that this item should be selected.
    /// False means that this item should be unselected.
    /// </param>
    ASPOSE_CELLS_API void SelectedItem(int32_t itemIndex, bool isSelected);
    /// <summary>
    /// Indicates whether the item is selected.
    /// </summary>
    /// <param name="itemIndex">The item index.</param>
    /// <returns>whether the item is selected.</returns>
    ASPOSE_CELLS_API bool IsSelected(int32_t itemIndex);
    /// <summary>
    /// Gets the selected cells.
    /// Returns null if the input range is not set or no item is selected
    /// </summary>
    ASPOSE_CELLS_API Vector<Cell> GetSelectedCells();
    /// <summary>
    /// Indicates whether the combobox has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// Indicates whether the combobox has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    /// <summary>
    /// Gets or sets the selection mode of the specified list box.
    /// </summary>
    ASPOSE_CELLS_API SelectionType GetSelectionType();
    /// <summary>
    /// Gets or sets the selection mode of the specified list box.
    /// </summary>
    ASPOSE_CELLS_API void SetSelectionType(SelectionType value);
    /// <summary>
    /// Specifies the amount by which the control's value is changed
    /// when the user clicks on the scrollbar's page up or page down region.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPageChange();
    /// <summary>
    /// Specifies the amount by which the control's value is changed
    /// when the user clicks on the scrollbar's page up or page down region.
    /// </summary>
    ASPOSE_CELLS_API void SetPageChange(int32_t value);
    
};

} } }

#endif
