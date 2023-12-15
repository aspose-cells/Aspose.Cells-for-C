// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPEPATH_H
#define ASPOSE_CELLS_DRAWING_SHAPEPATH_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ShapeSegmentPathCollection;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class ShapePath_Impl;

/// <summary>
/// Represents a creation path consisting of a series of moves, lines and curves that when combined will form a geometric shape.
/// </summary>
class ShapePath {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapePath_Impl* _impl;
    
public:
    /// <summary>
    /// Initializes a new instance of the <see cref="ShapePath"/> class.
    /// </summary>
    ASPOSE_CELLS_API ShapePath();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapePath(ShapePath_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapePath(const ShapePath& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapePath();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapePath& operator=(const ShapePath& src);
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
    /// Gets <see cref="ShapeSegmentPathCollection"/> list
    /// </summary>
    ASPOSE_CELLS_API ShapeSegmentPathCollection GetPathSegementList();
    
};

} } }

#endif
