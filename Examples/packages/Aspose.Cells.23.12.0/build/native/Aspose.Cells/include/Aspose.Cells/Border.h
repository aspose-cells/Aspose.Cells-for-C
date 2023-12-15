// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_BORDER_H
#define ASPOSE_CELLS_BORDER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/CellBorderType.h"

namespace Aspose { namespace Cells {
    class ThemeColor;
} }

namespace Aspose { namespace Cells {

class Border_Impl;

/// <summary>
/// Encapsulates the object that represents the cell border.
/// </summary>
class Border {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Border_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Border(Border_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Border(const Border& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Border();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Border& operator=(const Border& src);
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
    /// Gets and sets the theme color of the border.
    /// </summary>
    ASPOSE_CELLS_API ThemeColor GetThemeColor();
    /// <summary>
    /// Gets and sets the theme color of the border.
    /// </summary>
    ASPOSE_CELLS_API void SetThemeColor(const ThemeColor& value);
    /// <summary>
    /// Gets or sets the <see cref="System.Drawing.Color"/> of the border.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Gets or sets the <see cref="System.Drawing.Color"/> of the border.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& value);
    /// <summary>
    /// Gets and sets the color with a 32-bit ARGB value.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetArgbColor();
    /// <summary>
    /// Gets and sets the color with a 32-bit ARGB value.
    /// </summary>
    ASPOSE_CELLS_API void SetArgbColor(int32_t value);
    /// <summary>
    /// Gets or sets the cell border type.
    /// </summary>
    ASPOSE_CELLS_API CellBorderType GetLineStyle();
    /// <summary>
    /// Gets or sets the cell border type.
    /// </summary>
    ASPOSE_CELLS_API void SetLineStyle(CellBorderType value);
    
};

} }

#endif
