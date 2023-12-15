// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPEPATHPOINT_H
#define ASPOSE_CELLS_DRAWING_SHAPEPATHPOINT_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {

class ShapePathPoint_Impl;

/// <summary>
/// Represents an x-y coordinate within the path coordinate space.
/// </summary>
class ShapePathPoint {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapePathPoint_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapePathPoint(ShapePathPoint_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapePathPoint(const ShapePathPoint& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapePathPoint();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapePathPoint& operator=(const ShapePathPoint& src);
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
    /// Gets and sets x coordinate for this position coordinate.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetX();
    /// <summary>
    /// Gets and sets x coordinate for this position coordinate.
    /// </summary>
    ASPOSE_CELLS_API void SetX(int32_t value);
    /// <summary>
    /// Gets y coordinate for this position coordinate.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetY();
    /// <summary>
    /// Gets y coordinate for this position coordinate.
    /// </summary>
    ASPOSE_CELLS_API void SetY(int32_t value);
    
};

} } }

#endif
