// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_TEXTOPTIONS_H
#define ASPOSE_CELLS_DRAWING_TEXTS_TEXTOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Font.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/CountryCode.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class FillFormat;
    class LineFormat;
    class ShadowEffect;
} } }

namespace Aspose { namespace Cells {
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class TextOptions_Impl;

/// <summary>
/// Represents the text options.
/// </summary>
class TextOptions : public Font {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextOptions(TextOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextOptions(const TextOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API TextOptions(const Font& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextOptions& operator=(const TextOptions& src);
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
    /// Gets and sets the name of the shape.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets and sets the user interface language.
    /// </summary>
    ASPOSE_CELLS_API CountryCode GetLanguageCode();
    /// <summary>
    /// Gets and sets the user interface language.
    /// </summary>
    ASPOSE_CELLS_API void SetLanguageCode(CountryCode value);
    /// <summary>
    /// Gets and sets the latin name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetLatinName();
    /// <summary>
    /// Gets and sets the latin name.
    /// </summary>
    ASPOSE_CELLS_API void SetLatinName(const U16String& value);
    /// <summary>
    /// Gets and sets the latin name.
    /// </summary>
    ASPOSE_CELLS_API void SetLatinName(const char16_t* value);
    /// <summary>
    /// Gets and sets the FarEast name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetFarEastName();
    /// <summary>
    /// Gets and sets the FarEast name.
    /// </summary>
    ASPOSE_CELLS_API void SetFarEastName(const U16String& value);
    /// <summary>
    /// Gets and sets the FarEast name.
    /// </summary>
    ASPOSE_CELLS_API void SetFarEastName(const char16_t* value);
    /// <summary>
    /// Represents the fill format of the text.
    /// </summary>
    ASPOSE_CELLS_API FillFormat GetFill();
    /// <summary>
    /// Represents the outline format of the text.
    /// </summary>
    ASPOSE_CELLS_API LineFormat GetOutline();
    /// <summary>
    /// Represents a <see cref="ShadowEffect"/> object that specifies shadow effect for the chart element or shape.
    /// </summary>
    ASPOSE_CELLS_API ShadowEffect GetShadow();
    /// <summary>
    /// Gets or sets the color of underline.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetUnderlineColor();
    /// <summary>
    /// Gets or sets the color of underline.
    /// </summary>
    ASPOSE_CELLS_API void SetUnderlineColor(const CellsColor& value);
    /// <summary>
    /// Specifies the minimum font size at which character kerning will occur for this text run.
    /// </summary>
    ASPOSE_CELLS_API double GetKerning();
    /// <summary>
    /// Specifies the minimum font size at which character kerning will occur for this text run.
    /// </summary>
    ASPOSE_CELLS_API void SetKerning(double value);
    /// <summary>
    /// Specifies the spacing between characters within a text run.
    /// </summary>
    ASPOSE_CELLS_API double GetSpacing();
    /// <summary>
    /// Specifies the spacing between characters within a text run.
    /// </summary>
    ASPOSE_CELLS_API void SetSpacing(double value);
    
};

} } } }

#endif
