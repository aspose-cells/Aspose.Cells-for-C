// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLSCOLOR_H
#define ASPOSE_CELLS_CELLSCOLOR_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/ColorType.h"

namespace Aspose { namespace Cells {
    class ThemeColor;
} }

namespace Aspose { namespace Cells {

class CellsColor_Impl;

/// <summary>
/// Represents all types of color.
/// </summary>
class CellsColor {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CellsColor_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CellsColor(CellsColor_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CellsColor(const CellsColor& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CellsColor();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CellsColor& operator=(const CellsColor& src);
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
    /// Gets and set the color which should apply to cell or shape.
    /// </summary>
    /// <remarks>
    /// The expression of the color of the cell and the shape is different.
    /// For example: the theme color with same tint value will be not same in the cell and the shape.
    /// </remarks>
    ASPOSE_CELLS_API bool IsShapeColor();
    /// <summary>
    /// Gets and set the color which should apply to cell or shape.
    /// </summary>
    /// <remarks>
    /// The expression of the color of the cell and the shape is different.
    /// For example: the theme color with same tint value will be not same in the cell and the shape.
    /// </remarks>
    ASPOSE_CELLS_API void SetIsShapeColor(bool value);
    /// <summary>
    /// The color type.
    /// </summary>
    ASPOSE_CELLS_API ColorType GetType();
    /// <summary>
    /// Gets the theme color. Only applies for theme color type.
    /// </summary>
    ASPOSE_CELLS_API ThemeColor GetThemeColor();
    /// <summary>
    /// Gets the theme color. Only applies for theme color type.
    /// </summary>
    ASPOSE_CELLS_API void SetThemeColor(const ThemeColor& value);
    /// <summary>
    /// Gets and sets the color index in the color palette. Only applies of indexed color.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColorIndex();
    /// <summary>
    /// Gets and sets the color index in the color palette. Only applies of indexed color.
    /// </summary>
    ASPOSE_CELLS_API void SetColorIndex(int32_t value);
    /// <summary>
    /// Gets and sets the RGB color.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Gets and sets the RGB color.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the color from a 32-bit ARGB value.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetArgb();
    /// <summary>
    /// Gets and sets the color from a 32-bit ARGB value.
    /// </summary>
    ASPOSE_CELLS_API void SetArgb(int32_t value);
    /// <summary>
    /// Gets and sets transparency as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Gets and sets transparency as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    /// <summary>
    /// Set the tint of the shape color
    /// </summary>
    /// <param name="tint"></param>
    ASPOSE_CELLS_API void SetTintOfShapeColor(double tint);
    
};

} }

#endif
