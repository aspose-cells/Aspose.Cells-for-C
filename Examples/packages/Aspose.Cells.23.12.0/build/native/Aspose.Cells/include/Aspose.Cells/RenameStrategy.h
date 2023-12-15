// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENAMESTRATEGY_H
#define ASPOSE_CELLS_RENAMESTRATEGY_H

namespace Aspose { namespace Cells {

/// <summary>
/// Strategy option for duplicate names of columns.
/// </summary>
/// <remarks>When processing data with headers, some scenarios require the headers to be no duplication for all columns.
/// For example, when exporting data to a datatable and the header is required to be taken as datatable's column name,
/// duplicated values of the header are invalid.
/// For such kind of situations, user may determine how to handle them by specifying this strategy.</remarks>
enum class RenameStrategy {
    /// <summary>
    /// Throws exception.
    /// </summary>
    Exception,
    /// <summary>
    /// Named with digit. Duplicated names will become ...1, ...2, etc.
    /// </summary>
    Digit,
    /// <summary>
    /// Named with letter.. Duplicated names will become ...A, ...B, etc.
    /// </summary>
    Letter,
};

} }

#endif
