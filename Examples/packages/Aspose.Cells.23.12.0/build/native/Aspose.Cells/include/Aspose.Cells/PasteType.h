// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PASTETYPE_H
#define ASPOSE_CELLS_PASTETYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the paste special type.
/// </summary>
enum class PasteType {
    /// <summary>
    /// Copies all data of the range.
    /// </summary>
    All,
    /// <summary>
    /// It works as "All" behavior of MS Excel.
    /// </summary>
    Default,
    /// <summary>
    /// Copies all data of the range without the range.
    /// </summary>
    AllExceptBorders,
    /// <summary>
    /// It works as "All except borders" behavior of MS Excel.
    /// </summary>
    DefaultExceptBorders,
    /// <summary>
    /// Only copies the widths of the range.
    /// </summary>
    ColumnWidths,
    /// <summary>
    /// Only copies the heights of the range.
    /// </summary>
    RowHeights,
    /// <summary>
    /// </summary>
    Comments,
    /// <summary>
    /// </summary>
    Formats,
    /// <summary>
    /// </summary>
    Formulas,
    /// <summary>
    /// </summary>
    FormulasAndNumberFormats,
    /// <summary>
    /// </summary>
    Validation,
    /// <summary>
    /// </summary>
    Values,
    /// <summary>
    /// </summary>
    ValuesAndFormats,
    /// <summary>
    /// </summary>
    ValuesAndNumberFormats,
};

} }

#endif
