// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_COLORTYPE_H
#define ASPOSE_CELLS_COLORTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents all color type
/// </summary>
enum class ColorType {
    /// <summary>
    /// Automatic color.
    /// </summary>
    Automatic,
    /// <summary>
    /// It's automatic color,but the displayed color depends the setting of the OS System.
    /// </summary>
    /// <remarks>
    /// Not supported.
    /// </remarks>
    AutomaticIndex,
    /// <summary>
    /// The RGB color.
    /// </summary>
    RGB,
    /// <summary>
    /// The color index in the color palette.
    /// </summary>
    IndexedColor,
    /// <summary>
    /// The theme color.
    /// </summary>
    Theme,
};

} }

#endif
