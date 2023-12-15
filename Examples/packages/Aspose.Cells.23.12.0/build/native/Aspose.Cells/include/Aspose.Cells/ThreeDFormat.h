// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_THREEDFORMAT_H
#define ASPOSE_CELLS_DRAWING_THREEDFORMAT_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/BevelType.h"
#include "Aspose.Cells/LightRigDirectionType.h"
#include "Aspose.Cells/LightRigType.h"
#include "Aspose.Cells/PresetCameraType.h"
#include "Aspose.Cells/PresetMaterialType.h"

namespace Aspose { namespace Cells {
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class ThreeDFormat_Impl;

/// <summary>
/// Represents a shape's three-dimensional formatting.
/// </summary>
class ThreeDFormat {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ThreeDFormat_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ThreeDFormat(ThreeDFormat_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ThreeDFormat(const ThreeDFormat& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ThreeDFormat();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ThreeDFormat& operator=(const ThreeDFormat& src);
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
    /// Gets and sets the width of the bottom bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetBottomBevelWidth();
    /// <summary>
    /// Gets and sets the width of the bottom bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetBottomBevelWidth(double value);
    /// <summary>
    /// Gets and sets the height of the bottom bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetBottomBevelHeight();
    /// <summary>
    /// Gets and sets the height of the bottom bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetBottomBevelHeight(double value);
    /// <summary>
    /// Gets and sets the type of the bottom bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API BevelType GetBottomBevelType();
    /// <summary>
    /// Gets and sets the type of the bottom bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetBottomBevelType(BevelType value);
    /// <summary>
    /// Gets and sets the width of the top bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetTopBevelWidth();
    /// <summary>
    /// Gets and sets the width of the top bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetTopBevelWidth(double value);
    /// <summary>
    /// Gets and sets the height of the top bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API double GetTopBevelHeight();
    /// <summary>
    /// Gets and sets the height of the top bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetTopBevelHeight(double value);
    /// <summary>
    /// Gets and sets the type of the top bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API BevelType GetTopBevelType();
    /// <summary>
    /// Gets and sets the type of the top bevel, or how far into the shape it is applied.
    /// In unit of Points.
    /// </summary>
    ASPOSE_CELLS_API void SetTopBevelType(BevelType value);
    /// <summary>
    /// Represents the preset material which is combined with the lighting properties to give the
    /// final look and feel of a shape.
    /// </summary>
    ASPOSE_CELLS_API PresetMaterialType GetMaterial();
    /// <summary>
    /// Represents the preset material which is combined with the lighting properties to give the
    /// final look and feel of a shape.
    /// </summary>
    ASPOSE_CELLS_API void SetMaterial(PresetMaterialType value);
    /// <summary>
    /// Gets and sets the contour color on a shape.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetContourColor();
    /// <summary>
    /// Gets and sets the contour color on a shape.
    /// </summary>
    ASPOSE_CELLS_API void SetContourColor(const CellsColor& value);
    /// <summary>
    /// Gets and sets the contour width on the shape, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetContourWidth();
    /// <summary>
    /// Gets and sets the contour width on the shape, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetContourWidth(double value);
    /// <summary>
    /// Gets the extrusion color on a shape.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetExtrusionColor();
    /// <summary>
    /// Gets the extrusion color on a shape.
    /// </summary>
    ASPOSE_CELLS_API void SetExtrusionColor(const CellsColor& value);
    /// <summary>
    /// Gets and sets the extrusion height of the applied to the shape, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetExtrusionHeight();
    /// <summary>
    /// Gets and sets the extrusion height of the applied to the shape, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetExtrusionHeight(double value);
    /// <summary>
    /// Defines the distance from ground for the 3D shape.
    /// </summary>
    ASPOSE_CELLS_API double GetZ();
    /// <summary>
    /// Defines the distance from ground for the 3D shape.
    /// </summary>
    ASPOSE_CELLS_API void SetZ(double value);
    /// <summary>
    /// Gets and sets the angle of the extrusion lights.
    /// </summary>
    ASPOSE_CELLS_API double GetLightAngle();
    /// <summary>
    /// Gets and sets the angle of the extrusion lights.
    /// </summary>
    ASPOSE_CELLS_API void SetLightAngle(double value);
    /// <summary>
    /// Gets and sets type of light rig.
    /// </summary>
    ASPOSE_CELLS_API LightRigType GetLighting();
    /// <summary>
    /// Gets and sets type of light rig.
    /// </summary>
    ASPOSE_CELLS_API void SetLighting(LightRigType value);
    /// <summary>
    /// Gets and sets the direction from which the light rig is oriented in relation to the scene.
    /// </summary>
    ASPOSE_CELLS_API LightRigDirectionType GetLightingDirection();
    /// <summary>
    /// Gets and sets the direction from which the light rig is oriented in relation to the scene.
    /// </summary>
    ASPOSE_CELLS_API void SetLightingDirection(LightRigDirectionType value);
    /// <summary>
    /// Gets and sets the angle at which a ThreeDFormat object can be viewed.
    /// </summary>
    ASPOSE_CELLS_API double GetPerspective();
    /// <summary>
    /// Gets and sets the angle at which a ThreeDFormat object can be viewed.
    /// </summary>
    ASPOSE_CELLS_API void SetPerspective(double value);
    /// <summary>
    /// Gets and sets the rotation of the extruded shape around the x-axis in degrees.
    /// </summary>
    ASPOSE_CELLS_API double GetRotationX();
    /// <summary>
    /// Gets and sets the rotation of the extruded shape around the x-axis in degrees.
    /// </summary>
    ASPOSE_CELLS_API void SetRotationX(double value);
    /// <summary>
    /// Gets and sets the rotation of the extruded shape around the y-axis in degrees.
    /// </summary>
    ASPOSE_CELLS_API double GetRotationY();
    /// <summary>
    /// Gets and sets the rotation of the extruded shape around the y-axis in degrees.
    /// </summary>
    ASPOSE_CELLS_API void SetRotationY(double value);
    /// <summary>
    /// Gets and sets the rotation of the extruded shape around the z-axis in degrees.
    /// </summary>
    ASPOSE_CELLS_API double GetRotationZ();
    /// <summary>
    /// Gets and sets the rotation of the extruded shape around the z-axis in degrees.
    /// </summary>
    ASPOSE_CELLS_API void SetRotationZ(double value);
    /// <summary>
    /// Gets and sets the extrusion preset camera type.
    /// </summary>
    ASPOSE_CELLS_API PresetCameraType GetPresetCameraType();
    /// <summary>
    /// Gets and sets the extrusion preset camera type.
    /// </summary>
    ASPOSE_CELLS_API void SetPresetCameraType(PresetCameraType value);
    /// <summary>
    /// Gets hashcode.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API int32_t GetHashCode();
    
};

} } }

#endif
