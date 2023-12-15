// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RESOURCELOADINGTYPE_H
#define ASPOSE_CELLS_RESOURCELOADINGTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents how to loading the linked resource.
/// </summary>
enum class ResourceLoadingType {
    /// <summary>
    /// Loads this resource as usual.
    /// </summary>
    Default,
    /// <summary>
    /// Skips loading of this resource.
    /// </summary>
    Skip,
    /// <summary>
    /// Use stream provided by user
    /// </summary>
    UserProvided,
};

} }

#endif
