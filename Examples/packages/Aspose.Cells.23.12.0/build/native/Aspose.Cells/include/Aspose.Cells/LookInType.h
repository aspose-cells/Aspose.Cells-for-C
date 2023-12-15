// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_LOOKINTYPE_H
#define ASPOSE_CELLS_LOOKINTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents look in type.
/// </summary>
enum class LookInType {
    /// <summary>
    /// If the cell contains a formula, find object from formula, else find it from the value.
    /// </summary>
    Formulas,
    /// <summary>
    /// Only find object from the formatted values.
    /// </summary>
    Values,
    /// <summary>
    /// Only find object from the values of cells which do not contains formula.
    /// </summary>
    ValuesExcludeFormulaCell,
    /// <summary>
    /// Only find object from the comments.
    /// </summary>
    Comments,
    /// <summary>
    /// Only find object from formulas.
    /// </summary>
    OnlyFormulas,
    /// <summary>
    /// Only find object from the original values.
    /// </summary>
    OriginalValues,
};

} }

#endif
