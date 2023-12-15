// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_IMAGETYPE_H
#define ASPOSE_CELLS_DRAWING_IMAGETYPE_H

namespace Aspose { namespace Cells { namespace Drawing {

/// <summary>
/// Specifies the type (format) of an image.
/// </summary>
enum class ImageType {
    /// <summary>
    /// An unknown image type.
    /// </summary>
    Unknown = 0,
    /// <summary>
    /// Windows Enhanced Metafile.
    /// </summary>
    Emf = 2,
    /// <summary>
    /// Windows Metafile.
    /// </summary>
    Wmf = 3,
    /// <summary>
    /// Macintosh PICT.
    /// </summary>
    Pict = 4,
    /// <summary>
    /// JPEG JFIF.
    /// </summary>
    Jpeg = 5,
    /// <summary>
    /// Portable Network Graphics.
    /// </summary>
    Png = 6,
    /// <summary>
    /// Windows Bitmap
    /// </summary>
    Bmp = 7,
    /// <summary>
    /// Gif
    /// </summary>
    Gif = 66,
    /// <summary>
    /// Tiff
    /// Tiff is not supported in the C++ version.
    /// </summary>
    Tiff = 67,
    /// <summary>
    /// Svg
    /// </summary>
    Svg = 68,
    /// <summary>
    /// Svm
    /// </summary>
    Svm = 69,
    /// <summary>
    /// glTF
    /// </summary>
    Gltf = 70,
    /// <summary>
    /// Windows Enhanced Metafile which is more compatible with Office.
    /// </summary>
    OfficeCompatibleEmf = 71,
    /// <summary>
    /// Weppy image format
    /// </summary>
    WebP = 72,
};

} } }

#endif
