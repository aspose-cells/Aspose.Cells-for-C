// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_COMMENT_H
#define ASPOSE_CELLS_COMMENT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/TextAlignmentType.h"
#include "Aspose.Cells/TextOrientationType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class CommentShape;
} } }

namespace Aspose { namespace Cells {
    class ThreadedCommentCollection;
    class Font;
    class StyleFlag;
    class FontSetting;
} }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Drawing;

class Comment_Impl;

/// <summary>
/// Encapsulates the object that represents a cell comment.
/// </summary>
class Comment {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Comment_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Comment(Comment_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Comment(const Comment& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Comment();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Comment& operator=(const Comment& src);
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
    /// Gets and sets Name of the original comment author
    /// </summary>
    ASPOSE_CELLS_API U16String GetAuthor();
    /// <summary>
    /// Gets and sets Name of the original comment author
    /// </summary>
    ASPOSE_CELLS_API void SetAuthor(const U16String& value);
    /// <summary>
    /// Gets and sets Name of the original comment author
    /// </summary>
    ASPOSE_CELLS_API void SetAuthor(const char16_t* value);
    /// <summary>
    /// Get a Shape object that represents the shape attached to the specified comment.
    /// </summary>
    ASPOSE_CELLS_API CommentShape GetCommentShape();
    /// <summary>
    /// Gets the row index of the comment.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets the column index of the comment.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Indicates whether this comment is a threaded comment.
    /// </summary>
    ASPOSE_CELLS_API bool IsThreadedComment();
    /// <summary>
    /// Gets the list of threaded comments;
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentCollection GetThreadedComments();
    /// <summary>
    /// Represents the content of comment.
    /// </summary>
    /// <remarks>
    /// If this is a threaded comment, the note could not be changed, otherwise MS Excel could not process it as a threaded comment.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetNote();
    /// <summary>
    /// Represents the content of comment.
    /// </summary>
    /// <remarks>
    /// If this is a threaded comment, the note could not be changed, otherwise MS Excel could not process it as a threaded comment.
    /// </remarks>
    ASPOSE_CELLS_API void SetNote(const U16String& value);
    /// <summary>
    /// Represents the content of comment.
    /// </summary>
    /// <remarks>
    /// If this is a threaded comment, the note could not be changed, otherwise MS Excel could not process it as a threaded comment.
    /// </remarks>
    ASPOSE_CELLS_API void SetNote(const char16_t* value);
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this comment.
    /// </summary>
    /// <remarks>
    /// If this is a threaded comment, the note could not be changed, otherwise MS Excel could not process it as a threaded comment.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetHtmlNote();
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this comment.
    /// </summary>
    /// <remarks>
    /// If this is a threaded comment, the note could not be changed, otherwise MS Excel could not process it as a threaded comment.
    /// </remarks>
    ASPOSE_CELLS_API void SetHtmlNote(const U16String& value);
    /// <summary>
    /// Gets and sets the html string which contains data and some formats in this comment.
    /// </summary>
    /// <remarks>
    /// If this is a threaded comment, the note could not be changed, otherwise MS Excel could not process it as a threaded comment.
    /// </remarks>
    ASPOSE_CELLS_API void SetHtmlNote(const char16_t* value);
    /// <summary>
    /// Gets the font of comment.
    /// </summary>
    ASPOSE_CELLS_API Aspose::Cells::Font GetFont();
    /// <summary>
    /// Format some characters with the font setting.
    /// </summary>
    /// <param name="startIndex">The start index.</param>
    /// <param name="length">The length.</param>
    /// <param name="font">The font setting.</param>
    /// <param name="flag">The flag of the font setting.</param>
    ASPOSE_CELLS_API void FormatCharacters(int32_t startIndex, int32_t length, const Aspose::Cells::Font& font, const StyleFlag& flag);
    /// <summary>
    /// Returns a Characters object that represents a range of characters within the comment text.
    /// </summary>
    /// <param name="startIndex">The index of the start of the character.</param>
    /// <param name="length">The number of characters.</param>
    /// <returns>Characters object.</returns>
    ASPOSE_CELLS_API FontSetting Characters(int32_t startIndex, int32_t length);
    /// <summary>
    /// Returns all Characters objects
    /// that represents a range of characters within the comment text.
    /// </summary>
    /// <returns>All Characters objects </returns>
    ASPOSE_CELLS_API Vector<FontSetting> GetRichFormattings();
    /// <summary>
    /// Represents if the comment is visible or not.
    /// </summary>
    ASPOSE_CELLS_API bool IsVisible();
    /// <summary>
    /// Represents if the comment is visible or not.
    /// </summary>
    ASPOSE_CELLS_API void SetIsVisible(bool value);
    /// <summary>
    /// Gets and sets the text orientation type of the comment.
    /// </summary>
    ASPOSE_CELLS_API TextOrientationType GetTextOrientationType();
    /// <summary>
    /// Gets and sets the text orientation type of the comment.
    /// </summary>
    ASPOSE_CELLS_API void SetTextOrientationType(TextOrientationType value);
    /// <summary>
    /// Gets and sets the text horizontal alignment type of the comment.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetTextHorizontalAlignment();
    /// <summary>
    /// Gets and sets the text horizontal alignment type of the comment.
    /// </summary>
    ASPOSE_CELLS_API void SetTextHorizontalAlignment(TextAlignmentType value);
    /// <summary>
    /// Gets and sets the text vertical alignment type of the comment.
    /// </summary>
    ASPOSE_CELLS_API TextAlignmentType GetTextVerticalAlignment();
    /// <summary>
    /// Gets and sets the text vertical alignment type of the comment.
    /// </summary>
    ASPOSE_CELLS_API void SetTextVerticalAlignment(TextAlignmentType value);
    /// <summary>
    /// Indicates if size of comment is adjusted automatically according to its content.
    /// </summary>
    ASPOSE_CELLS_API bool GetAutoSize();
    /// <summary>
    /// Indicates if size of comment is adjusted automatically according to its content.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoSize(bool value);
    /// <summary>
    /// Represents the height of the comment, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetHeightCM();
    /// <summary>
    /// Represents the height of the comment, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetHeightCM(double value);
    /// <summary>
    /// Represents the width of the comment, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API double GetWidthCM();
    /// <summary>
    /// Represents the width of the comment, in unit of centimeters.
    /// </summary>
    ASPOSE_CELLS_API void SetWidthCM(double value);
    /// <summary>
    /// Represents the width of the comment, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetWidth();
    /// <summary>
    /// Represents the width of the comment, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetWidth(int32_t value);
    /// <summary>
    /// Represents the Height of the comment, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHeight();
    /// <summary>
    /// Represents the Height of the comment, in unit of pixels.
    /// </summary>
    ASPOSE_CELLS_API void SetHeight(int32_t value);
    /// <summary>
    /// Represents the width of the comment, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetWidthInch();
    /// <summary>
    /// Represents the width of the comment, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetWidthInch(double value);
    /// <summary>
    /// Represents the height of the comment, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API double GetHeightInch();
    /// <summary>
    /// Represents the height of the comment, in unit of inches.
    /// </summary>
    ASPOSE_CELLS_API void SetHeightInch(double value);
    
};

} }

#endif
