// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_MSOFILLFORMAT_H
#define ASPOSE_CELLS_DRAWING_MSOFILLFORMAT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/GradientStyleType.h"
#include "Aspose.Cells/TextureType.h"

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class MsoFillFormat_Impl;

/// <summary>
/// Represents fill formatting for a shape.
/// </summary>
class MsoFillFormat {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    MsoFillFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API MsoFillFormat(MsoFillFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API MsoFillFormat(const MsoFillFormat& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~MsoFillFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API MsoFillFormat& operator=(const MsoFillFormat& src);
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
    /// Gets and sets the fill fore color.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetForeColor();
    /// <summary>
    /// Gets and sets the fill fore color.
    /// </summary>
    ASPOSE_CELLS_API void SetForeColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Returns or sets the degree of transparency of the specified fill as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Returns or sets the degree of transparency of the specified fill as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    /// <summary>
    /// Gets and sets the file back color.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetBackColor();
    /// <summary>
    /// Gets and sets the file back color.
    /// </summary>
    ASPOSE_CELLS_API void SetBackColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the Texture and Picture fill data.
    /// </summary>
    ASPOSE_CELLS_API Vector<uint8_t> GetImageData();
    /// <summary>
    /// Gets and sets the Texture and Picture fill data.
    /// </summary>
    ASPOSE_CELLS_API void SetImageData(const Vector<uint8_t>& value);
    /// <summary>
    /// Sets the specified fill to a one-color gradient.
    /// </summary>
    /// <param name="color">One gradient color.</param>
    /// <param name="degree">The gradient degree. Can be a value from 0.0 (dark) through 1.0 (light).</param>
    /// <param name="style">Gradient shading style.</param>
    /// <param name="variant">The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
    ASPOSE_CELLS_API void SetOneColorGradient(const Aspose::Cells::Color& color, double degree, GradientStyleType style, int32_t variant);
    /// <summary>
    /// Gets the texture fill type.
    /// </summary>
    ASPOSE_CELLS_API TextureType GetTexture();
    /// <summary>
    /// Indicates whether there is fill.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Indicates whether there is fill.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    
};

} } }

#endif
