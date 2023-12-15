// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_VISIBILITYTYPE_H
#define ASPOSE_CELLS_VISIBILITYTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the states for sheet visibility.
/// </summary>
enum class VisibilityType {
    /// <summary>
    /// Indicates the sheet is visible.
    /// </summary>
    Visible = 0,
    /// <summary>
    /// Indicates the sheet is hidden, but can be shown by the user via the user interface.
    /// </summary>
    Hidden = 1,
    /// <summary>
    /// Indicates the sheet is hidden and cannot be shown in the user interface (UI).
    /// This state is only available programmatically.
    /// </summary>
    VeryHidden = 2,
};

} }

#endif
