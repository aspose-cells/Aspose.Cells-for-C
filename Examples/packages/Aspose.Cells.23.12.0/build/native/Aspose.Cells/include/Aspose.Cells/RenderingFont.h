// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_RENDERINGFONT_H
#define ASPOSE_CELLS_RENDERING_RENDERINGFONT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Color.h"

namespace Aspose { namespace Cells { namespace Rendering {

using namespace Aspose::Cells;

class RenderingFont_Impl;

/// <summary>
/// Font for rendering.
/// </summary>
class RenderingFont {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    RenderingFont_Impl* _impl;
    
public:
    /// <summary>
    /// Initializes a new instance of the <see cref="RenderingFont"/>
    /// </summary>
    /// <param name="fontName">font name</param>
    /// <param name="fontSize">font size in points</param>
    ASPOSE_CELLS_API RenderingFont(const U16String& fontName, float fontSize);
    /// <summary>
    /// Initializes a new instance of the <see cref="RenderingFont"/>
    /// </summary>
    /// <param name="fontName">font name</param>
    /// <param name="fontSize">font size in points</param>
    ASPOSE_CELLS_API RenderingFont(const char16_t* fontName, float fontSize);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API RenderingFont(RenderingFont_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API RenderingFont(const RenderingFont& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~RenderingFont();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API RenderingFont& operator=(const RenderingFont& src);
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
    /// Gets name of the font.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets size of the font in points.
    /// </summary>
    ASPOSE_CELLS_API float GetSize();
    /// <summary>
    /// Gets or sets bold for the font.
    /// </summary>
    ASPOSE_CELLS_API bool GetBold();
    /// <summary>
    /// Gets or sets bold for the font.
    /// </summary>
    ASPOSE_CELLS_API void SetBold(bool value);
    /// <summary>
    /// Gets or sets italic for the font.
    /// </summary>
    ASPOSE_CELLS_API bool GetItalic();
    /// <summary>
    /// Gets or sets italic for the font.
    /// </summary>
    ASPOSE_CELLS_API void SetItalic(bool value);
    /// <summary>
    /// Gets or sets color for the font.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Gets or sets color for the font.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const Aspose::Cells::Color& value);
    
};

} } }

#endif
