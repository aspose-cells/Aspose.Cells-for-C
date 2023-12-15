// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_RADIOBUTTON_H
#define ASPOSE_CELLS_DRAWING_RADIOBUTTON_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class GroupBox;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class RadioButton_Impl;

/// <summary>
/// Represents a radio button.
/// </summary>
class RadioButton : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RadioButton_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RadioButton(RadioButton_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RadioButton(const RadioButton& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API RadioButton(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RadioButton();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RadioButton& operator=(const RadioButton& src);
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
    /// Indicates if the radiobutton is checked or not.
    /// </summary>
    ASPOSE_CELLS_API bool IsChecked();
    /// <summary>
    /// Indicates if the radiobutton is checked or not.
    /// </summary>
    ASPOSE_CELLS_API void SetIsChecked(bool value);
    /// <summary>
    /// Gets the option index (one-based) in all the radio buttons of the GroupBox which contains this radio button.
    /// </summary>
    /// <returns></returns>
    /// <remarks>
    /// If this radio button is not in the GroupBox, returns the option index in all radio buttons that are not in any GroupBox
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetOptionIndex();
    /// <summary>
    /// Indicates whether the combobox has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// Indicates whether the combobox has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    /// <summary>
    /// Gets the GroupBox that contains this RadioButton.
    /// </summary>
    ASPOSE_CELLS_API GroupBox GetGroupBox();
    
};

} } }

#endif
