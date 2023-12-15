// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTTABLEFORMATCOLLECTION_H
#define ASPOSE_CELLS_PIVOT_PIVOTTABLEFORMATCOLLECTION_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/PivotFieldSubtotalType.h"
#include "Aspose.Cells/PivotFieldType.h"
#include "Aspose.Cells/PivotTableSelectionType.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotTableFormat;
} } }

namespace Aspose { namespace Cells {
    class Style;
} }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotTableFormatCollection_Impl;

/// <summary>
/// Represents the collection of formats applied to PivotTable.
/// </summary>
class PivotTableFormatCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotTableFormatCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotTableFormatCollection(PivotTableFormatCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotTableFormatCollection(const PivotTableFormatCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotTableFormatCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotTableFormatCollection& operator=(const PivotTableFormatCollection& src);
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
    /// Gets the format by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PivotTableFormat Get(int32_t index);
    /// <summary>
    /// Add a <see cref="PivotTableFormat"/>.
    /// </summary>
    /// <returns>The index of new format.</returns>
    ASPOSE_CELLS_API int32_t Add();
    /// <summary>
    /// Formats selected area.
    /// </summary>
    /// <param name="axisType">The region of the PivotTable to which this rule applies.</param>
    /// <param name="fieldPosition">Position of the field within the axis to which this rule applies.</param>
    /// <param name="subtotalType">The subtotal filter type of the pivot field</param>
    /// <param name="selectionType">Indicates how to select data.</param>
    /// <param name="isGrandRow">Indicates whether selecting grand total rows.</param>
    /// <param name="isGrandColumn">Indicates whether selecting grand total columns.</param>
    /// <param name="style">The style which appies to the area of the pivot table.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API PivotTableFormat FormatArea(PivotFieldType axisType, int32_t fieldPosition, PivotFieldSubtotalType subtotalType, PivotTableSelectionType selectionType, bool isGrandRow, bool isGrandColumn, const Style& style);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
