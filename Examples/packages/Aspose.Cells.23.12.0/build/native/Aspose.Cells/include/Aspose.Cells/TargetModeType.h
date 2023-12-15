// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TARGETMODETYPE_H
#define ASPOSE_CELLS_TARGETMODETYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the type of target mode.
/// </summary>
enum class TargetModeType {
    /// <summary>
    /// External link
    /// </summary>
    External,
    /// <summary>
    /// Local and full paths to files or folders.
    /// </summary>
    FilePath,
    /// <summary>
    /// Email.
    /// </summary>
    Email,
    /// <summary>
    /// Link on cell or named range.
    /// </summary>
    CellReference,
};

} }

#endif
