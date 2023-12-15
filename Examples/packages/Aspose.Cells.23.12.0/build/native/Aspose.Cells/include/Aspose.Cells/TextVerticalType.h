// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_TEXTVERTICALTYPE_H
#define ASPOSE_CELLS_DRAWING_TEXTS_TEXTVERTICALTYPE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

/// <summary>
/// Represents the text direct type.
/// </summary>
enum class TextVerticalType {
    /// <summary>
    /// East Asian Vertical display.
    /// </summary>
    Vertical,
    /// <summary>
    /// Horizontal text.
    /// </summary>
    Horizontal,
    /// <summary>
    /// Displayed vertical and the text flows top down then LEFT to RIGHT
    /// </summary>
    VerticalLeftToRight,
    /// <summary>
    /// Each line is 90 degrees rotated clockwise
    /// </summary>
    Vertical90,
    /// <summary>
    /// Each line is 270 degrees rotated clockwise
    /// </summary>
    Vertical270,
    /// <summary>
    /// Determines if all of the text is vertical
    /// </summary>
    Stacked,
    /// <summary>
    /// Specifies that vertical WordArt should be shown from right to left rather than left to right.
    /// </summary>
    StackedRightToLeft,
};

} } } }

#endif
