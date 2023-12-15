// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTAREAFILTERCOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTAREAFILTERCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotAreaFilter;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

class PivotAreaFilterCollection_Impl;

/// <summary>
/// Represents the list of filters for <see cref="PivotArea"/>
/// </summary>
class PivotAreaFilterCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotAreaFilterCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaFilterCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaFilterCollection(PivotAreaFilterCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaFilterCollection(const PivotAreaFilterCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotAreaFilterCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotAreaFilterCollection& operator=(const PivotAreaFilterCollection& src);
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
    /// Gets filter from the list by the index.
    /// </summary>
    /// <param name="index">The Index</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PivotAreaFilter Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
