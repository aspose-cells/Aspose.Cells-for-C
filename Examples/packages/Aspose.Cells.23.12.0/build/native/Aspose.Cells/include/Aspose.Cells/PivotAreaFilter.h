// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTAREAFILTER_H
#define ASPOSE_CELLS_PIVOT_PIVOTAREAFILTER_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/PivotFieldSubtotalType.h"

namespace Aspose { namespace Cells { namespace Pivot {

class PivotAreaFilter_Impl;

/// <summary>
/// Represents the filter of <see cref="PivotArea"/> for <see cref="PivotTable"/>.
/// </summary>
class PivotAreaFilter {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotAreaFilter_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaFilter();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaFilter(PivotAreaFilter_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaFilter(const PivotAreaFilter& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotAreaFilter();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotAreaFilter& operator=(const PivotAreaFilter& src);
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
    /// Gets which subtotal is set for this filter.
    /// </summary>
    /// <param name="subtotalType">The subtotal function type.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API bool IsSubtotalSet(PivotFieldSubtotalType subtotalType);
    /// <summary>
    /// Subtotal for the filter.
    /// </summary>
    /// <param name="subtotalType">The subtotal function.</param>
    /// <param name="shown">Indicates if showing this subtotal data.</param>
    ASPOSE_CELLS_API void SetSubtotals(PivotFieldSubtotalType subtotalType, bool shown);
    /// <summary>
    /// Indicates whether this field has selection.
    /// Only works when the PivotTable is in Outline view.
    /// </summary>
    ASPOSE_CELLS_API bool GetSelected();
    /// <summary>
    /// Indicates whether this field has selection.
    /// Only works when the PivotTable is in Outline view.
    /// </summary>
    ASPOSE_CELLS_API void SetSelected(bool value);
    
};

} } }

#endif
