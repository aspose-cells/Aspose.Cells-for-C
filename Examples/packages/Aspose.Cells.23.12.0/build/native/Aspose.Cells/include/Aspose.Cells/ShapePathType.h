// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPEPATHTYPE_H
#define ASPOSE_CELLS_DRAWING_SHAPEPATHTYPE_H

namespace Aspose { namespace Cells { namespace Drawing {

/// <summary>
/// Represents path segment type.
/// </summary>
enum class ShapePathType {
    /// <summary>
    /// Straight line segment
    /// </summary>
    LineTo = 0,
    /// <summary>
    /// Cubic Bezier curve
    /// </summary>
    CubicBezierCurveTo,
    /// <summary>
    /// Start a new path
    /// </summary>
    MoveTo,
    /// <summary>
    /// If the starting POINT and the end POINT are not the same, a single
    /// straight line is drawn to connect the starting POINT and ending POINT of the path.
    /// </summary>
    Close,
    /// <summary>
    /// The end of the current path
    /// </summary>
    End,
    /// <summary>
    /// Escape
    /// </summary>
    Escape,
    /// <summary>
    /// An arc
    /// </summary>
    ArcTo,
    /// <summary>
    /// Unknown
    /// </summary>
    Unknown,
};

} } }

#endif
