// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_ARCSHAPE_H
#define ASPOSE_CELLS_DRAWING_ARCSHAPE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Shape.h"

namespace Aspose { namespace Cells { namespace Drawing {

class ArcShape_Impl;

/// <summary>
/// Represents the arc shape.
/// </summary>
class ArcShape : public Shape {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ArcShape_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ArcShape(ArcShape_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ArcShape(const ArcShape& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API ArcShape(const Shape& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ArcShape();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ArcShape& operator=(const ArcShape& src);
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
    
};

} } }

#endif
