// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_THREADEDCOMMENTAUTHOR_H
#define ASPOSE_CELLS_THREADEDCOMMENTAUTHOR_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {

class ThreadedCommentAuthor_Impl;

/// <summary>
/// Represents the person who creates the threaded comments;
/// </summary>
class ThreadedCommentAuthor {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ThreadedCommentAuthor_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthor(ThreadedCommentAuthor_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthor(const ThreadedCommentAuthor& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ThreadedCommentAuthor();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ThreadedCommentAuthor& operator=(const ThreadedCommentAuthor& src);
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
    /// Gets and sets the name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets and sets the name.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets and sets the name.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets and sets the id of the user.
    /// </summary>
    ASPOSE_CELLS_API U16String GetUserId();
    /// <summary>
    /// Gets and sets the id of the user.
    /// </summary>
    ASPOSE_CELLS_API void SetUserId(const U16String& value);
    /// <summary>
    /// Gets and sets the id of the user.
    /// </summary>
    ASPOSE_CELLS_API void SetUserId(const char16_t* value);
    /// <summary>
    /// Gets the id of the provider.
    /// </summary>
    ASPOSE_CELLS_API U16String GetProviderId();
    /// <summary>
    /// Gets the id of the provider.
    /// </summary>
    ASPOSE_CELLS_API void SetProviderId(const U16String& value);
    /// <summary>
    /// Gets the id of the provider.
    /// </summary>
    ASPOSE_CELLS_API void SetProviderId(const char16_t* value);
    
};

} }

#endif
