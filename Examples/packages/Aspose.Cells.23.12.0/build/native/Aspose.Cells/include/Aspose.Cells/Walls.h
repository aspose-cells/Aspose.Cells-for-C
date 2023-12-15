// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_WALLS_H
#define ASPOSE_CELLS_CHARTS_WALLS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Floor.h"

namespace Aspose { namespace Cells { namespace Charts {

class Walls_Impl;

/// <summary>
/// Encapsulates the object that represents the walls of a 3-D chart.
/// </summary>
class Walls : public Floor {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Walls_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Walls(Walls_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Walls(const Walls& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API Walls(const Floor& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Walls();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Walls& operator=(const Walls& src);
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
    /// Gets the x coordinate of the left-bottom corner of Wall center in units of 1/4000 of chart's width after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCenterX();
    /// <summary>
    /// Gets the y coordinate of the left-bottom corner of Wall center in units of 1/4000 of chart's height after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCenterY();
    /// <summary>
    /// Gets the width of left to right in units of 1/4000 of chart's width after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetWidth();
    /// <summary>
    /// Gets the depth front to back in units of 1/4000 of chart's width after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDepth();
    /// <summary>
    /// Gets the height of top to bottom in units of 1/4000 of chart's height after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHeight();
    /// <summary>
    /// Gets the x coordinate of the left-bottom corner of Wall center in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCenterXPx();
    /// <summary>
    /// Gets the y coordinate of the left-bottom corner of Wall center in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCenterYPx();
    /// <summary>
    /// Gets the width of left to right in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetWidthPx();
    /// <summary>
    /// Gets the depth front to back in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDepthPx();
    /// <summary>
    /// Gets the height of top to bottom in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetHeightPx();
    /// <summary>
    /// Gets the number of cube points after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCubePointCount();
    /// <summary>
    /// Gets x-coordinate of the apex point of walls cube after calls Chart.Calculate() method.
    /// The number of apex points of walls cube is eight
    /// </summary>
    ASPOSE_CELLS_API float GetCubePointXPx(int32_t index);
    /// <summary>
    /// Gets y-coordinate of the apex point of walls cube after calls Chart.Calculate() method.
    /// The number of apex points of walls cube is eight.
    /// </summary>
    ASPOSE_CELLS_API float GetCubePointYPx(int32_t index);
    
};

} } }

#endif
