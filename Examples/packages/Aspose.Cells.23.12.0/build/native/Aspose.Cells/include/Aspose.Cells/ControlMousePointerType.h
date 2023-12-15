// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CONTROLMOUSEPOINTERTYPE_H
#define ASPOSE_CELLS_DRAWING_ACTIVEXCONTROLS_CONTROLMOUSEPOINTERTYPE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace ActiveXControls {

/// <summary>
/// Represents the type of icon displayed as the mouse pointer for the control.
/// </summary>
enum class ControlMousePointerType {
    /// <summary>
    /// Standard pointer.
    /// </summary>
    Default = 0x00,
    /// <summary>
    /// Arrow.
    /// </summary>
    Arrow = 0x01,
    /// <summary>
    /// Cross-hair pointer.
    /// </summary>
    Cross = 0x02,
    /// <summary>
    /// I-beam.
    /// </summary>
    IBeam = 0x03,
    /// <summary>
    /// Double arrow pointing northeast and southwest.
    /// </summary>
    SizeNESW = 0x06,
    /// <summary>
    /// Double arrow pointing north and south.
    /// </summary>
    SizeNS = 0x07,
    /// <summary>
    /// Double arrow pointing northwest and southeast.
    /// </summary>
    SizeNWSE = 0x08,
    /// <summary>
    /// Double arrow pointing west and east.
    /// </summary>
    SizeWE = 0x09,
    /// <summary>
    /// Up arrow.
    /// </summary>
    UpArrow = 0x0A,
    /// <summary>
    /// Hourglass.
    /// </summary>
    HourGlass = 0x0B,
    /// <summary>
    /// "Not” symbol (circle with a diagonal line) on top of the object being dragged.
    /// </summary>
    NoDrop = 0x0C,
    /// <summary>
    /// Arrow with an hourglass.
    /// </summary>
    AppStarting = 0x0D,
    /// <summary>
    /// Arrow with a question mark.
    /// </summary>
    Help = 0x0E,
    /// <summary>
    /// "Size-all” cursor (arrows pointing north, south, east, and west).
    /// </summary>
    SizeAll = 0x0F,
    /// <summary>
    /// Uses the icon specified by the MouseIcon property.
    /// </summary>
    Custom = 0x63,
};

} } } }

#endif
