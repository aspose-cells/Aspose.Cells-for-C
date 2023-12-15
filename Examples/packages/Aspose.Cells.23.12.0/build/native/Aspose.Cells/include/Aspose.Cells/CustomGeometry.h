// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_CUSTOMGEOMETRY_H
#define ASPOSE_CELLS_DRAWING_CUSTOMGEOMETRY_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Geometry.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class ShapePathCollection;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class CustomGeometry_Impl;

/// <summary>
/// Represents a custom geometric shape.
/// </summary>
class CustomGeometry : public Geometry {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    CustomGeometry_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API CustomGeometry(CustomGeometry_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API CustomGeometry(const CustomGeometry& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API CustomGeometry(const Geometry& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~CustomGeometry();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API CustomGeometry& operator=(const CustomGeometry& src);
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
    /// Gets path collection information when shape is a NotPrimitive autoshape
    /// </summary>
    ASPOSE_CELLS_API ShapePathCollection GetPaths();
    
};

} } }

#endif
