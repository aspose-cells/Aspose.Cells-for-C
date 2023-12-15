// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_TEXTFONTALIGNTYPE_H
#define ASPOSE_CELLS_DRAWING_TEXTS_TEXTFONTALIGNTYPE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

/// <summary>
/// Represents the different types of font alignment.
/// </summary>
enum class TextFontAlignType {
    /// <summary>
    /// When the text flow is horizontal or simple vertical same as fontBaseline
    /// but for other vertical modes same as fontCenter.
    /// </summary>
    Automatic,
    /// <summary>
    /// The letters are anchored to the very bottom of a single line.
    /// </summary>
    Bottom,
    /// <summary>
    /// The letters are anchored to the bottom baseline of a single line.
    /// </summary>
    Baseline,
    /// <summary>
    /// The letters are anchored between the two baselines of a single line.
    /// </summary>
    Center,
    /// <summary>
    /// The letters are anchored to the top baseline of a single line.
    /// </summary>
    Top,
};

} } } }

#endif
