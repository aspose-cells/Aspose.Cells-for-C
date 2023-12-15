// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_FILLTYPE_H
#define ASPOSE_CELLS_DRAWING_FILLTYPE_H

namespace Aspose { namespace Cells { namespace Drawing {

/// <summary>
/// Fill format type.
/// </summary>
enum class FillType {
    /// <summary>
    /// Represents automatic formatting type.
    /// </summary>
    Automatic,
    /// <summary>
    /// Represents none formatting type.
    /// </summary>
    None,
    /// <summary>
    /// Solid fill format.
    /// </summary>
    Solid,
    /// <summary>
    /// Gradient fill format.
    /// </summary>
    Gradient,
    /// <summary>
    /// Texture fill format(includes picture fill).
    /// </summary>
    Texture,
    /// <summary>
    /// Pattern fill format.
    /// </summary>
    Pattern,
    /// <summary>
    /// Inherit the fill properties of the group.
    /// </summary>
    Group,
};

} } }

#endif
