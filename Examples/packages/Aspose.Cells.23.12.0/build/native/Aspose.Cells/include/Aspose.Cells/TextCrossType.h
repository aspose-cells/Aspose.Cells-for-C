// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TEXTCROSSTYPE_H
#define ASPOSE_CELLS_TEXTCROSSTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Enumerates displaying text type when the text width is larger than cell width.
/// </summary>
enum class TextCrossType {
    /// <summary>
    /// Display text like in Microsoft Excel.
    /// </summary>
    Default = 1,
    /// <summary>
    /// Display all the text by crossing other cells and keep text of crossed cells.
    /// </summary>
    CrossKeep = 2,
    /// <summary>
    /// Display all the text by crossing other cells and override text of crossed cells.
    /// </summary>
    CrossOverride = 3,
    /// <summary>
    /// Only display the text within the width of cell.
    /// </summary>
    StrictInCell = 4,
};

} }

#endif
