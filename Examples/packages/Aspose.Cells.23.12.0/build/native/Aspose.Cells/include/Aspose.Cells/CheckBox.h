// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_CHECKBOX_H
#define ASPOSE_CELLS_DRAWING_CHECKBOX_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

#include "Aspose.Cells/CheckValueType.h"

namespace Aspose { namespace Cells { namespace Drawing {

class CheckBox_Impl;

/// <summary>
/// Represents a check box object in a worksheet.
/// </summary>
class CheckBox : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CheckBox_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CheckBox(CheckBox_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CheckBox(const CheckBox& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API CheckBox(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CheckBox();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CheckBox& operator=(const CheckBox& src);
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
    /// Indicates if the checkbox is checked or not.
    /// </summary>
    ASPOSE_CELLS_API bool GetValue();
    /// <summary>
    /// Indicates if the checkbox is checked or not.
    /// </summary>
    ASPOSE_CELLS_API void SetValue(bool value);
    /// <summary>
    /// Gets or set checkbox' value.
    /// </summary>
    ASPOSE_CELLS_API CheckValueType GetCheckedValue();
    /// <summary>
    /// Gets or set checkbox' value.
    /// </summary>
    ASPOSE_CELLS_API void SetCheckedValue(CheckValueType value);
    /// <summary>
    /// Indicates whether the combobox has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// Indicates whether the combobox has 3-D shading.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    
};

} } }

#endif
