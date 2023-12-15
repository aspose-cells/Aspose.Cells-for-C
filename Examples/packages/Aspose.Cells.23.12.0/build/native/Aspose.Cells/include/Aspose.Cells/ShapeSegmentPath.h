// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPESEGMENTPATH_H
#define ASPOSE_CELLS_DRAWING_SHAPESEGMENTPATH_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/ShapePathType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ShapePathPointCollection;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class ShapeSegmentPath_Impl;

/// <summary>
/// Represents a segment path in a path of the freeform.
/// </summary>
class ShapeSegmentPath {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapeSegmentPath_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapeSegmentPath(ShapeSegmentPath_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapeSegmentPath(const ShapeSegmentPath& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapeSegmentPath();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapeSegmentPath& operator=(const ShapeSegmentPath& src);
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
    /// Gets the path segment type
    /// </summary>
    ASPOSE_CELLS_API ShapePathType GetType();
    /// <summary>
    /// Gets the points in path segment
    /// </summary>
    ASPOSE_CELLS_API ShapePathPointCollection GetPoints();
    
};

} } }

#endif
