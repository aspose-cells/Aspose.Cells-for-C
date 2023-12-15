// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FORMATCONDITIONTYPE_H
#define ASPOSE_CELLS_FORMATCONDITIONTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Conditional format rule type.
/// </summary>
enum class FormatConditionType {
    /// <summary>
    /// This conditional formatting rule compares a cell value
    /// to a formula calculated result, using an operator.
    /// </summary>
    CellValue = 0x000001,
    /// <summary>
    /// This conditional formatting rule contains a formula to
    /// evaluate. When the formula result is true, the cell is
    /// highlighted.
    /// </summary>
    Expression = 0x000002,
    /// <summary>
    /// This conditional formatting rule highlights cells whose
    /// values fall in the top N or bottom N bracket, as
    /// specified.
    /// </summary>
    Top10 = 0x000004,
    /// <summary>
    /// This conditional formatting rule highlights unique
    /// values in the range.
    /// </summary>
    UniqueValues = 0x000008,
    /// <summary>
    /// This conditional formatting rule highlights duplicated
    /// values.
    /// </summary>
    DuplicateValues = 0x000010,
    /// <summary>
    /// This conditional formatting rule highlights cells
    /// containing given text. Equivalent to using the SEARCH()
    /// sheet function to determine whether the cell contains
    /// the text.
    /// </summary>
    ContainsText = 0x0020,
    /// <summary>
    /// This conditional formatting rule highlights cells that
    /// do not contain given text. Equivalent of using SEARCH()
    /// sheet function to determine whether the cell contains
    /// the text or not.
    /// </summary>
    NotContainsText = 0x000040,
    /// <summary>
    /// This conditional formatting rule highlights cells in the
    /// range that begin with the given text. Equivalent to
    /// using the LEFT() sheet function and comparing values.
    /// </summary>
    BeginsWith = 0x000080,
    /// <summary>
    /// This conditional formatting rule highlights cells ending
    /// with given text. Equivalent to using the RIGHT() sheet
    /// function and comparing values.
    /// </summary>
    EndsWith = 0x000100,
    /// <summary>
    /// This conditional formatting rule highlights cells that
    /// are completely blank. Equivalent of using LEN(TRIM()).
    /// This means that if the cell contains only characters
    /// that TRIM() would remove, then it is considered blank.
    /// An empty cell is also considered blank.
    /// </summary>
    ContainsBlanks = 0x000200,
    /// <summary>
    /// This conditional formatting rule highlights cells that
    /// are not blank. Equivalent of using LEN(TRIM()). This
    /// means that if the cell contains only characters that
    /// TRIM() would remove, then it is considered blank. An
    /// empty cell is also considered blank.
    /// </summary>
    NotContainsBlanks = 0x000400,
    /// <summary>
    /// This conditional formatting rule highlights cells with
    /// formula errors. Equivalent to using ISERROR() sheet
    /// function to determine if there is a formula error.
    /// </summary>
    ContainsErrors = 0x000800,
    /// <summary>
    /// This conditional formatting rule highlights cells
    /// without formula errors. Equivalent to using ISERROR()
    /// sheet function to determine if there is a formula error.
    /// </summary>
    NotContainsErrors = 0x001000,
    /// <summary>
    /// This conditional formatting rule highlights cells
    /// containing dates in the specified time period. The
    /// underlying value of the cell is evaluated, therefore the
    /// cell does not need to be formatted as a date to be
    /// evaluated. For example, with a cell containing the
    /// value 38913 the conditional format shall be applied if
    /// the rule requires a value of 7/14/2006.
    /// </summary>
    TimePeriod = 0x002000,
    /// <summary>
    /// This conditional formatting rule highlights cells that
    /// are above or below the average for all values in the
    /// range.
    /// </summary>
    AboveAverage = 0x004000,
    /// <summary>
    /// This conditional formatting rule creates a gradated
    /// color scale on the cells.
    /// </summary>
    ColorScale = 0x008000,
    /// <summary>
    /// This conditional formatting rule displays a gradated
    /// data bar in the range of cells.
    /// </summary>
    DataBar = 0x010000,
    /// <summary>
    /// This conditional formatting rule applies icons to cells
    /// according to their values.
    /// </summary>
    IconSet = 0x020000,
};

} }

#endif
