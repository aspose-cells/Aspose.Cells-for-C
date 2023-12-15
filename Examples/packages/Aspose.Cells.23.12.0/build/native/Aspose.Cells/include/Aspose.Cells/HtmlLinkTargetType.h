// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HTMLLINKTARGETTYPE_H
#define ASPOSE_CELLS_HTMLLINKTARGETTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the type of target attribute in HTML <a/> tag.
/// </summary>
enum class HtmlLinkTargetType {
    /// <summary>
    /// Opens the linked document in a new window or tab
    /// </summary>
    Blank,
    /// <summary>
    /// Opens the linked document in the parent frame
    /// </summary>
    Parent,
    /// <summary>
    /// Opens the linked document in the same frame as it was clicked (this is default)
    /// </summary>
    Self,
    /// <summary>
    /// Opens the linked document in the full body of the window
    /// </summary>
    Top,
};

} }

#endif
