// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FONTSETTING_H
#define ASPOSE_CELLS_FONTSETTING_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/PresetWordArtStyle.h"
#include "Aspose.Cells/TextNodeType.h"

namespace Aspose { namespace Cells {
    class Font;
    class WorksheetCollection;
} }

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {
    class TextOptions;
} } } }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Drawing;
using namespace Aspose::Cells::Drawing::Texts;

class FontSetting_Impl;

/// <summary>
/// Represents a range of characters within the cell text.
/// </summary>
class ASPOSE_CELLS_API2 FontSetting {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    FontSetting_Impl* _impl;
    
public:
    /// <summary>
    /// </summary>
    /// <param name="startIndex"></param>
    /// <param name="length"></param>
    /// <param name="sheets"></param>
    ASPOSE_CELLS_API FontSetting(int32_t startIndex, int32_t length, const WorksheetCollection& sheets);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API FontSetting(FontSetting_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API FontSetting(const FontSetting& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~FontSetting();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API FontSetting& operator=(const FontSetting& src);
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
    /// Gets the start index of the characters.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStartIndex();
    /// <summary>
    /// Gets the length of the characters.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetLength();
    /// <summary>
    /// Returns the font of this object.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// Sets the preset WordArt style.
    /// </summary>
    /// <param name="style">The preset WordArt style.</param>
    /// <remarks>Only for the text of shape/chart.</remarks>
    ASPOSE_CELLS_API void SetWordArtStyle(PresetWordArtStyle style);
    /// <summary>
    /// Returns the text options.
    /// </summary>
    ASPOSE_CELLS_API TextOptions GetTextOptions();
    /// <summary>
    /// Gets the type of text node.
    /// </summary>
    ASPOSE_CELLS_API TextNodeType GetType();
    
};

} }

#endif
