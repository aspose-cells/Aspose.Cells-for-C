// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_UPDATELINKSTYPE_H
#define ASPOSE_CELLS_UPDATELINKSTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents how to update links to other workbooks when the workbook is opened.
/// </summary>
enum class UpdateLinksType {
    /// <summary>
    /// Prompt user to update.
    /// </summary>
    UserSet = 0,
    /// <summary>
    /// Do not update, and do not prompt user.
    /// </summary>
    Never = 1,
    /// <summary>
    /// Always update.
    /// </summary>
    Always,
};

} }

#endif
