// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_FILLFORMAT_H
#define ASPOSE_CELLS_DRAWING_FILLFORMAT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/FillPattern.h"
#include "Aspose.Cells/FillPictureType.h"
#include "Aspose.Cells/FillType.h"
#include "Aspose.Cells/GradientColorType.h"
#include "Aspose.Cells/GradientPresetType.h"
#include "Aspose.Cells/GradientStyleType.h"
#include "Aspose.Cells/TextureType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class GradientFill;
    class TextureFill;
    class SolidFill;
    class PatternFill;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class FillFormat_Impl;

/// <summary>
/// Encapsulates the object that represents fill formatting for a shape.
/// </summary>
class FillFormat {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FillFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FillFormat(FillFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FillFormat(const FillFormat& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FillFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FillFormat& operator=(const FillFormat& src);
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
    /// Gets and sets fill type
    /// </summary>
    ASPOSE_CELLS_API FillType GetFillType();
    /// <summary>
    /// Gets and sets fill type
    /// </summary>
    ASPOSE_CELLS_API void SetFillType(FillType value);
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    /// <summary>
    /// Gets <see cref="GradientFill"/> object.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::GradientFill GetGradientFill();
    /// <summary>
    /// Gets <see cref="TextureFill"/> object.
    /// </summary>
    ASPOSE_CELLS_API TextureFill GetTextureFill();
    /// <summary>
    /// Gets <see cref="SolidFill"/> object.
    /// </summary>
    ASPOSE_CELLS_API SolidFill GetSolidFill();
    /// <summary>
    /// Gets <see cref="PatternFill"/> object.
    /// </summary>
    ASPOSE_CELLS_API PatternFill GetPatternFill();
    /// <summary>
    /// Returns the gradient color type for the specified fill.
    /// </summary>
    ASPOSE_CELLS_API GradientColorType GetGradientColorType();
    /// <summary>
    /// Returns the gradient style for the specified fill.
    /// </summary>
    ASPOSE_CELLS_API GradientStyleType GetGradientStyle();
    /// <summary>
    /// Returns the gradient color 1 for the specified fill.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetGradientColor1();
    /// <summary>
    /// Returns the gradient color 2 for the specified fill.
    /// </summary>
    /// <remarks>Only when the gradient color type is GradientColorType.TwoColors, this property is meaningful.</remarks>
    ASPOSE_CELLS_API Aspose::Cells::Color GetGradientColor2();
    /// <summary>
    /// Returns the gradient degree for the specified fill.
    /// Only applies for Excel 2007.
    /// </summary>
    /// <remarks>Can only be a value from 0.0 (dark) through 1.0 (light).</remarks>
    ASPOSE_CELLS_API double GetGradientDegree();
    /// <summary>
    /// Returns the gradient variant for the specified fill.
    /// Only applies for Excel 2007.
    /// </summary>
    /// <remarks>Can only be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</remarks>
    ASPOSE_CELLS_API int32_t GetGradientVariant();
    /// <summary>
    /// Returns the gradient preset color for the specified fill.
    /// </summary>
    ASPOSE_CELLS_API GradientPresetType GetPresetColor();
    /// <summary>
    /// Sets the specified fill to a one-color gradient.
    /// Only applies for Excel 2007.
    /// </summary>
    /// <param name="color">One gradient color.</param>
    /// <param name="degree">The gradient degree. Can be a value from 0.0 (dark) through 1.0 (light).</param>
    /// <param name="style">Gradient shading style.</param>
    /// <param name="variant">The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
    ASPOSE_CELLS_API void SetOneColorGradient(const Aspose::Cells::Color& color, double degree, GradientStyleType style, int32_t variant);
    /// <summary>
    /// Sets the specified fill to a two-color gradient.
    /// Only applies for Excel 2007.
    /// </summary>
    /// <param name="color1">One gradient color.</param>
    /// <param name="color2">Two gradient color.</param>
    /// <param name="style">Gradient shading style.</param>
    /// <param name="variant">The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
    ASPOSE_CELLS_API void SetTwoColorGradient(const Aspose::Cells::Color& color1, const Aspose::Cells::Color& color2, GradientStyleType style, int32_t variant);
    /// <summary>
    /// Sets the specified fill to a two-color gradient.
    /// Only applies for Excel 2007.
    /// </summary>
    /// <param name="color1">One gradient color.</param>
    /// <param name="transparency1">The degree of transparency of the color1 as a value from 0.0 (opaque) through 1.0 (clear).</param>
    /// <param name="color2">Two gradient color.</param>
    /// <param name="transparency2">The degree of transparency of the color2 as a value from 0.0 (opaque) through 1.0 (clear).</param>
    /// <param name="style">Gradient shading style.</param>
    /// <param name="variant">The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
    ASPOSE_CELLS_API void SetTwoColorGradient(const Aspose::Cells::Color& color1, double transparency1, const Aspose::Cells::Color& color2, double transparency2, GradientStyleType style, int32_t variant);
    /// <summary>
    /// Sets the specified fill to a preset-color gradient.
    /// Only applies for Excel 2007.
    /// </summary>
    /// <param name="presetColor">Preset color type</param>
    /// <param name="style">Gradient shading style.</param>
    /// <param name="variant">The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
    ASPOSE_CELLS_API void SetPresetColorGradient(GradientPresetType presetColor, GradientStyleType style, int32_t variant);
    /// <summary>
    /// Represents the texture type for the specified fill.
    /// </summary>
    ASPOSE_CELLS_API TextureType GetTexture();
    /// <summary>
    /// Represents the texture type for the specified fill.
    /// </summary>
    ASPOSE_CELLS_API void SetTexture(TextureType value);
    /// <summary>
    /// Represents an area's display pattern.
    /// </summary>
    ASPOSE_CELLS_API FillPattern GetPattern();
    /// <summary>
    /// Represents an area's display pattern.
    /// </summary>
    ASPOSE_CELLS_API void SetPattern(FillPattern value);
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
    /// Gets and sets the picture image data.
    /// </summary>
    /// <remarks>If the fill format is not custom texture format, returns null.</remarks>
    ASPOSE_CELLS_API Vector<uint8_t> GetImageData();
    /// <summary>
    /// Gets and sets the picture image data.
    /// </summary>
    /// <remarks>If the fill format is not custom texture format, returns null.</remarks>
    ASPOSE_CELLS_API void SetImageData(const Vector<uint8_t>& value);
    /// <summary>
    /// Gets the hash code.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t GetHashCode();
    
};

} } }

#endif
