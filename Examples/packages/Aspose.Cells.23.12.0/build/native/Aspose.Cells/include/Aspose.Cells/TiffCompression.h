// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_TIFFCOMPRESSION_H
#define ASPOSE_CELLS_RENDERING_TIFFCOMPRESSION_H

namespace Aspose { namespace Cells { namespace Rendering {

/// <summary>
/// Specifies what type of compression to apply when saving images into TIFF format file.
/// </summary>
enum class TiffCompression {
    /// <summary>
    /// Specifies no compression.
    /// </summary>
    CompressionNone = 0,
    /// <summary>
    /// Specifies the RLE compression scheme.
    /// </summary>
    CompressionRle = 1,
    /// <summary>
    /// Specifies the LZW compression scheme.
    /// </summary>
    CompressionLZW = 2,
    /// <summary>
    /// Specifies the CCITT3 compression scheme.
    /// </summary>
    CompressionCCITT3 = 3,
    /// <summary>
    /// Specifies the CCITT4 compression scheme.
    /// </summary>
    CompressionCCITT4 = 4,
};

} } }

#endif
