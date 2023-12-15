// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTITEMCOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTITEMCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Enumerator.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotItem;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotItemCollection_Impl;

/// <summary>
/// Represents a collection of all the PivotItem objects in the PivotField's
/// </summary>
class PivotItemCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotItemCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotItemCollection(PivotItemCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotItemCollection(const PivotItemCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotItemCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotItemCollection& operator=(const PivotItemCollection& src);
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
    /// Gets an enumerator over the elements in this collection in proper sequence.
    /// </summary>
    /// <returns>enumerator</returns>
    ASPOSE_CELLS_API Enumerator<PivotItem> GetEnumerator();
    /// <summary>
    /// Gets the PivotItem Object at the specific index.
    /// </summary>
    ASPOSE_CELLS_API PivotItem Get(int32_t index);
    /// <summary>
    /// Gets the PivotItem Object of the specific name.
    /// </summary>
    ASPOSE_CELLS_API PivotItem Get(const U16String& itemValue);
    /// <summary>
    /// Gets the PivotItem Object of the specific name.
    /// </summary>
    ASPOSE_CELLS_API PivotItem Get(const char16_t* itemValue);
    /// <summary>
    /// Gets the count of the pivot items.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Directly changes the orders of the two items.
    /// </summary>
    /// <param name="sourceIndex">The current index</param>
    /// <param name="destIndex">The dest index</param>
    ASPOSE_CELLS_API void ChangeitemsOrder(int32_t sourceIndex, int32_t destIndex);
    
};

} } }

#endif
