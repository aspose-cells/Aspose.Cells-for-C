// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_THREADEDCOMMENTCOLLECTION_H
#define ASPOSE_CELLS_THREADEDCOMMENTCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class ThreadedComment;
    class ThreadedCommentAuthor;
} }

namespace Aspose { namespace Cells {

class ThreadedCommentCollection_Impl;

/// <summary>
/// Represents the list of threaded comments.
/// </summary>
class ThreadedCommentCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ThreadedCommentCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentCollection(ThreadedCommentCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentCollection(const ThreadedCommentCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ThreadedCommentCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentCollection& operator=(const ThreadedCommentCollection& src);
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
    /// Gets the threaded comment by the specific index.
    /// </summary>
    /// <param name="index">The index</param>
    /// <returns></returns>
    ASPOSE_CELLS_API ThreadedComment Get(int32_t index);
    /// <summary>
    /// Adds a threaded comment;
    /// </summary>
    /// <param name="text">The text of the threaded comment.</param>
    /// <param name="author">The author of the threaded comment</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& text, const ThreadedCommentAuthor& author);
    /// <summary>
    /// Adds a threaded comment;
    /// </summary>
    /// <param name="text">The text of the threaded comment.</param>
    /// <param name="author">The author of the threaded comment</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* text, const ThreadedCommentAuthor& author);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
