// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPEPATHPOINTCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_SHAPEPATHPOINTCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ShapePathPoint;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class ShapePathPointCollection_Impl;

/// <summary>
/// Represents all shape path points.
/// </summary>
class ShapePathPointCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapePathPointCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapePathPointCollection();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapePathPointCollection(ShapePathPointCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapePathPointCollection(const ShapePathPointCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapePathPointCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapePathPointCollection& operator=(const ShapePathPointCollection& src);
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
    /// Gets shape path point by index.
    /// </summary>
    /// <param name="index">The index</param>
    /// <returns>Returns <see cref="ShapePathPoint"/> object</returns>
    ASPOSE_CELLS_API ShapePathPoint Get(int32_t index);
    /// <summary>
    /// Adds a path point.
    /// </summary>
    /// <param name="x">The x coordinate.</param>
    /// <param name="y">The y coordinate.</param>
    ASPOSE_CELLS_API int32_t Add(int32_t x, int32_t y);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
