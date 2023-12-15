// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PANESTATETYPE_H
#define ASPOSE_CELLS_PANESTATETYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents state of the sheet's pane.
/// </summary>
enum class PaneStateType {
    /// <summary>
    /// Panes are frozen, but were not before being frozen.
    /// </summary>
    Frozen,
    /// <summary>
    /// Panes are frozen and were split before being frozen.
    /// </summary>
    FrozenSplit,
    /// <summary>
    /// Panes are split, but not frozen.
    /// </summary>
    Split,
    /// <summary>
    /// Panes are not frozen and not split.
    /// </summary>
    Normal,
};

} }

#endif
