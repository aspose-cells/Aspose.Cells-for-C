// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_ERRORCHECKTYPE_H
#define ASPOSE_CELLS_ERRORCHECKTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents all error check type.
/// </summary>
enum class ErrorCheckType {
    /// <summary>
    /// Ignore errors when cells contain formulas that result in an error.
    /// </summary>
    EvaluationError = 0x00000001,
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use ErrorCheckType.EvaluationError enum.
    /// This method will be removed 12 months later since October 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.</remarks>
    /// @deprecated Use ErrorCheckType.EvaluationError instead.
    Calc = 0x00000001,
    /// <summary>
    /// Ignore errors when formulas refer to empty cells.
    /// </summary>
    EmptyCellRef = 0x00000002,
    /// <summary>
    /// Ignore errors when numbers are formatted as text or are preceded by an apostrophe
    /// </summary>
    NumberStoredAsText = 0x00000004,
    /// <summary>
    /// Ignore errors when numbers are formatted as text or are preceded by an apostrophe
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use ErrorCheckType.NumberStoredAsText enum.
    /// This method will be removed 12 months later since October 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.</remarks>
    /// @deprecated Use ErrorCheckType.NumberStoredAsText instead.
    TextNumber = 0x00000004,
    /// <summary>
    /// Ignore errors when formulas omit certain cells in a region.
    /// </summary>
    InconsistRange = 0x00000008,
    /// <summary>
    /// Ignore errors when a formula in a region of your worksheet differs from other formulas in the same region.
    /// </summary>
    InconsistFormula = 0x00000010,
    /// <summary>
    /// Ignore errors when formulas contain text formatted cells with years represented as 2 digits.
    /// </summary>
    TwoDigitTextYear = 0x00000020,
    /// <summary>
    /// Ignore errors when formulas contain text formatted cells with years represented as 2 digits.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use ErrorCheckType.TwoDigitTextYear enum.
    /// This method will be removed 12 months later since October 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.</remarks>
    /// @deprecated Use ErrorCheckType.TwoDigitTextYear instead.
    TextDate = 0x00000020,
    /// <summary>
    /// Ignore errors when unlocked cells contain formulas.
    /// </summary>
    UnlockedFormula = 0x00000040,
    /// <summary>
    /// Ignore errors when unlocked cells contain formulas.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use ErrorCheckType.UnproctedFormula enum.
    /// This method will be removed 12 months later since October 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.</remarks>
    /// @deprecated Use ErrorCheckType.UnproctedFormula instead.
    UnproctedFormula = 0x00000040,
    /// <summary>
    /// Ignore errors when a cell's value in a Table does not comply with the Data Validation rules specified.
    /// </summary>
    TableDataValidation = 0x00000080,
    /// <summary>
    /// Ignore errors when a cell's value in a Table does not comply with the Data Validation rules specified.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use ErrorCheckType.TableDataValidation enum.
    /// This method will be removed 12 months later since October 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.</remarks>
    /// @deprecated Use ErrorCheckType.TableDataValidation instead.
    Validation = 0x00000080,
    /// <summary>
    /// Ignore errors when cells contain a value different from a calculated column formula.
    /// </summary>
    CalculatedColumn,
};

} }

#endif
