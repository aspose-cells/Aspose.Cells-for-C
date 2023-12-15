// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_GRADIENTSTOP_H
#define ASPOSE_CELLS_DRAWING_GRADIENTSTOP_H

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class GradientStop_Impl;

/// <summary>
/// Represents the gradient stop.
/// </summary>
class GradientStop {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    GradientStop_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API GradientStop(GradientStop_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API GradientStop(const GradientStop& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~GradientStop();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API GradientStop& operator=(const GradientStop& src);
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
    /// The position of the stop.
    /// </summary>
    ASPOSE_CELLS_API double GetPosition();
    /// <summary>
    /// The position of the stop.
    /// </summary>
    ASPOSE_CELLS_API void SetPosition(double value);
    /// <summary>
    /// Gets the color of this gradient stop.
    /// </summary>
    ASPOSE_CELLS_API CellsColor GetCellsColor();
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API double GetTransparency();
    /// <summary>
    /// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
    /// </summary>
    ASPOSE_CELLS_API void SetTransparency(double value);
    
};

} } }

#endif
