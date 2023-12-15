// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_THREADEDCOMMENT_H
#define ASPOSE_CELLS_THREADEDCOMMENT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"

namespace Aspose { namespace Cells {
    class ThreadedCommentAuthor;
} }

namespace Aspose { namespace Cells {

class ThreadedComment_Impl;

/// <summary>
/// Represents the threaded comment.
/// </summary>
class ThreadedComment {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ThreadedComment_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ThreadedComment(ThreadedComment_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ThreadedComment(const ThreadedComment& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ThreadedComment();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ThreadedComment& operator=(const ThreadedComment& src);
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
    /// Gets the row index of the comment.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRow();
    /// <summary>
    /// Gets the column index of the comment.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetColumn();
    /// <summary>
    /// Gets and sets the text of the comment.
    /// </summary>
    ASPOSE_CELLS_API U16String GetNotes();
    /// <summary>
    /// Gets and sets the text of the comment.
    /// </summary>
    ASPOSE_CELLS_API void SetNotes(const U16String& value);
    /// <summary>
    /// Gets and sets the text of the comment.
    /// </summary>
    ASPOSE_CELLS_API void SetNotes(const char16_t* value);
    /// <summary>
    /// Gets the author of the comment.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthor GetAuthor();
    /// <summary>
    /// Gets the author of the comment.
    /// </summary>
    ASPOSE_CELLS_API void SetAuthor(const ThreadedCommentAuthor& value);
    /// <summary>
    /// Gets and sets the created time of this threaded comment.
    /// </summary>
    ASPOSE_CELLS_API Date GetCreatedTime();
    /// <summary>
    /// Gets and sets the created time of this threaded comment.
    /// </summary>
    ASPOSE_CELLS_API void SetCreatedTime(const Date& value);
    
};

} }

#endif
