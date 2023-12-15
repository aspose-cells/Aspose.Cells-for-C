// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFORMATCONDITION_H
#define ASPOSE_CELLS_PIVOT_PIVOTFORMATCONDITION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PivotConditionFormatRuleType.h"
#include "Aspose.Cells/PivotConditionFormatScopeType.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotField;
} } }

namespace Aspose { namespace Cells {
    class FormatConditionCollection;
} }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotFormatCondition_Impl;

/// <summary>
/// Represents a PivotTable Format Condition in PivotFormatCondition Collection.
/// </summary>
class PivotFormatCondition {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotFormatCondition_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotFormatCondition(PivotFormatCondition_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotFormatCondition(const PivotFormatCondition& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotFormatCondition();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotFormatCondition& operator=(const PivotFormatCondition& src);
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
    /// Adds PivotTable conditional format limit in the data fields.
    /// </summary>
    /// <param name="fieldName">The name of PivotField.</param>
    ASPOSE_CELLS_API void AddDataAreaCondition(const U16String& fieldName);
    /// <summary>
    /// Adds PivotTable conditional format limit in the data fields.
    /// </summary>
    /// <param name="fieldName">The name of PivotField.</param>
    ASPOSE_CELLS_API void AddDataAreaCondition(const char16_t* fieldName);
    /// <summary>
    /// Adds PivotTable conditional format limit in the data fields.
    /// </summary>
    /// <param name="dataField">The PivotField in the data fields.</param>
    ASPOSE_CELLS_API void AddDataAreaCondition(const PivotField& dataField);
    /// <summary>
    /// Adds PivotTable conditional format limit in the row fields.
    /// </summary>
    /// <param name="fieldName">The name of PivotField.</param>
    ASPOSE_CELLS_API void AddRowAreaCondition(const U16String& fieldName);
    /// <summary>
    /// Adds PivotTable conditional format limit in the row fields.
    /// </summary>
    /// <param name="fieldName">The name of PivotField.</param>
    ASPOSE_CELLS_API void AddRowAreaCondition(const char16_t* fieldName);
    /// <summary>
    /// Adds PivotTable conditional format limit in the row fields.
    /// </summary>
    /// <param name="rowField">The PivotField in the row fields.</param>
    ASPOSE_CELLS_API void AddRowAreaCondition(const PivotField& rowField);
    /// <summary>
    /// Adds PivotTable conditional format limit in the column fields.
    /// </summary>
    /// <param name="fieldName">The name of PivotField.</param>
    ASPOSE_CELLS_API void AddColumnAreaCondition(const U16String& fieldName);
    /// <summary>
    /// Adds PivotTable conditional format limit in the column fields.
    /// </summary>
    /// <param name="fieldName">The name of PivotField.</param>
    ASPOSE_CELLS_API void AddColumnAreaCondition(const char16_t* fieldName);
    /// <summary>
    /// Adds PivotTable conditional format limit in the column fields.
    /// </summary>
    /// <param name="columnField">The PivotField in the column fields.</param>
    ASPOSE_CELLS_API void AddColumnAreaCondition(const PivotField& columnField);
    /// <summary>
    /// Sets conditional areas of PivotFormatCondition object.
    /// </summary>
    ASPOSE_CELLS_API void SetConditionalAreas();
    /// <summary>
    /// Get and set scope type for the pivot table condition format .
    /// </summary>
    ASPOSE_CELLS_API PivotConditionFormatScopeType GetScopeType();
    /// <summary>
    /// Get and set scope type for the pivot table condition format .
    /// </summary>
    ASPOSE_CELLS_API void SetScopeType(PivotConditionFormatScopeType value);
    /// <summary>
    /// Get and set rule type for the pivot table condition format .
    /// </summary>
    ASPOSE_CELLS_API PivotConditionFormatRuleType GetRuleType();
    /// <summary>
    /// Get and set rule type for the pivot table condition format .
    /// </summary>
    ASPOSE_CELLS_API void SetRuleType(PivotConditionFormatRuleType value);
    /// <summary>
    /// Get formatconditions for the pivot table condition format .
    /// </summary>
    ASPOSE_CELLS_API FormatConditionCollection GetFormatConditions();
    
};

} } }

#endif
