// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_TEXTS_TEXTPARAGRAPH_H
#define ASPOSE_CELLS_DRAWING_TEXTS_TEXTPARAGRAPH_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/FontSetting.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/LineSpaceSizeType.h"
#include "Aspose.Cells/TextAlignmentType.h"
#include "Aspose.Cells/TextFontAlignType.h"
#include "Aspose.Cells/TextNodeType.h"

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {
    class Bullet;
    class TextTabStopCollection;
} } } }

namespace Aspose { namespace Cells {
    class FontSetting;
} }

namespace Aspose { namespace Cells { namespace Drawing { namespace Texts {

using namespace Aspose::Cells;

class TextParagraph_Impl;

/// <summary>
/// Represents the text paragraph setting.
/// </summary>
class ASPOSE_CELLS_API2 TextParagraph : public FontSetting {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    TextParagraph_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API TextParagraph(TextParagraph_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API TextParagraph(const TextParagraph& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API TextParagraph(const FontSetting& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~TextParagraph();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API TextParagraph& operator=(const TextParagraph& src);
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
    /// Gets the bullet.
    /// </summary>
    ASPOSE_CELLS_API Bullet GetBullet();
    /// <summary>
    /// Gets the type of text node.
    /// </summary>
    ASPOSE_CELLS_API TextNodeType GetType();
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be used within a paragraph.
    /// </summary>
    ASPOSE_CELLS_API LineSpaceSizeType GetLineSpaceSizeType();
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be used within a paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetLineSpaceSizeType(LineSpaceSizeType value);
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be used within a paragraph.
    /// </summary>
    ASPOSE_CELLS_API double GetLineSpace();
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be used within a paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetLineSpace(double value);
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be present after a paragraph.
    /// </summary>
    ASPOSE_CELLS_API LineSpaceSizeType GetSpaceAfterSizeType();
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be present after a paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetSpaceAfterSizeType(LineSpaceSizeType value);
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be present after a paragraph.
    /// </summary>
    ASPOSE_CELLS_API double GetSpaceAfter();
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be present after a paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetSpaceAfter(double value);
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be present before a paragraph.
    /// </summary>
    ASPOSE_CELLS_API LineSpaceSizeType GetSpaceBeforeSizeType();
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be present before a paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetSpaceBeforeSizeType(LineSpaceSizeType value);
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be present before a paragraph.
    /// </summary>
    ASPOSE_CELLS_API double GetSpaceBefore();
    /// <summary>
    /// Gets and sets the amount of vertical white space that will be present before a paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetSpaceBefore(double value);
    /// <summary>
    /// Gets tab stop list.
    /// </summary>
    ASPOSE_CELLS_API TextTabStopCollection GetStops();
    /// <summary>
    /// Specifies whether a Latin word can be broken in half and wrapped onto the next line without a hyphen being added.
    /// </summary>
    ASPOSE_CELLS_API bool IsLatinLineBreak();
    /// <summary>
    /// Specifies whether a Latin word can be broken in half and wrapped onto the next line without a hyphen being added.
    /// </summary>
    ASPOSE_CELLS_API void SetIsLatinLineBreak(bool value);
    /// <summary>
    /// Specifies whether an East Asian word can be broken in half and wrapped onto the next line without a hyphen being added.
    /// </summary>
    ASPOSE_CELLS_API bool IsEastAsianLineBreak();
    /// <summary>
    /// Specifies whether an East Asian word can be broken in half and wrapped onto the next line without a hyphen being added.
    /// </summary>
    ASPOSE_CELLS_API void SetIsEastAsianLineBreak(bool value);
    /// <summary>
    /// Specifies whether punctuation is to be forcefully laid out on a line of text or put on a different line of text.
    /// </summary>
    ASPOSE_CELLS_API bool IsHangingPunctuation();
    /// <summary>
    /// Specifies whether punctuation is to be forcefully laid out on a line of text or put on a different line of text.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHangingPunctuation(bool value);
    /// <summary>
    /// Specifies the right margin of the paragraph.
    /// </summary>
    ASPOSE_CELLS_API double GetRightMargin();
    /// <summary>
    /// Specifies the right margin of the paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetRightMargin(double value);
    /// <summary>
    /// Specifies the left margin of the paragraph.
    /// </summary>
    ASPOSE_CELLS_API double GetLeftMargin();
    /// <summary>
    /// Specifies the left margin of the paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetLeftMargin(double value);
    /// <summary>
    /// Specifies the indent size that will be applied to the first line of text in the paragraph.
    /// </summary>
    ASPOSE_CELLS_API double GetFirstLineIndent();
    /// <summary>
    /// Specifies the indent size that will be applied to the first line of text in the paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstLineIndent(double value);
    /// <summary>
    /// Determines where vertically on a line of text the actual words are positioned. This deals
    /// with vertical placement of the characters with respect to the baselines.
    /// </summary>
    ASPOSE_CELLS_API TextFontAlignType GetFontAlignType();
    /// <summary>
    /// Determines where vertically on a line of text the actual words are positioned. This deals
    /// with vertical placement of the characters with respect to the baselines.
    /// </summary>
    ASPOSE_CELLS_API void SetFontAlignType(TextFontAlignType value);
    /// <summary>
    /// Gets and sets the text horizontal alignment type of the paragraph.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetAlignmentType();
    /// <summary>
    /// Gets and sets the text horizontal alignment type of the paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetAlignmentType(TextAlignmentType value);
    /// <summary>
    /// Gets and sets the default size for a tab character within this paragraph.
    /// </summary>
    ASPOSE_CELLS_API double GetDefaultTabSize();
    /// <summary>
    /// Gets and sets the default size for a tab character within this paragraph.
    /// </summary>
    ASPOSE_CELLS_API void SetDefaultTabSize(double value);
    /// <summary>
    /// Gets all text runs in this paragraph.
    /// If this paragraph is empty, return paragraph itself.
    /// </summary>
    ASPOSE_CELLS_API Vector<FontSetting> GetChildren();
    
};

} } } }

#endif
