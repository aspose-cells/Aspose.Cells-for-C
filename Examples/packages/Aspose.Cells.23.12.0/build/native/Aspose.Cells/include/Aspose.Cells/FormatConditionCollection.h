// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FORMATCONDITIONCOLLECTION_H
#define ASPOSE_CELLS_FORMATCONDITIONCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/FormatConditionType.h"
#include "Aspose.Cells/OperatorType.h"

namespace Aspose { namespace Cells {
    class CellArea;
    class FormatCondition;
} }

namespace Aspose { namespace Cells {

class FormatConditionCollection_Impl;

/// <summary>
/// Represents conditional formatting.
/// The FormatConditions can contain up to three conditional formats.
/// </summary>
class ASPOSE_CELLS_API2 FormatConditionCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FormatConditionCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FormatConditionCollection(FormatConditionCollection_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FormatConditionCollection(const FormatConditionCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FormatConditionCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FormatConditionCollection& operator=(const FormatConditionCollection& src);
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
    /// Adds a formatting condition and effected cell rang to the FormatConditions
    /// The FormatConditions can contain up to three conditional formats.
    /// References to the other sheets are not allowed in the formulas of conditional formatting.
    /// </summary>
    /// <param name="cellArea">Conditional formatted cell range.</param>
    /// <param name="type">Type of conditional formatting.It could be one of the members of FormatConditionType.</param>
    /// <param name="operatorType">Comparison operator.It could be one of the members of OperatorType.</param>
    /// <param name="formula1">The value or expression associated with conditional formatting.</param>
    /// <param name="formula2">The value or expression associated with conditional formatting</param>
    /// <returns>[0]:Formatting condition object index;[1] Effected cell rang index.</returns>
    /// <see cref= "OperatorType"/>
    /// <set cref= "FormatConditionType"/>
    ASPOSE_CELLS_API Vector<int32_t> Add(const CellArea& cellArea, FormatConditionType type, OperatorType operatorType, const U16String& formula1, const U16String& formula2);
    /// <summary>
    /// Adds a formatting condition and effected cell rang to the FormatConditions
    /// The FormatConditions can contain up to three conditional formats.
    /// References to the other sheets are not allowed in the formulas of conditional formatting.
    /// </summary>
    /// <param name="cellArea">Conditional formatted cell range.</param>
    /// <param name="type">Type of conditional formatting.It could be one of the members of FormatConditionType.</param>
    /// <param name="operatorType">Comparison operator.It could be one of the members of OperatorType.</param>
    /// <param name="formula1">The value or expression associated with conditional formatting.</param>
    /// <param name="formula2">The value or expression associated with conditional formatting</param>
    /// <returns>[0]:Formatting condition object index;[1] Effected cell rang index.</returns>
    /// <see cref= "OperatorType"/>
    /// <set cref= "FormatConditionType"/>
    ASPOSE_CELLS_API Vector<int32_t> Add(const CellArea& cellArea, FormatConditionType type, OperatorType operatorType, const char16_t* formula1, const char16_t* formula2);
    /// <summary>
    /// Adds a conditional formatted cell range.
    /// </summary>
    /// <param name="cellArea">Conditional formatted cell range.</param>
    /// <returns>Conditional formatted cell rang index.</returns>
    ASPOSE_CELLS_API int32_t AddArea(const CellArea& cellArea);
    /// <summary>
    /// Adds a formatting condition.
    /// </summary>
    /// <param name="type">The type of format condition.</param>
    /// <param name="operatorType">The operator type</param>
    /// <param name="formula1">The value or expression associated with conditional formatting.
    /// If the input value starts with '=', then it will be taken as formula.
    /// Otherwise it will be taken as plain value(text, number, bool).
    /// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
    /// <param name="formula2">The value or expression associated with conditional formatting.
    /// The input format is same with formula1</param>
    /// <returns>Formatting condition object index;</returns>
    ASPOSE_CELLS_API int32_t AddCondition(FormatConditionType type, OperatorType operatorType, const U16String& formula1, const U16String& formula2);
    /// <summary>
    /// Adds a formatting condition.
    /// </summary>
    /// <param name="type">The type of format condition.</param>
    /// <param name="operatorType">The operator type</param>
    /// <param name="formula1">The value or expression associated with conditional formatting.
    /// If the input value starts with '=', then it will be taken as formula.
    /// Otherwise it will be taken as plain value(text, number, bool).
    /// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
    /// <param name="formula2">The value or expression associated with conditional formatting.
    /// The input format is same with formula1</param>
    /// <returns>Formatting condition object index;</returns>
    ASPOSE_CELLS_API int32_t AddCondition(FormatConditionType type, OperatorType operatorType, const char16_t* formula1, const char16_t* formula2);
    /// <summary>
    /// Add a format condition.
    /// </summary>
    /// <param name="type">Format condition type.</param>
    /// <returns>Formatting condition object index;</returns>
    ASPOSE_CELLS_API int32_t AddCondition(FormatConditionType type);
    /// <summary>
    /// Gets the count of the conditions.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCount();
    /// <summary>
    /// Gets count of conditionally formatted ranges.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRangeCount();
    /// <summary>
    /// Gets the formatting condition by index.
    /// </summary>
    /// <param name="index">the index of the formatting condition to return.</param>
    /// <returns>the formatting condition </returns>
    ASPOSE_CELLS_API FormatCondition Get(int32_t index);
    /// <summary>
    /// Gets the conditional formatted cell range by index.
    /// </summary>
    /// <param name="index">the index of the conditional formatted cell range.</param>
    /// <returns>the conditional formatted cell range</returns>
    ASPOSE_CELLS_API CellArea GetCellArea(int32_t index);
    /// <summary>
    /// Removes conditional formatted cell range by index.
    /// </summary>
    /// <param name="index">The index of the conditional formatted cell range to be removed.</param>
    ASPOSE_CELLS_API void RemoveArea(int32_t index);
    /// <summary>
    /// Remove conditional formatting int the range.
    /// </summary>
    /// <param name="startRow">The startRow of the range.</param>
    /// <param name="startColumn">The startColumn of the range.</param>
    /// <param name="totalRows">The number of rows of the range.</param>
    /// <param name="totalColumns">The number of columns of the range.</param>
    /// <returns>
    /// Returns TRUE, this FormatCondtionCollection should be removed.
    /// </returns>
    ASPOSE_CELLS_API bool RemoveArea(int32_t startRow, int32_t startColumn, int32_t totalRows, int32_t totalColumns);
    /// <summary>
    /// Removes the formatting condition by index.
    /// </summary>
    /// <param name="index">The index of the formatting condition to be removed.</param>
    ASPOSE_CELLS_API void RemoveCondition(int32_t index);
    
};

} }

#endif
