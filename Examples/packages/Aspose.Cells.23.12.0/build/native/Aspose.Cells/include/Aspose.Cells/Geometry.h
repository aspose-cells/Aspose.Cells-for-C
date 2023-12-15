// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_GEOMETRY_H
#define ASPOSE_CELLS_DRAWING_GEOMETRY_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ShapeGuideCollection;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class Geometry_Impl;

/// <summary>
/// Represents a geometric shape.
/// </summary>
class Geometry {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Geometry_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Geometry(Geometry_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Geometry(const Geometry& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Geometry();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Geometry& operator=(const Geometry& src);
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
    /// Gets a collection of shape adjust value
    /// </summary>
    ASPOSE_CELLS_API ShapeGuideCollection GetShapeAdjustValues();
    
};

} } }

#endif
