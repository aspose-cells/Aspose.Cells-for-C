// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTOVERFLOWTYPE_H
#define ASPOSE_CELLS_DRAWING_TEXTOVERFLOWTYPE_H

namespace Aspose { namespace Cells { namespace Drawing {

/// <summary>
/// Represents the way the text vertical or horizontal overflow.
/// </summary>
enum class TextOverflowType {
    /// <summary>
    /// Pay attention to top and bottom barriers.
    /// Provide no indication that there is text which is not visible.
    /// </summary>
    Clip = 0,
    /// <summary>
    /// Pay attention to top and bottom barriers.
    /// Use an ellipsis to denote that there is text which is not visible.
    /// Only for vertical overflow.
    /// </summary>
    Ellipsis = 1,
    /// <summary>
    /// Overflow the text and pay no attention to top and bottom barriers.
    /// </summary>
    Overflow = 2,
};

} } }

#endif
