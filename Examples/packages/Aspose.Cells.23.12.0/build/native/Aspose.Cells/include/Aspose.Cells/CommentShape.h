// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_COMMENTSHAPE_H
#define ASPOSE_CELLS_DRAWING_COMMENTSHAPE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells {
    class Comment;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class CommentShape_Impl;

/// <summary>
/// Represents the shape of the comment.
/// </summary>
class CommentShape : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CommentShape_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CommentShape(CommentShape_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CommentShape(const CommentShape& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API CommentShape(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CommentShape();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CommentShape& operator=(const CommentShape& src);
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
    /// Gets the comment object.
    /// </summary>
    ASPOSE_CELLS_API Comment GetComment();
    
};

} } }

#endif
