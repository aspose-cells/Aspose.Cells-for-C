// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTEFFECTFORMAT_H
#define ASPOSE_CELLS_DRAWING_TEXTEFFECTFORMAT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/MsoPresetTextEffect.h"
#include "Aspose.Cells/MsoPresetTextEffectShape.h"

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class TextEffectFormat_Impl;

/// <summary>
/// Contains properties and methods that apply to WordArt objects.
/// </summary>
class TextEffectFormat {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextEffectFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextEffectFormat(TextEffectFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextEffectFormat(const TextEffectFormat& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextEffectFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextEffectFormat& operator=(const TextEffectFormat& src);
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
    /// Sets the preset text effect.
    /// </summary>
    /// <param name="effect">The preset text effect.</param>
    ASPOSE_CELLS_API void SetTextEffect(MsoPresetTextEffect effect);
    /// <summary>
    /// The text in the WordArt.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// The text in the WordArt.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// The text in the WordArt.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// The name of the font used in the WordArt.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFontName();
    /// <summary>
    /// The name of the font used in the WordArt.
    /// </summary>
    ASPOSE_CELLS_API void SetFontName(const U16String& value);
    /// <summary>
    /// The name of the font used in the WordArt.
    /// </summary>
    ASPOSE_CELLS_API void SetFontName(const char16_t* value);
    /// <summary>
    /// Indicates whether font is bold.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontBold();
    /// <summary>
    /// Indicates whether font is bold.
    /// </summary>
    ASPOSE_CELLS_API void SetFontBold(bool value);
    /// <summary>
    /// Indicates whether font is italic.
    /// </summary>
    ASPOSE_CELLS_API bool GetFontItalic();
    /// <summary>
    /// Indicates whether font is italic.
    /// </summary>
    ASPOSE_CELLS_API void SetFontItalic(bool value);
    /// <summary>
    /// If true,characters in the specified WordArt are rotated 90 degrees relative to the WordArt's bounding shape.
    /// </summary>
    ASPOSE_CELLS_API bool GetRotatedChars();
    /// <summary>
    /// If true,characters in the specified WordArt are rotated 90 degrees relative to the WordArt's bounding shape.
    /// </summary>
    ASPOSE_CELLS_API void SetRotatedChars(bool value);
    /// <summary>
    /// The size (in points) of the font used in the WordArt.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetFontSize();
    /// <summary>
    /// The size (in points) of the font used in the WordArt.
    /// </summary>
    ASPOSE_CELLS_API void SetFontSize(int32_t value);
    /// <summary>
    /// Gets and sets the preset shape type.
    /// </summary>
    ASPOSE_CELLS_API MsoPresetTextEffectShape GetPresetShape();
    /// <summary>
    /// Gets and sets the preset shape type.
    /// </summary>
    ASPOSE_CELLS_API void SetPresetShape(MsoPresetTextEffectShape value);
    
};

} } }

#endif
