// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FONT_H
#define ASPOSE_CELLS_FONT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Color.h"

#include "Aspose.Cells/FontSchemeType.h"
#include "Aspose.Cells/FontUnderlineType.h"
#include "Aspose.Cells/TextCapsType.h"
#include "Aspose.Cells/TextStrikeType.h"

namespace Aspose { namespace Cells {
    class ThemeColor;
} }

namespace Aspose { namespace Cells {

class Font_Impl;

/// <summary>
/// Encapsulates the font object used in a spreadsheet.
/// </summary>
class ASPOSE_CELLS_API2 Font {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Font_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Font(Font_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Font(const Aspose::Cells::Font& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Font();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font& operator=(const Aspose::Cells::Font& src);
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
    /// Represent the character set.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCharset();
    /// <summary>
    /// Represent the character set.
    /// </summary>
    ASPOSE_CELLS_API void SetCharset(int32_t value);
    /// <summary>
    /// Gets or sets a value indicating whether the font is italic.
    /// </summary>
    ASPOSE_CELLS_API bool IsItalic();
    /// <summary>
    /// Gets or sets a value indicating whether the font is italic.
    /// </summary>
    ASPOSE_CELLS_API void SetIsItalic(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether the font is bold.
    /// </summary>
    ASPOSE_CELLS_API bool IsBold();
    /// <summary>
    /// Gets or sets a value indicating whether the font is bold.
    /// </summary>
    ASPOSE_CELLS_API void SetIsBold(bool value);
    /// <summary>
    /// Gets and sets the text caps type.
    /// </summary>
    ASPOSE_CELLS_API TextCapsType GetCapsType();
    /// <summary>
    /// Gets and sets the text caps type.
    /// </summary>
    ASPOSE_CELLS_API void SetCapsType(TextCapsType value);
    /// <summary>
    /// Gets the strike type of the text.
    /// </summary>
    ASPOSE_CELLS_API TextStrikeType GetStrikeType();
    /// <summary>
    /// Gets the strike type of the text.
    /// </summary>
    ASPOSE_CELLS_API void SetStrikeType(TextStrikeType value);
    /// <summary>
    /// Gets or sets a value indicating whether the font is single strikeout.
    /// </summary>
    ASPOSE_CELLS_API bool IsStrikeout();
    /// <summary>
    /// Gets or sets a value indicating whether the font is single strikeout.
    /// </summary>
    ASPOSE_CELLS_API void SetIsStrikeout(bool value);
    /// <summary>
    /// Gets and sets the script offset,in unit of percentage
    /// </summary>
    ASPOSE_CELLS_API double GetScriptOffset();
    /// <summary>
    /// Gets and sets the script offset,in unit of percentage
    /// </summary>
    ASPOSE_CELLS_API void SetScriptOffset(double value);
    /// <summary>
    /// Gets or sets a value indicating whether the font is super script.
    /// </summary>
    ASPOSE_CELLS_API bool IsSuperscript();
    /// <summary>
    /// Gets or sets a value indicating whether the font is super script.
    /// </summary>
    ASPOSE_CELLS_API void SetIsSuperscript(bool value);
    /// <summary>
    /// Gets or sets a value indicating whether the font is subscript.
    /// </summary>
    ASPOSE_CELLS_API bool IsSubscript();
    /// <summary>
    /// Gets or sets a value indicating whether the font is subscript.
    /// </summary>
    ASPOSE_CELLS_API void SetIsSubscript(bool value);
    /// <summary>
    /// Gets or sets the font underline type.
    /// </summary>
    ASPOSE_CELLS_API FontUnderlineType GetUnderline();
    /// <summary>
    /// Gets or sets the font underline type.
    /// </summary>
    ASPOSE_CELLS_API void SetUnderline(FontUnderlineType value);
    /// <summary>
    /// Gets and sets the double size of the font.
    /// </summary>
    ASPOSE_CELLS_API double GetDoubleSize();
    /// <summary>
    /// Gets and sets the double size of the font.
    /// </summary>
    ASPOSE_CELLS_API void SetDoubleSize(double value);
    /// <summary>
    /// Gets or sets the size of the font.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetSize();
    /// <summary>
    /// Gets or sets the size of the font.
    /// </summary>
    ASPOSE_CELLS_API void SetSize(int32_t value);
    /// <summary>
    /// Gets and sets the theme color.
    /// </summary>
    /// <remarks>
    /// If the font color is not a theme color, NULL will be returned.
    /// </remarks>
    ASPOSE_CELLS_API ThemeColor GetThemeColor();
    /// <summary>
    /// Gets and sets the theme color.
    /// </summary>
    /// <remarks>
    /// If the font color is not a theme color, NULL will be returned.
    /// </remarks>
    ASPOSE_CELLS_API void SetThemeColor(const ThemeColor& value);
    /// <summary>
    /// Gets or sets the <see cref="System.Drawing.Color"/> of the font.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Color GetColor();
    /// <summary>
    /// Gets or sets the <see cref="System.Drawing.Color"/> of the font.
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
    /// Checks if two fonts are equals.
    /// </summary>
    /// <param name="font">Compared font object.</param>
    /// <returns>True if equal to the compared font object.</returns>
    ASPOSE_CELLS_API bool Equals(const Aspose::Cells::Font& font);
    /// <summary>
    /// Indicates whether the normalization of height that is to be applied to the text run.
    /// </summary>
    ASPOSE_CELLS_API bool IsNormalizeHeights();
    /// <summary>
    /// Indicates whether the normalization of height that is to be applied to the text run.
    /// </summary>
    ASPOSE_CELLS_API void SetIsNormalizeHeights(bool value);
    /// <summary>
    /// Gets and sets the scheme type of the font.
    /// </summary>
    ASPOSE_CELLS_API FontSchemeType GetSchemeType();
    /// <summary>
    /// Gets and sets the scheme type of the font.
    /// </summary>
    ASPOSE_CELLS_API void SetSchemeType(FontSchemeType value);
    /// <summary>
    /// Returns a string represents the current Cell object.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API U16String ToString();
    /// <summary>
    /// Gets  or sets the name of the <see cref="Font"/>.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets  or sets the name of the <see cref="Font"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets  or sets the name of the <see cref="Font"/>.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    
};

} }

#endif
