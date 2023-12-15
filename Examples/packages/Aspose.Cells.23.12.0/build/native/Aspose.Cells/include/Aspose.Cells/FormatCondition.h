// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FORMATCONDITION_H
#define ASPOSE_CELLS_FORMATCONDITION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/FormatConditionType.h"
#include "Aspose.Cells/OperatorType.h"
#include "Aspose.Cells/TimePeriodType.h"

namespace Aspose { namespace Cells {
    class Style;
    class IconSet;
    class DataBar;
    class ColorScale;
    class Top10;
    class AboveAverage;
} }

namespace Aspose { namespace Cells {

class FormatCondition_Impl;

/// <summary>
/// Represents conditional formatting condition.
/// </summary>
class FormatCondition {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FormatCondition_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FormatCondition(FormatCondition_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FormatCondition(const FormatCondition& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FormatCondition();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FormatCondition& operator=(const FormatCondition& src);
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
    /// Gets the value or expression associated with this format condition.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <returns>The value or expression associated with this format condition.</returns>
    ASPOSE_CELLS_API U16String GetFormula1(bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets the value or expression associated with this format condition.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <returns>The value or expression associated with this format condition.</returns>
    ASPOSE_CELLS_API U16String GetFormula2(bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets the value or expression of the conditional formatting of the cell.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns>The value or expression associated with the conditional formatting of the cell.</returns>
    /// <remarks>The given cell must be contained by this conditional formatting, otherwise null will be returned.</remarks>
    ASPOSE_CELLS_API U16String GetFormula1(bool isR1C1, bool isLocal, int32_t row, int32_t column);
    /// <summary>
    /// Gets the value or expression of the conditional formatting of the cell.
    /// </summary>
    /// <param name="isR1C1">Whether the formula needs to be formatted as R1C1.</param>
    /// <param name="isLocal">Whether the formula needs to be formatted by locale.</param>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns>The value or expression associated with the conditional formatting of the cell.</returns>
    /// <remarks>The given cell must be contained by this conditional formatting, otherwise null will be returned.</remarks>
    ASPOSE_CELLS_API U16String GetFormula2(bool isR1C1, bool isLocal, int32_t row, int32_t column);
    /// <summary>
    /// Sets the value or expression associated with this format condition.
    /// </summary>
    /// <param name="formula1">The value or expression associated with this format condition.
    /// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
    /// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
    /// <param name="formula2">The value or expression associated with this format condition. The input format is same with formula1</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormulas(const U16String& formula1, const U16String& formula2, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the value or expression associated with this format condition.
    /// </summary>
    /// <param name="formula1">The value or expression associated with this format condition.
    /// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
    /// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
    /// <param name="formula2">The value or expression associated with this format condition. The input format is same with formula1</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormulas(const char16_t* formula1, const char16_t* formula2, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the value or expression associated with this format condition.
    /// </summary>
    /// <param name="formula">The value or expression associated with this format condition.
    /// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
    /// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormula1(const U16String& formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the value or expression associated with this format condition.
    /// </summary>
    /// <param name="formula">The value or expression associated with this format condition.
    /// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
    /// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormula1(const char16_t* formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the value or expression associated with this format condition.
    /// </summary>
    /// <param name="formula">The value or expression associated with this format condition.
    /// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
    /// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormula2(const U16String& formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Sets the value or expression associated with this format condition.
    /// </summary>
    /// <param name="formula">The value or expression associated with this format condition.
    /// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
    /// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
    /// <param name="isR1C1">Whether the formula is R1C1 formula.</param>
    /// <param name="isLocal">Whether the formula is locale formatted.</param>
    ASPOSE_CELLS_API void SetFormula2(const char16_t* formula, bool isR1C1, bool isLocal);
    /// <summary>
    /// Gets and sets the value or expression associated with conditional formatting.
    /// </summary>
    /// <remarks>
    /// Please add all areas before setting formula.
    /// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
    /// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
    /// </remarks>
    ASPOSE_CELLS_API U16String GetFormula1();
    /// <summary>
    /// Gets and sets the value or expression associated with conditional formatting.
    /// </summary>
    /// <remarks>
    /// Please add all areas before setting formula.
    /// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
    /// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
    /// </remarks>
    ASPOSE_CELLS_API void SetFormula1(const U16String& value);
    /// <summary>
    /// Gets and sets the value or expression associated with conditional formatting.
    /// </summary>
    /// <remarks>
    /// Please add all areas before setting formula.
    /// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
    /// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
    /// </remarks>
    ASPOSE_CELLS_API void SetFormula1(const char16_t* value);
    /// <summary>
    /// Gets the formula of the conditional formatting of the cell.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns>The formula.</returns>
    ASPOSE_CELLS_API U16String GetFormula1(int32_t row, int32_t column);
    /// <summary>
    /// Gets and sets the value or expression associated with conditional formatting.
    /// </summary>
    /// <remarks>
    /// Please add all areas before setting formula.
    /// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
    /// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
    /// </remarks>
    ASPOSE_CELLS_API U16String GetFormula2();
    /// <summary>
    /// Gets and sets the value or expression associated with conditional formatting.
    /// </summary>
    /// <remarks>
    /// Please add all areas before setting formula.
    /// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
    /// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
    /// </remarks>
    ASPOSE_CELLS_API void SetFormula2(const U16String& value);
    /// <summary>
    /// Gets and sets the value or expression associated with conditional formatting.
    /// </summary>
    /// <remarks>
    /// Please add all areas before setting formula.
    /// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
    /// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
    /// </remarks>
    ASPOSE_CELLS_API void SetFormula2(const char16_t* value);
    /// <summary>
    /// Gets the formula of the conditional formatting of the cell.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns>The formula.</returns>
    ASPOSE_CELLS_API U16String GetFormula2(int32_t row, int32_t column);
    /// <summary>
    /// Gets and sets the conditional format operator type.
    /// </summary>
    /// <see cref="OperatorType"/>
    ASPOSE_CELLS_API OperatorType GetOperator();
    /// <summary>
    /// Gets and sets the conditional format operator type.
    /// </summary>
    /// <see cref="OperatorType"/>
    ASPOSE_CELLS_API void SetOperator(OperatorType value);
    /// <summary>
    /// True, no rules with lower priority may be applied over this rule, when this rule evaluates to true.
    /// Only applies for Excel 2007;
    /// </summary>
    ASPOSE_CELLS_API bool GetStopIfTrue();
    /// <summary>
    /// True, no rules with lower priority may be applied over this rule, when this rule evaluates to true.
    /// Only applies for Excel 2007;
    /// </summary>
    ASPOSE_CELLS_API void SetStopIfTrue(bool value);
    /// <summary>
    /// The priority of this conditional formatting rule. This value is used to determine which
    /// format should be evaluated and rendered. Lower numeric values are higher priority than
    /// higher numeric values, where '1' is the highest priority.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPriority();
    /// <summary>
    /// The priority of this conditional formatting rule. This value is used to determine which
    /// format should be evaluated and rendered. Lower numeric values are higher priority than
    /// higher numeric values, where '1' is the highest priority.
    /// </summary>
    ASPOSE_CELLS_API void SetPriority(int32_t value);
    /// <summary>
    /// Gets or setts style of conditional formatted cell ranges.
    /// </summary>
    ASPOSE_CELLS_API Style GetStyle();
    /// <summary>
    /// Gets or setts style of conditional formatted cell ranges.
    /// </summary>
    ASPOSE_CELLS_API void SetStyle(const Style& value);
    /// <summary>
    /// Gets and sets whether the conditional format Type.
    /// </summary>
    /// <see cref="FormatConditionType"/>
    ASPOSE_CELLS_API FormatConditionType GetType();
    /// <summary>
    /// Gets and sets whether the conditional format Type.
    /// </summary>
    /// <see cref="FormatConditionType"/>
    ASPOSE_CELLS_API void SetType(FormatConditionType value);
    /// <summary>
    /// Get the conditional formatting's "IconSet" instance.
    /// The default instance's IconSetType is TrafficLights31.
    /// Valid only for type = IconSet.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API IconSet GetIconSet();
    /// <summary>
    /// Get the conditional formatting's "DataBar" instance.
    /// The default instance's color is blue.
    /// Valid only for type is DataBar.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API DataBar GetDataBar();
    /// <summary>
    /// Get the conditional formatting's "ColorScale" instance.
    /// The default instance is a "green-yellow-red" 3ColorScale .
    /// Valid only for type = ColorScale.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API ColorScale GetColorScale();
    /// <summary>
    /// Get the conditional formatting's "Top10" instance.
    /// The default instance's rule highlights cells whose
    /// values fall in the top 10 bracket.
    /// Valid only for type is Top10.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Top10 GetTop10();
    /// <summary>
    /// Get the conditional formatting's "AboveAverage" instance.
    /// The default instance's rule highlights cells that are
    /// above the average for all values in the range.
    /// Valid only for type = AboveAverage.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API AboveAverage GetAboveAverage();
    /// <summary>
    /// The text value in a "text contains" conditional formatting rule.
    /// Valid only for type = containsText, notContainsText, beginsWith and endsWith.
    /// The default value is null.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// The text value in a "text contains" conditional formatting rule.
    /// Valid only for type = containsText, notContainsText, beginsWith and endsWith.
    /// The default value is null.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// The text value in a "text contains" conditional formatting rule.
    /// Valid only for type = containsText, notContainsText, beginsWith and endsWith.
    /// The default value is null.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// The applicable time period in a "date occurring…" conditional formatting rule.
    /// Valid only for type = timePeriod.
    /// The default value is TimePeriodType.Today.
    /// </summary>
    ASPOSE_CELLS_API TimePeriodType GetTimePeriod();
    /// <summary>
    /// The applicable time period in a "date occurring…" conditional formatting rule.
    /// Valid only for type = timePeriod.
    /// The default value is TimePeriodType.Today.
    /// </summary>
    ASPOSE_CELLS_API void SetTimePeriod(TimePeriodType value);
    
};

} }

#endif
