// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_SHADOWEFFECT_H
#define ASPOSE_CELLS_DRAWING_SHADOWEFFECT_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/PresetShadowType.h"

namespace Aspose { namespace Cells {
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class ShadowEffect_Impl;

/// <summary>
/// This class specifies the shadow effect of the chart element or shape.
/// </summary>
class ShadowEffect {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ShadowEffect_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ShadowEffect(ShadowEffect_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ShadowEffect(const ShadowEffect& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ShadowEffect();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ShadowEffect& operator=(const ShadowEffect& src);
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
    /// Gets and sets the preset shadow type of the shadow.
    /// </summary>
    ASPOSE_CELLS_API PresetShadowType GetPresetType();
    /// <summary>
    /// Gets and sets the preset shadow type of the shadow.
    /// </summary>
    ASPOSE_CELLS_API void SetPresetType(PresetShadowType value);
    /// <summary>
    /// Gets and sets the color of the shadow.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetColor();
    /// <summary>
    /// Gets and sets the color of the shadow.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const CellsColor& value);
    /// <summary>
    /// Gets and sets the degree of transparency of the shadow. Range from 0.0 (opaque) to 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Gets and sets the degree of transparency of the shadow. Range from 0.0 (opaque) to 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    /// <summary>
    /// Gets and sets the size of the shadow. Range from 0 to 2.0.
    /// Meaningless in inner shadow.
    /// </summary>
    ASPOSE_CELLS_API double GetSize();
    /// <summary>
    /// Gets and sets the size of the shadow. Range from 0 to 2.0.
    /// Meaningless in inner shadow.
    /// </summary>
    ASPOSE_CELLS_API void SetSize(double value);
    /// <summary>
    /// Gets and sets the blur of the shadow. Range from 0 to 100 points.
    /// </summary>
    ASPOSE_CELLS_API double GetBlur();
    /// <summary>
    /// Gets and sets the blur of the shadow. Range from 0 to 100 points.
    /// </summary>
    ASPOSE_CELLS_API void SetBlur(double value);
    /// <summary>
    /// Gets and sets the lighting angle. Range from 0 to 359.9 degrees.
    /// </summary>
    ASPOSE_CELLS_API double GetAngle();
    /// <summary>
    /// Gets and sets the lighting angle. Range from 0 to 359.9 degrees.
    /// </summary>
    ASPOSE_CELLS_API void SetAngle(double value);
    /// <summary>
    /// Gets and sets the distance of the shadow. Range from 0 to 200 points.
    /// </summary>
    ASPOSE_CELLS_API double GetDistance();
    /// <summary>
    /// Gets and sets the distance of the shadow. Range from 0 to 200 points.
    /// </summary>
    ASPOSE_CELLS_API void SetDistance(double value);
    
};

} } }

#endif
