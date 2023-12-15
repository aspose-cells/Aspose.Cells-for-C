// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFILTERCOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTFILTERCOLLECTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/PivotFilterType.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotFilter;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

class PivotFilterCollection_Impl;

/// <summary>
/// Represents a collection of all the PivotFilter objects
/// </summary>
class PivotFilterCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotFilterCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotFilterCollection(PivotFilterCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotFilterCollection(const PivotFilterCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotFilterCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotFilterCollection& operator=(const PivotFilterCollection& src);
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
    /// Gets the pivotfilter object at the specific index.
    /// </summary>
    ASPOSE_CELLS_API PivotFilter Get(int32_t index);
    /// <summary>
    /// Adds a PivotFilter Object to the specific type
    /// </summary>
    /// <param name="fieldIndex">the PivotField index </param>
    /// <param name="type">the PivotFilter type </param>
    /// <returns>the index of  the PivotFilter Object in this PivotFilterCollection.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t fieldIndex, PivotFilterType type);
    /// <summary>
    /// Clear PivotFilter from the specific PivotField
    /// </summary>
    /// <param name="fieldIndex">the PivotField index </param>
    ASPOSE_CELLS_API void ClearFilter(int32_t fieldIndex);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
