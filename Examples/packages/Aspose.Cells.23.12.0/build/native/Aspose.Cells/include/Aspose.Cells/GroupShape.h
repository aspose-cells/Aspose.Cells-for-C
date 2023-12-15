// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_GROUPSHAPE_H
#define ASPOSE_CELLS_DRAWING_GROUPSHAPE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Shape;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class GroupShape_Impl;

/// <summary>
/// Represents the group shape which contains the individual shapes.
/// </summary>
class GroupShape : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    GroupShape_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API GroupShape(GroupShape_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API GroupShape(const GroupShape& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API GroupShape(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~GroupShape();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API GroupShape& operator=(const GroupShape& src);
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
    /// Gets the child shape by index.
    /// </summary>
    /// <param name="index">the child shape index.</param>
    /// <returns>return the child shape.</returns>
    ASPOSE_CELLS_API Shape Get(int32_t index);
    /// <summary>
    /// Ungroups the shape items.
    /// </summary>
    /// <remarks>If the group shape is grouped by another group shape,nothing will be done.</remarks>
    ASPOSE_CELLS_API void Ungroup();
    /// <summary>
    /// Gets the shapes grouped by this shape.
    /// </summary>
    ASPOSE_CELLS_API Vector<Shape> GetGroupedShapes();
    
};

} } }

#endif
