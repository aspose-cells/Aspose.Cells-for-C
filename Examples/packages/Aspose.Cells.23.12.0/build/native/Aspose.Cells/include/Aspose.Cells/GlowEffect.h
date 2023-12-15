// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_GLOWEFFECT_H
#define ASPOSE_CELLS_DRAWING_GLOWEFFECT_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class GlowEffect_Impl;

/// <summary>
/// This class specifies a glow effect, in which a color blurred outline
/// is added outside the edges of the object.
/// </summary>
class GlowEffect {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    GlowEffect_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API GlowEffect(GlowEffect_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API GlowEffect(const GlowEffect& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~GlowEffect();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API GlowEffect& operator=(const GlowEffect& src);
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
    /// Gets the color of the glow effect.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetColor();
    /// <summary>
    /// Gets the color of the glow effect.
    /// </summary>
    ASPOSE_CELLS_API void SetColor(const CellsColor& value);
    /// <summary>
    /// Gets and sets the radius of the glow, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API double GetSize();
    /// <summary>
    /// Gets and sets the radius of the glow, in unit of points.
    /// </summary>
    ASPOSE_CELLS_API void SetSize(double value);
    /// <summary>
    /// Gets and sets the degree of transparency of the glow effect. Range from 0.0 (opaque) to 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Gets and sets the degree of transparency of the glow effect. Range from 0.0 (opaque) to 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    
};

} } }

#endif
