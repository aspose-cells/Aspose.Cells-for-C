// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_MEMORYSETTING_H
#define ASPOSE_CELLS_MEMORYSETTING_H

namespace Aspose { namespace Cells {

/// <summary>
/// Memory usage options.
/// </summary>
enum class MemorySetting {
    /// <summary>
    /// Default option for cells model.
    /// </summary>
    /// <remarks>This option is applied for all versions.</remarks>
    Normal,
    /// <summary>
    /// Memory performance preferrable.
    /// With this option the data will be held in compact format so for common scenarios it may give lower memory cost.
    /// However, this option also may degrade R/W performance a bit in some special cases.
    /// </summary>
    /// <remarks>This option is available since v 8.0.0.</remarks>
    MemoryPreference,
};

} }

#endif
