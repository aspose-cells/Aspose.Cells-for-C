// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_GRADIENTFILL_H
#define ASPOSE_CELLS_DRAWING_GRADIENTFILL_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/GradientDirectionType.h"
#include "Aspose.Cells/GradientFillType.h"
#include "Aspose.Cells/GradientStyleType.h"
#include "Aspose.Cells/PresetThemeGradientType.h"
#include "Aspose.Cells/ThemeColorType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class GradientStopCollection;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class GradientFill_Impl;

/// <summary>
/// Represents the gradient fill.
/// </summary>
class GradientFill {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    GradientFill_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API GradientFill(GradientFill_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API GradientFill(const Aspose::Cells::Drawing::GradientFill& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~GradientFill();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Drawing::GradientFill& operator=(const Aspose::Cells::Drawing::GradientFill& src);
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
    /// Represents the gradient stop collection.
    /// </summary>
    ASPOSE_CELLS_API GradientStopCollection GetGradientStops();
    /// <summary>
    /// Set the gradient fill type and direction.
    /// </summary>
    /// <param name="type">Gradient fill type.</param>
    /// <param name="angle">The angle. Only applies for GradientFillType.Linear. </param>
    /// <param name="direction">The direction type. Only applies for GradientFillType.Radial and GradientFillType.Rectangle.</param>
    ASPOSE_CELLS_API void SetGradient(GradientFillType type, double angle, GradientDirectionType direction);
    /// <summary>
    /// Gets the gradient fill type.
    /// </summary>
    ASPOSE_CELLS_API GradientFillType GetFillType();
    /// <summary>
    /// Gets the gradient direction type.
    /// </summary>
    ASPOSE_CELLS_API GradientDirectionType GetDirectionType();
    /// <summary>
    /// The angle of linear fill.
    /// </summary>
    ASPOSE_CELLS_API float GetAngle();
    /// <summary>
    /// The angle of linear fill.
    /// </summary>
    ASPOSE_CELLS_API void SetAngle(float value);
    /// <summary>
    /// Sets preset theme gradient fill.
    /// </summary>
    /// <param name="gradientType">The preset gradient type.</param>
    /// <param name="themeColorType">The theme color type.</param>
    ASPOSE_CELLS_API void SetPresetThemeGradient(PresetThemeGradientType gradientType, ThemeColorType themeColorType);
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
    
};

} } }

#endif
