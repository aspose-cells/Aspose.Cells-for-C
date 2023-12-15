// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFORMATCONDITIONCOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTFORMATCONDITIONCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotFormatCondition;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

class PivotFormatConditionCollection_Impl;

/// <summary>
/// Represents PivotTable Format Conditions.
/// </summary>
class PivotFormatConditionCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotFormatConditionCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotFormatConditionCollection(PivotFormatConditionCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotFormatConditionCollection(const PivotFormatConditionCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotFormatConditionCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotFormatConditionCollection& operator=(const PivotFormatConditionCollection& src);
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
    /// Adds a pivot FormatCondition to the collection.
    /// </summary>
    /// <returns>pivot FormatCondition object index.</returns>
    /// <remarks>not supported</remarks>
    ASPOSE_CELLS_API int32_t Add();
    /// <summary>
    /// Gets the pivot FormatCondition object at the specific index.
    /// </summary>
    /// <returns>pivot FormatCondition object.</returns>
    ASPOSE_CELLS_API PivotFormatCondition Get(int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
