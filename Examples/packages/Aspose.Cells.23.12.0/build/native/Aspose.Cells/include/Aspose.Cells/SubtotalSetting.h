// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SUBTOTALSETTING_H
#define ASPOSE_CELLS_SUBTOTALSETTING_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/ConsolidationFunction.h"

namespace Aspose { namespace Cells {

class SubtotalSetting_Impl;

/// <summary>
/// Represents the setting of the subtotal .
/// </summary>
class SubtotalSetting {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    SubtotalSetting_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API SubtotalSetting(SubtotalSetting_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API SubtotalSetting(const SubtotalSetting& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~SubtotalSetting();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API SubtotalSetting& operator=(const SubtotalSetting& src);
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
    /// The field to group by, as a zero-based integer offset
    /// </summary>
    ASPOSE_CELLS_API int32_t GetGroupBy();
    /// <summary>
    /// The subtotal function.
    /// </summary>
    ASPOSE_CELLS_API ConsolidationFunction GetSubtotalFunction();
    /// <summary>
    /// An array of zero-based field offsets, indicating the fields to which the subtotals are added.
    /// </summary>
    ASPOSE_CELLS_API Vector<int32_t> GetTotalList();
    /// <summary>
    /// Indicates whether add summary below data.
    /// </summary>
    ASPOSE_CELLS_API bool GetSummaryBelowData();
    
};

} }

#endif
