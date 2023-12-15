// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_REFLECTIONEFFECT_H
#define ASPOSE_CELLS_DRAWING_REFLECTIONEFFECT_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/ReflectionEffectType.h"

namespace Aspose { namespace Cells { namespace Drawing {

class ReflectionEffect_Impl;

/// <summary>
/// This class specifies a reflection effect.
/// </summary>
class ReflectionEffect {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ReflectionEffect_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ReflectionEffect(ReflectionEffect_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ReflectionEffect(const ReflectionEffect& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ReflectionEffect();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ReflectionEffect& operator=(const ReflectionEffect& src);
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
    /// Gets and sets the preset reflection effect.
    /// </summary>
    ASPOSE_CELLS_API ReflectionEffectType GetType();
    /// <summary>
    /// Gets and sets the preset reflection effect.
    /// </summary>
    ASPOSE_CELLS_API void SetType(ReflectionEffectType value);
    /// <summary>
    /// Gets and sets the degree of the starting reflection transparency as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Gets and sets the degree of the starting reflection transparency as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    /// <summary>
    /// Gets and sets the end position (along the alpha gradient ramp) of the end alpha value,in unit of percentage
    /// </summary>
    ASPOSE_CELLS_API double GetSize();
    /// <summary>
    /// Gets and sets the end position (along the alpha gradient ramp) of the end alpha value,in unit of percentage
    /// </summary>
    ASPOSE_CELLS_API void SetSize(double value);
    /// <summary>
    /// Gets and sets the blur radius,in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetBlur();
    /// <summary>
    /// Gets and sets the blur radius,in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetBlur(double value);
    /// <summary>
    /// Gets and sets the direction of the alpha gradient ramp relative to the shape itself.
    /// </summary>
    ASPOSE_CELLS_API double GetDirection();
    /// <summary>
    /// Gets and sets the direction of the alpha gradient ramp relative to the shape itself.
    /// </summary>
    ASPOSE_CELLS_API void SetDirection(double value);
    /// <summary>
    /// Gets and sets how far to distance the shadow,in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetDistance();
    /// <summary>
    /// Gets and sets how far to distance the shadow,in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetDistance(double value);
    /// <summary>
    /// Gets and sets the direction to offset the reflection.
    /// </summary>
    ASPOSE_CELLS_API double GetFadeDirection();
    /// <summary>
    /// Gets and sets the direction to offset the reflection.
    /// </summary>
    ASPOSE_CELLS_API void SetFadeDirection(double value);
    /// <summary>
    /// Gets and sets if the reflection should rotate with the shape.
    /// </summary>
    ASPOSE_CELLS_API bool GetRotWithShape();
    /// <summary>
    /// Gets and sets if the reflection should rotate with the shape.
    /// </summary>
    ASPOSE_CELLS_API void SetRotWithShape(bool value);
    
};

} } }

#endif
