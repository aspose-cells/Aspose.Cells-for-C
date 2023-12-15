// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_CUSTOMPIOVTFIELDGROUPITEM_H
#define ASPOSE_CELLS_PIVOT_CUSTOMPIOVTFIELDGROUPITEM_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class CustomPiovtFieldGroupItem_Impl;

/// <summary>
/// Represents an item of custom grouped field.
/// </summary>
class ASPOSE_CELLS_API2 CustomPiovtFieldGroupItem {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomPiovtFieldGroupItem_Impl* _impl;
    
public:
    /// <summary>
    /// The constructor of custom group item of pivot field.
    /// </summary>
    /// <param name="name">The name of group item</param>
    /// <param name="itemIndexes">All indexes to the items of base pivot field.</param>
    ASPOSE_CELLS_API CustomPiovtFieldGroupItem(const U16String& name, const Vector<int32_t>& itemIndexes);
    /// <summary>
    /// The constructor of custom group item of pivot field.
    /// </summary>
    /// <param name="name">The name of group item</param>
    /// <param name="itemIndexes">All indexes to the items of base pivot field.</param>
    ASPOSE_CELLS_API CustomPiovtFieldGroupItem(const char16_t* name, const Vector<int32_t>& itemIndexes);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CustomPiovtFieldGroupItem(CustomPiovtFieldGroupItem_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomPiovtFieldGroupItem(const CustomPiovtFieldGroupItem& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomPiovtFieldGroupItem();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CustomPiovtFieldGroupItem& operator=(const CustomPiovtFieldGroupItem& src);
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
    
};

} } }

#endif
