// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_GROUPBOX_H
#define ASPOSE_CELLS_DRAWING_GROUPBOX_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells { namespace Drawing {

class GroupBox_Impl;

/// <summary>
/// Encapsulates the object that represents a groupbox in a spreadsheet.
/// </summary>
class GroupBox : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    GroupBox_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API GroupBox(GroupBox_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API GroupBox(const GroupBox& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API GroupBox(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~GroupBox();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API GroupBox& operator=(const GroupBox& src);
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
    /// Indicates whether the groupbox has shadow.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// Indicates whether the groupbox has shadow.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    
};

} } }

#endif
