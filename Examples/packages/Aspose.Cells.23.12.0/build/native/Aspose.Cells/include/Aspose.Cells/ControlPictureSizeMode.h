// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CONTROLPICTURESIZEMODE_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CONTROLPICTURESIZEMODE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

/// <summary>
/// Represents how to display the picture.
/// </summary>
enum class ControlPictureSizeMode {
    /// <summary>
    /// Crops any part of the picture that is larger than the control's boundaries.
    /// </summary>
    Clip = 0,
    /// <summary>
    /// Stretches the picture to fill the control's area.
    /// This setting distorts the picture in either the horizontal or vertical direction.
    /// </summary>
    Stretch = 1,
    /// <summary>
    /// Enlarges the picture, but does not distort the picture in either the horizontal or vertical direction.
    /// </summary>
    Zoom = 3,
};

} } } }

#endif
