// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_FONTSETTINGCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_TEXTS_FONTSETTINGCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Enumerator.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/PresetWordArtStyle.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {
    class ShapeTextAlignment;
    class TextParagraphCollection;
    class TextParagraph;
} } } }

namespace Aspose { namespace Cells {
    class Font;
    class StyleFlag;
    class FontSetting;
} }

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class FontSettingCollection_Impl;

/// <summary>
/// Represents the list of <see cref="FontSetting"/>.
/// </summary>
class FontSettingCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FontSettingCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FontSettingCollection(FontSettingCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FontSettingCollection(const FontSettingCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FontSettingCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FontSettingCollection& operator=(const FontSettingCollection& src);
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
    /// Sets the preset WordArt style.
    /// </summary>
    /// <param name="style">The preset WordArt style.</param>
    ASPOSE_CELLS_API void SetWordArtStyle(PresetWordArtStyle style);
    /// <summary>
    /// Represents the alignment setting of the text body.
    /// </summary>
    ASPOSE_CELLS_API ShapeTextAlignment GetTextAlignment();
    /// <summary>
    /// Gets all paragraphs.
    /// </summary>
    ASPOSE_CELLS_API TextParagraphCollection GetTextParagraphs();
    /// <summary>
    /// Gets the enumerator of the paragraphs.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API Enumerator<TextParagraph> GetParagraphEnumerator();
    /// <summary>
    /// Gets and sets the text of the shape.
    /// </summary>
    ASPOSE_CELLS_API U16String GetText();
    /// <summary>
    /// Gets and sets the text of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const U16String& value);
    /// <summary>
    /// Gets and sets the text of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetText(const char16_t* value);
    /// <summary>
    /// Appends the text.
    /// </summary>
    /// <param name="text">The text.</param>
    ASPOSE_CELLS_API void AppendText(const U16String& text);
    /// <summary>
    /// Appends the text.
    /// </summary>
    /// <param name="text">The text.</param>
    ASPOSE_CELLS_API void AppendText(const char16_t* text);
    /// <summary>
    /// Insert index at the position.
    /// </summary>
    /// <param name="index">The start index.</param>
    /// <param name="text">The text.</param>
    ASPOSE_CELLS_API void InsertText(int32_t index, const U16String& text);
    /// <summary>
    /// Insert index at the position.
    /// </summary>
    /// <param name="index">The start index.</param>
    /// <param name="text">The text.</param>
    ASPOSE_CELLS_API void InsertText(int32_t index, const char16_t* text);
    /// <summary>
    /// Replace the text.
    /// </summary>
    /// <param name="index">The start index.</param>
    /// <param name="count">The count of characters.</param>
    /// <param name="text">The text.</param>
    ASPOSE_CELLS_API void Replace(int32_t index, int32_t count, const U16String& text);
    /// <summary>
    /// Replace the text.
    /// </summary>
    /// <param name="index">The start index.</param>
    /// <param name="count">The count of characters.</param>
    /// <param name="text">The text.</param>
    ASPOSE_CELLS_API void Replace(int32_t index, int32_t count, const char16_t* text);
    /// <summary>
    /// Replace the text.
    /// </summary>
    /// <param name="oldValue">The old text.</param>
    /// <param name="newValue">The new text.</param>
    ASPOSE_CELLS_API void Replace(const U16String& oldValue, const U16String& newValue);
    /// <summary>
    /// Replace the text.
    /// </summary>
    /// <param name="oldValue">The old text.</param>
    /// <param name="newValue">The new text.</param>
    ASPOSE_CELLS_API void Replace(const char16_t* oldValue, const char16_t* newValue);
    /// <summary>
    /// Delete some characters.
    /// </summary>
    /// <param name="index">The start index.</param>
    /// <param name="count">The count of characters.</param>
    ASPOSE_CELLS_API void DeleteText(int32_t index, int32_t count);
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this shape.
    /// </summary>
    ASPOSE_CELLS_API U16String GetHtmlString();
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this shape.
    /// </summary>
    ASPOSE_CELLS_API void SetHtmlString(const U16String& value);
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this shape.
    /// </summary>
    ASPOSE_CELLS_API void SetHtmlString(const char16_t* value);
    /// <summary>
    /// Format the text with font setting.
    /// </summary>
    /// <param name="startIndex">The start index.</param>
    /// <param name="length">The length.</param>
    /// <param name="font">The font.</param>
    /// <param name="flag">The flags of the font.</param>
    ASPOSE_CELLS_API void Format(int32_t startIndex, int32_t length, const Aspose::Cells::Font& font, const StyleFlag& flag);
    /// <summary>
    /// Gets the <see cref="FontSetting"/> by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API FontSetting Get(int32_t index);
    /// <summary>
    /// Clear all setting.
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    /// <summary>
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t GetHashCode();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } } }

#endif
