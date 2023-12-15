// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_FORMAT3D_H
#define ASPOSE_CELLS_DRAWING_FORMAT3D_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/LightRigType.h"
#include "Aspose.Cells/PresetMaterialType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Bevel;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

class Format3D_Impl;

/// <summary>
/// This class specifies the 3D shape properties for a chart element or shape.
/// </summary>
class Format3D {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Format3D_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Format3D(Format3D_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Format3D(const Format3D& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Format3D();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Format3D& operator=(const Format3D& src);
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
    /// Gets the <see cref="Bevel"/> object that holds the properties associated with defining a bevel on the top or front face of a shape.
    /// </summary>
    ASPOSE_CELLS_API Bevel GetTopBevel();
    /// <summary>
    /// Indicates if the shape has top bevel data.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API bool HasTopBevelData();
    /// <summary>
    /// Gets and sets the material type which is combined with the lighting properties to give the final look and feel of a shape.
    /// Default value is PresetMaterialType.WarmMatte.
    /// </summary>
    ASPOSE_CELLS_API PresetMaterialType GetSurfaceMaterialType();
    /// <summary>
    /// Gets and sets the material type which is combined with the lighting properties to give the final look and feel of a shape.
    /// Default value is PresetMaterialType.WarmMatte.
    /// </summary>
    ASPOSE_CELLS_API void SetSurfaceMaterialType(PresetMaterialType value);
    /// <summary>
    /// Gets and sets the lighting type which is to be applied to the scene of the shape.
    /// Default value is LightRigType.ThreePoint.
    /// </summary>
    ASPOSE_CELLS_API LightRigType GetSurfaceLightingType();
    /// <summary>
    /// Gets and sets the lighting type which is to be applied to the scene of the shape.
    /// Default value is LightRigType.ThreePoint.
    /// </summary>
    ASPOSE_CELLS_API void SetSurfaceLightingType(LightRigType value);
    /// <summary>
    /// Gets and sets the lighting angle. Range from 0 to 359.9 degrees.
    /// </summary>
    ASPOSE_CELLS_API double GetLightingAngle();
    /// <summary>
    /// Gets and sets the lighting angle. Range from 0 to 359.9 degrees.
    /// </summary>
    ASPOSE_CELLS_API void SetLightingAngle(double value);
    
};

} } }

#endif
