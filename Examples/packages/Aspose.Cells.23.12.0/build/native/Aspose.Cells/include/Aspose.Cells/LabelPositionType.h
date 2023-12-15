// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_LABELPOSITIONTYPE_H
#define ASPOSE_CELLS_CHARTS_LABELPOSITIONTYPE_H

namespace Aspose { namespace Cells { namespace Charts {

/// <summary>
/// Represents data label position type.
/// </summary>
enum class LabelPositionType {
    /// <summary>
    /// Applies only to bar, 2d/3d pie charts
    /// </summary>
    Center,
    /// <summary>
    /// Applies only to bar, 2d/3d pie charts
    /// </summary>
    InsideBase,
    /// <summary>
    /// Applies only to bar charts
    /// </summary>
    InsideEnd,
    /// <summary>
    /// Applies only to bar, 2d/3d pie charts
    /// </summary>
    OutsideEnd,
    /// <summary>
    /// Applies only to line charts
    /// </summary>
    Above,
    /// <summary>
    /// Applies only to line charts
    /// </summary>
    Below,
    /// <summary>
    /// Applies only to line charts
    /// </summary>
    Left,
    /// <summary>
    /// Applies only to line charts
    /// </summary>
    Right,
    /// <summary>
    /// Applies only to 2d/3d pie charts
    /// </summary>
    BestFit,
    /// <summary>
    /// User moved the data labels, Only for reading chart from template file.
    /// </summary>
    Moved,
};

} } }

#endif
