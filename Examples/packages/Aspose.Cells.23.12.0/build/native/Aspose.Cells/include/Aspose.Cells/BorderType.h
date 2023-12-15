// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_BORDERTYPE_H
#define ASPOSE_CELLS_BORDERTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Enumerates the border line and diagonal line types.
/// </summary>
enum class BorderType {
    /// <summary>
    /// Represents bottom border line.
    /// </summary>
    BottomBorder = 8,
    /// <summary>
    /// Represents the diagonal line from top left to right bottom.
    /// </summary>
    DiagonalDown = 0x10,
    /// <summary>
    /// Represents the diagonal line from bottom left to right top.
    /// </summary>
    DiagonalUp = 0x20,
    /// <summary>
    /// Represents left border line.
    /// </summary>
    LeftBorder = 1,
    /// <summary>
    /// Represents right border line exists.
    /// </summary>
    RightBorder = 2,
    /// <summary>
    /// Represents top border line.
    /// </summary>
    TopBorder = 4,
    /// <summary>
    /// Only for dynamic style,such as conditional formatting.
    /// </summary>
    Horizontal = 0x80,
    /// <summary>
    /// Only for dynamic style,such as conditional formatting.
    /// </summary>
    Vertical = 0x40,
};

inline BorderType operator&(BorderType a, BorderType b) {
    return static_cast<BorderType>(static_cast<int>(a) & static_cast<int>(b));
}

inline BorderType operator|(BorderType a, BorderType b) {
    return static_cast<BorderType>(static_cast<int>(a) | static_cast<int>(b));
}

} }

#endif
