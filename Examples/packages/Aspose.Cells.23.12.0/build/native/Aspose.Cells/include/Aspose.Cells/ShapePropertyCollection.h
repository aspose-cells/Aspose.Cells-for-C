// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHAPEPROPERTYCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_SHAPEPROPERTYCOLLECTION_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class GlowEffect;
    class Format3D;
    class ShadowEffect;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class ShapePropertyCollection_Impl;

/// <summary>
/// This class specifies the visual shape properties for a chart element or shape.
/// </summary>
class ShapePropertyCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShapePropertyCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShapePropertyCollection(ShapePropertyCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShapePropertyCollection(const ShapePropertyCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShapePropertyCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShapePropertyCollection& operator=(const ShapePropertyCollection& src);
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
    /// Represents a <see cref="GlowEffect"/> object that specifies glow effect for the chart element or shape.
    /// </summary>
    ASPOSE_CELLS_API GlowEffect GetGlowEffect();
    /// <summary>
    /// Clears the glow effect of the shape.
    /// </summary>
    ASPOSE_CELLS_API void ClearGlowEffect();
    /// <summary>
    /// Indicates if the shape has glow effect data.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API bool HasGlowEffect();
    /// <summary>
    /// Represents a <see cref="Format3D"/> object that specifies 3D shape properties for the chart element or shape.
    /// </summary>
    ASPOSE_CELLS_API Format3D GetFormat3D();
    /// <summary>
    /// Indicates if the shape has 3d format data.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API bool HasFormat3D();
    /// <summary>
    /// Clears the 3D shape properties of the shape.
    /// </summary>
    ASPOSE_CELLS_API void ClearFormat3D();
    /// <summary>
    /// Gets and sets the radius of blur to apply to the edges, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetSoftEdgeRadius();
    /// <summary>
    /// Gets and sets the radius of blur to apply to the edges, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetSoftEdgeRadius(double value);
    /// <summary>
    /// Represents a <see cref="ShadowEffect"/> object that specifies shadow effect for the chart element or shape.
    /// </summary>
    ASPOSE_CELLS_API ShadowEffect GetShadowEffect();
    /// <summary>
    /// Clears the shadow effect of the chart element or shape.
    /// </summary>
    ASPOSE_CELLS_API void ClearShadowEffect();
    /// <summary>
    /// Indicates if the shape has shadow effect data.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API bool HasShadowEffect();
    
};

} } }

#endif
