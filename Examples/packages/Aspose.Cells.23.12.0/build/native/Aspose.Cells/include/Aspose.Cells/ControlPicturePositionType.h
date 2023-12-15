// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CONTROLPICTUREPOSITIONTYPE_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CONTROLPICTUREPOSITIONTYPE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

/// <summary>
/// Represents the location of the control's picture relative to its caption.
/// </summary>
enum class ControlPicturePositionType {
    /// <summary>
    /// The picture appears to the left of the caption.
    /// The caption is aligned with the top of the picture.
    /// </summary>
    LeftTop = 0x00020000,
    /// <summary>
    /// The picture appears to the left of the caption.
    /// The caption is centered relative to the picture.
    /// </summary>
    LeftCenter = 0x00050003,
    /// <summary>
    /// The picture appears to the left of the caption.
    /// The caption is aligned with the bottom of the picture.
    /// </summary>
    LeftBottom = 0x00080006,
    /// <summary>
    /// The picture appears to the right of the caption.
    /// The caption is aligned with the top of the picture.
    /// </summary>
    RightTop = 0x00000002,
    /// <summary>
    /// The picture appears to the right of the caption.
    /// The caption is centered relative to the picture.
    /// </summary>
    RightCenter = 0x00030005,
    /// <summary>
    /// The picture appears to the right of the caption.
    /// The caption is aligned with the bottom of the picture.
    /// </summary>
    RightBottom = 0x00060008,
    /// <summary>
    /// The picture appears above the caption.
    /// The caption is aligned with the left edge of the picture.
    /// </summary>
    AboveLeft = 0x00060000,
    /// <summary>
    /// The picture appears above the caption.
    /// The caption is centered below the picture.
    /// </summary>
    AboveCenter = 0x00070001,
    /// <summary>
    /// The picture appears above the caption.
    /// The caption is aligned with the right edge of the picture.
    /// </summary>
    AboveRight = 0x00080002,
    /// <summary>
    /// The picture appears below the caption.
    /// The caption is aligned with the left edge of the picture.
    /// </summary>
    BelowLeft = 0x00000006,
    /// <summary>
    /// The picture appears below the caption.
    /// The caption is centered above the picture.
    /// </summary>
    BelowCenter = 0x00010007,
    /// <summary>
    /// The picture appears below the caption.
    /// The caption is aligned with the right edge of the picture.
    /// </summary>
    BelowRight = 0x00020008,
    /// <summary>
    /// The picture appears in the center of the control.
    /// The caption is centered horizontally and vertically on top of the picture.
    /// </summary>
    Center = 0x00040004,
};

} } } }

#endif
