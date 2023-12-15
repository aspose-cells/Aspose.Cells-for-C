// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTAREA_H
#define ASPOSE_CELLS_PIVOT_PIVOTAREA_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/PivotAreaType.h"
#include "Aspose.Cells/PivotFieldType.h"
#include "Aspose.Cells/PivotTableSelectionType.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotAreaFilterCollection;
    class PivotTable;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

class PivotArea_Impl;

/// <summary>
/// Presents the selected area of the PivotTable.
/// </summary>
class PivotArea {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotArea_Impl* _impl;
    
public:
    /// <summary>
    /// Presents the selected area of the PivotTable.
    /// </summary>
    /// <param name="table"></param>
    ASPOSE_CELLS_API explicit PivotArea(const PivotTable& table);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotArea(PivotArea_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotArea(const PivotArea& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotArea();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotArea& operator=(const PivotArea& src);
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
    /// Gets all filters for this PivotArea.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaFilterCollection GetFilters();
    /// <summary>
    /// Select the area with filters.
    /// </summary>
    /// <param name="axisType">The region of the PivotTable to which this rule applies.</param>
    /// <param name="fieldPosition">Position of the field within the axis to which this rule applies.</param>
    /// <param name="selectionType">Specifies what can be selected in a PivotTable during a structured selection.</param>
    ASPOSE_CELLS_API void Select(PivotFieldType axisType, int32_t fieldPosition, PivotTableSelectionType selectionType);
    /// <summary>
    /// Indicates whether only the data values (in the data area of the view) for an item
    /// selection are selected and does not include the item labels.
    /// </summary>
    ASPOSE_CELLS_API bool GetOnlyData();
    /// <summary>
    /// Indicates whether only the data values (in the data area of the view) for an item
    /// selection are selected and does not include the item labels.
    /// </summary>
    ASPOSE_CELLS_API void SetOnlyData(bool value);
    /// <summary>
    /// Indicates whether only the data labels for an item selection are selected.
    /// </summary>
    ASPOSE_CELLS_API bool GetOnlyLabel();
    /// <summary>
    /// Indicates whether only the data labels for an item selection are selected.
    /// </summary>
    ASPOSE_CELLS_API void SetOnlyLabel(bool value);
    /// <summary>
    /// Indicates whether the row grand total is included.
    /// </summary>
    ASPOSE_CELLS_API bool IsRowGrandIncluded();
    /// <summary>
    /// Indicates whether the row grand total is included.
    /// </summary>
    ASPOSE_CELLS_API void SetIsRowGrandIncluded(bool value);
    /// <summary>
    /// Indicates whether the column grand total is included.
    /// </summary>
    ASPOSE_CELLS_API bool IsColumnGrandIncluded();
    /// <summary>
    /// Indicates whether the column grand total is included.
    /// </summary>
    ASPOSE_CELLS_API void SetIsColumnGrandIncluded(bool value);
    /// <summary>
    /// Gets and sets the region of the PivotTable to which this rule applies.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldType GetAxisType();
    /// <summary>
    /// Gets and sets the region of the PivotTable to which this rule applies.
    /// </summary>
    ASPOSE_CELLS_API void SetAxisType(PivotFieldType value);
    /// <summary>
    /// Gets and sets the type of selection rule.
    /// </summary>
    ASPOSE_CELLS_API PivotAreaType GetRuleType();
    /// <summary>
    /// Gets and sets the type of selection rule.
    /// </summary>
    ASPOSE_CELLS_API void SetRuleType(PivotAreaType value);
    /// <summary>
    /// Indicates whether the rule refers to an area that is in outline mode.
    /// </summary>
    ASPOSE_CELLS_API bool IsOutline();
    /// <summary>
    /// Indicates whether the rule refers to an area that is in outline mode.
    /// </summary>
    ASPOSE_CELLS_API void SetIsOutline(bool value);
    
};

} } }

#endif
