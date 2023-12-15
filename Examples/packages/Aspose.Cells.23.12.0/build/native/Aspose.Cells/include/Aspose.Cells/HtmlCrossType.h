// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HTMLCROSSTYPE_H
#define ASPOSE_CELLS_HTMLCROSSTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents five types of html cross string.
/// </summary>
enum class HtmlCrossType {
    /// <summary>
    /// Display like MS Excel,depends on the next cell.
    /// If the next cell is null,the string will cross,or it will be truncated
    /// </summary>
    Default,
    /// <summary>
    /// Display the string like MS Excel exporting html.
    /// </summary>
    MSExport,
    /// <summary>
    /// Display HTML cross string, this performance for creating large html files will be more than ten times faster than setting the value to Default or FitToCell.
    /// </summary>
    Cross,
    /// <summary>
    /// Display HTML cross string and hide the right string when the texts overlap.
    /// </summary>
    CrossHideRight,
    /// <summary>
    /// Only displaying the string within the width of cell.
    /// </summary>
    FitToCell,
};

} }

#endif
