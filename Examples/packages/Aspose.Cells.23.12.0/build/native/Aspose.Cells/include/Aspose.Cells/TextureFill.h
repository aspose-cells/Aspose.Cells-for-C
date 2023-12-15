// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTUREFILL_H
#define ASPOSE_CELLS_DRAWING_TEXTUREFILL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/FillPictureType.h"
#include "Aspose.Cells/TextureType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class PicFormatOption;
    class TilePicOption;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class TextureFill_Impl;

/// <summary>
/// Encapsulates the object that represents texture fill format
/// </summary>
class TextureFill {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextureFill_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextureFill(TextureFill_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextureFill(const TextureFill& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextureFill();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextureFill& operator=(const TextureFill& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// Gets and sets the texture type
    /// </summary>
    ASPOSE_CELLS_API TextureType GetType();
    /// <summary>
    /// Gets and sets the texture type
    /// </summary>
    ASPOSE_CELLS_API void SetType(TextureType value);
    /// <summary>
    /// Gets and sets the image data of the fill.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetImageData();
    /// <summary>
    /// Gets and sets the image data of the fill.
    /// </summary>
    ASPOSE_CELLS_API void SetImageData(const Vector<uint8_t>& value);
    /// <summary>
    /// Indicates whether tile picture as texture.
    /// </summary>
    ASPOSE_CELLS_API bool IsTiling();
    /// <summary>
    /// Indicates whether tile picture as texture.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTiling(bool value);
    /// <summary>
    /// Gets or sets picture format option.
    /// </summary>
    ASPOSE_CELLS_API PicFormatOption GetPicFormatOption();
    /// <summary>
    /// Gets or sets picture format option.
    /// </summary>
    ASPOSE_CELLS_API void SetPicFormatOption(const PicFormatOption& value);
    /// <summary>
    /// Gets or sets tile picture option.
    /// </summary>
    ASPOSE_CELLS_API TilePicOption GetTilePicOption();
    /// <summary>
    /// Gets or sets tile picture option.
    /// </summary>
    ASPOSE_CELLS_API void SetTilePicOption(const TilePicOption& value);
    /// <summary>
    /// Gets and sets the picture format type.
    /// </summary>
    ASPOSE_CELLS_API FillPictureType GetPictureFormatType();
    /// <summary>
    /// Gets and sets the picture format type.
    /// </summary>
    ASPOSE_CELLS_API void SetPictureFormatType(FillPictureType value);
    /// <summary>
    /// Gets and sets the picture format scale.
    /// </summary>
    ASPOSE_CELLS_API double GetScale();
    /// <summary>
    /// Gets and sets the picture format scale.
    /// </summary>
    ASPOSE_CELLS_API void SetScale(double value);
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    
};

} } }

#endif
