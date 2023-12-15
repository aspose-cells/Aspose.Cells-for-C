// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_COMMENTCOLLECTION_H
#define ASPOSE_CELLS_COMMENTCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class ThreadedCommentAuthor;
    class ThreadedCommentCollection;
    class Comment;
} }

namespace Aspose { namespace Cells {

class CommentCollection_Impl;

/// <summary>
/// Encapsulates a collection of <see cref="Comment"/> objects.
/// </summary>
class CommentCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CommentCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CommentCollection(CommentCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CommentCollection(const CommentCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CommentCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CommentCollection& operator=(const CommentCollection& src);
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
    /// Adds a threaded comment.
    /// </summary>
    /// <param name="row">Cell row index.</param>
    /// <param name="column">Cell column index.</param>
    /// <param name="text">The text of the comment</param>
    /// <param name="author">The user of this threaded comment.</param>
    /// <returns><see cref="ThreadedComment"/> object index.</returns>
    ASPOSE_CELLS_API int32_t AddThreadedComment(int32_t row, int32_t column, const U16String& text, const ThreadedCommentAuthor& author);
    /// <summary>
    /// Adds a threaded comment.
    /// </summary>
    /// <param name="row">Cell row index.</param>
    /// <param name="column">Cell column index.</param>
    /// <param name="text">The text of the comment</param>
    /// <param name="author">The user of this threaded comment.</param>
    /// <returns><see cref="ThreadedComment"/> object index.</returns>
    ASPOSE_CELLS_API int32_t AddThreadedComment(int32_t row, int32_t column, const char16_t* text, const ThreadedCommentAuthor& author);
    /// <summary>
    /// Adds a threaded comment.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <param name="text">The text of the comment</param>
    /// <param name="author">The user of this threaded comment.</param>
    /// <returns><see cref="ThreadedComment"/> object index.</returns>
    ASPOSE_CELLS_API int32_t AddThreadedComment(const U16String& cellName, const U16String& text, const ThreadedCommentAuthor& author);
    /// <summary>
    /// Adds a threaded comment.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <param name="text">The text of the comment</param>
    /// <param name="author">The user of this threaded comment.</param>
    /// <returns><see cref="ThreadedComment"/> object index.</returns>
    ASPOSE_CELLS_API int32_t AddThreadedComment(const char16_t* cellName, const char16_t* text, const ThreadedCommentAuthor& author);
    /// <summary>
    /// Gets the threaded comments by row and column index.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">The column index.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API ThreadedCommentCollection GetThreadedComments(int32_t row, int32_t column);
    /// <summary>
    /// Gets the threaded comments by cell name.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API ThreadedCommentCollection GetThreadedComments(const U16String& cellName);
    /// <summary>
    /// Gets the threaded comments by cell name.
    /// </summary>
    /// <param name="cellName">The name of the cell.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API ThreadedCommentCollection GetThreadedComments(const char16_t* cellName);
    /// <summary>
    /// Adds a comment to the collection.
    /// </summary>
    /// <param name="row">Cell row index.</param>
    /// <param name="column">Cell column index.</param>
    /// <returns><see cref="Comment"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(int32_t row, int32_t column);
    /// <summary>
    /// Adds a comment to the collection.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns><see cref="Comment"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& cellName);
    /// <summary>
    /// Adds a comment to the collection.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns><see cref="Comment"/> object index.</returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* cellName);
    /// <summary>
    /// Gets the <see cref="Comment"/> element at the specified index.
    /// </summary>
    /// <param name="index">The zero based index of the element.</param>
    /// <returns>The element at the specified index.</returns>
    ASPOSE_CELLS_API Comment Get(int32_t index);
    /// <summary>
    /// Gets the <see cref="Comment"/> element at the specified cell.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns>The element at the specified cell.</returns>
    ASPOSE_CELLS_API Comment Get(const U16String& cellName);
    /// <summary>
    /// Gets the <see cref="Comment"/> element at the specified cell.
    /// </summary>
    /// <param name="cellName">Cell name.</param>
    /// <returns>The element at the specified cell.</returns>
    ASPOSE_CELLS_API Comment Get(const char16_t* cellName);
    /// <summary>
    /// Gets the <see cref="Comment"/> element at the specified row index and column index.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="column">Column index.</param>
    /// <returns>The element at the specified cell.</returns>
    ASPOSE_CELLS_API Comment Get(int32_t row, int32_t column);
    /// <summary>
    /// Removes the comment of the specific cell.
    /// </summary>
    /// <param name="cellName">The name of cell which contains a comment.</param>
    ASPOSE_CELLS_API void RemoveAt(const U16String& cellName);
    /// <summary>
    /// Removes the comment of the specific cell.
    /// </summary>
    /// <param name="cellName">The name of cell which contains a comment.</param>
    ASPOSE_CELLS_API void RemoveAt(const char16_t* cellName);
    /// <summary>
    /// Removes the comment of the specific cell.
    /// </summary>
    /// <param name="row">The row index.</param>
    /// <param name="column">the column index.</param>
    ASPOSE_CELLS_API void RemoveAt(int32_t row, int32_t column);
    /// <summary>
    /// Removes all comments;
    /// </summary>
    ASPOSE_CELLS_API void Clear();
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
