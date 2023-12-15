// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_THEMECOLOR_H
#define ASPOSE_CELLS_THEMECOLOR_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/ThemeColorType.h"

namespace Aspose { namespace Cells {

class ThemeColor_Impl;

/// <summary>
/// Represents a theme color.
/// </summary>
class ThemeColor {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ThemeColor_Impl* _impl;
    
public:
    /// <summary>
    /// </summary>
    /// <param name="type">The theme type.</param>
    /// <param name="tint">The tint value.</param>
    ASPOSE_CELLS_API ThemeColor(ThemeColorType type, double tint);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ThemeColor(ThemeColor_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ThemeColor(const ThemeColor& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ThemeColor();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ThemeColor& operator=(const ThemeColor& src);
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
    /// Gets and sets the theme type.
    /// </summary>
    ASPOSE_CELLS_API ThemeColorType GetColorType();
    /// <summary>
    /// Gets and sets the theme type.
    /// </summary>
    ASPOSE_CELLS_API void SetColorType(ThemeColorType value);
    /// <summary>
    /// Gets and sets the tint value.
    /// </summary>
    /// <remarks>
    /// The tint value is stored as a double from -1.0 .. 1.0, where -1.0 means 100% darken
    /// and 1.0 means 100% lighten. Also, 0.0 means no change.
    /// </remarks>
    ASPOSE_CELLS_API double GetTint();
    /// <summary>
    /// Gets and sets the tint value.
    /// </summary>
    /// <remarks>
    /// The tint value is stored as a double from -1.0 .. 1.0, where -1.0 means 100% darken
    /// and 1.0 means 100% lighten. Also, 0.0 means no change.
    /// </remarks>
    ASPOSE_CELLS_API void SetTint(double value);
    
};

} }

#endif
