// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_THREADEDCOMMENTAUTHORCOLLECTION_H
#define ASPOSE_CELLS_THREADEDCOMMENTAUTHORCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class ThreadedCommentAuthor;
} }

namespace Aspose { namespace Cells {

class ThreadedCommentAuthorCollection_Impl;

/// <summary>
/// Represents all persons who .
/// </summary>
class ThreadedCommentAuthorCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ThreadedCommentAuthorCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthorCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthorCollection(ThreadedCommentAuthorCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthorCollection(const ThreadedCommentAuthorCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ThreadedCommentAuthorCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthorCollection& operator=(const ThreadedCommentAuthorCollection& src);
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
    /// Gets and sets the current user.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthor GetCurrentPerson();
    /// <summary>
    /// Gets and sets the current user.
    /// </summary>
    ASPOSE_CELLS_API void SetCurrentPerson(const ThreadedCommentAuthor& value);
    /// <summary>
    /// Gets the index of ThreadedCommentAuthor object
    /// </summary>
    /// <param name="author">The ThreadedCommentAuthor object</param>
    /// <returns>The index in the ThreadedCommentAuthor collection</returns>
    ASPOSE_CELLS_API int32_t IndexOf(const ThreadedCommentAuthor& author);
    /// <summary>
    /// Gets the person who create threaded comments.
    /// </summary>
    /// <param name="index">The index</param>
    /// <returns></returns>
    ASPOSE_CELLS_API ThreadedCommentAuthor Get(int32_t index);
    /// <summary>
    /// Gets the person who create threaded comments.
    /// </summary>
    /// <param name="name">The name of the author.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API ThreadedCommentAuthor Get(const U16String& name);
    /// <summary>
    /// Gets the person who create threaded comments.
    /// </summary>
    /// <param name="name">The name of the author.</param>
    /// <returns></returns>
    ASPOSE_CELLS_API ThreadedCommentAuthor Get(const char16_t* name);
    /// <summary>
    /// Adds one thread comment person.
    /// </summary>
    /// <param name="name">The name of the person.</param>
    /// <param name="userId"></param>
    /// <param name="providerId">The id of the provider</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const U16String& name, const U16String& userId, const U16String& providerId);
    /// <summary>
    /// Adds one thread comment person.
    /// </summary>
    /// <param name="name">The name of the person.</param>
    /// <param name="userId"></param>
    /// <param name="providerId">The id of the provider</param>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t Add(const char16_t* name, const char16_t* userId, const char16_t* providerId);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} }

#endif
