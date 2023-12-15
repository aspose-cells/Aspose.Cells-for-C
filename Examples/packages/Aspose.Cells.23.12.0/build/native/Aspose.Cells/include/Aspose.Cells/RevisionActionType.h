// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_REVISIONS_REVISIONACTIONTYPE_H
#define ASPOSE_CELLS_REVISIONS_REVISIONACTIONTYPE_H

namespace Aspose { namespace Cells { namespace Revisions {

/// <summary>
/// Represents the type of revision action.
/// </summary>
enum class RevisionActionType {
    /// <summary>
    /// Add revision.
    /// </summary>
    Add,
    /// <summary>
    /// Delete revision.
    /// </summary>
    Delete,
    /// <summary>
    /// Column delete revision.
    /// </summary>
    DeleteColumn,
    /// <summary>
    /// Row delete revision.
    /// </summary>
    DeleteRow,
    /// <summary>
    /// Column insert revision.
    /// </summary>
    InsertColumn,
    /// <summary>
    /// Row insert revision.
    /// </summary>
    InsertRow,
};

} } }

#endif
