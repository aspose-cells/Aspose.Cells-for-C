// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_GRADIENTSTOPCOLLECTION_H
#define ASPOSE_CELLS_DRAWING_GRADIENTSTOPCOLLECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Color.h"

namespace Aspose { namespace Cells {
    class CellsColor;
} }

namespace Aspose { namespace Cells { namespace Drawing {
    class GradientStop;
} } }

namespace Aspose { namespace Cells { namespace Drawing {

using namespace Aspose::Cells;

class GradientStopCollection_Impl;

/// <summary>
/// Represents the gradient stop collection.
/// </summary>
class GradientStopCollection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    GradientStopCollection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API GradientStopCollection(GradientStopCollection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API GradientStopCollection(const GradientStopCollection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~GradientStopCollection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API GradientStopCollection& operator=(const GradientStopCollection& src);
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
    /// Add a gradient stop.
    /// </summary>
    /// <param name="position">The position of the stop,in unit of percentage.</param>
    /// <param name="color">The color of the stop.</param>
    /// <param name="alpha">The alpha of the color.</param>
    ASPOSE_CELLS_API void Add(double position, const CellsColor& color, int32_t alpha);
    /// <summary>
    /// Add a gradient stop.
    /// </summary>
    /// <param name="position">The position of the stop,in unit of percentage.</param>
    /// <param name="color">The color of the stop.</param>
    /// <param name="alpha">The alpha of the color.</param>
    ASPOSE_CELLS_API void Add(double position, const Aspose::Cells::Color& color, int32_t alpha);
    /// <summary>
    /// Gets the gradient stop by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The gradient stop.</returns>
    ASPOSE_CELLS_API GradientStop Get(int32_t index);
    /// <summary>
    /// Gets the gradient stop by the index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>The gradient stop.</returns>
    ASPOSE_CELLS_API void Set(const GradientStop& value, int32_t index);
    
    ASPOSE_CELLS_API int32_t GetCount();
};

} } }

#endif
