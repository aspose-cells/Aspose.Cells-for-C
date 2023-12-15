// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHARTPOINT_H
#define ASPOSE_CELLS_CHARTS_CHARTPOINT_H

#include "Aspose.Cells/Export.h"

#include "Aspose.Cells/CellValueType.h"

namespace Aspose { namespace Cells { namespace Drawing {
    class Line;
    class Area;
    class ShapePropertyCollection;
} } }

namespace Aspose { namespace Cells { namespace Charts {
    class Marker;
    class DataLabels;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class ChartPoint_Impl;

/// <summary>
/// Represents a single point in a series in a chart.
/// </summary>
class ASPOSE_CELLS_API2 ChartPoint {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ChartPoint_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ChartPoint(ChartPoint_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ChartPoint(const ChartPoint& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ChartPoint();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ChartPoint& operator=(const ChartPoint& src);
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
    /// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetExplosion();
    /// <summary>
    /// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
    /// </summary>
    ASPOSE_CELLS_API void SetExplosion(int32_t value);
    /// <summary>
    /// True if the chartpoint has a shadow.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// True if the chartpoint has a shadow.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    /// <summary>
    /// Gets the <see cref="Line">border</see>.
    /// </summary>
    ASPOSE_CELLS_API Line GetBorder();
    /// <summary>
    /// Gets the <see cref="Area">area</see>.
    /// </summary>
    ASPOSE_CELLS_API Area GetArea();
    /// <summary>
    /// Gets the <see cref="Marker">marker</see>.
    /// </summary>
    ASPOSE_CELLS_API Marker GetMarker();
    /// <summary>
    /// Returns a DataLabels object that represents the data label associated with the point.
    /// </summary>
    ASPOSE_CELLS_API DataLabels GetDataLabels();
    /// <summary>
    /// Gets Y value type of the chart point.
    /// </summary>
    ASPOSE_CELLS_API CellValueType GetYValueType();
    /// <summary>
    /// Gets X value type of the chart point.
    /// </summary>
    ASPOSE_CELLS_API CellValueType GetXValueType();
    /// <summary>
    /// Gets the <see cref="ShapePropertyCollection"/> object that holds the visual shape properties of the ChartPoint.
    /// </summary>
    ASPOSE_CELLS_API ShapePropertyCollection GetShapeProperties();
    /// <summary>
    /// Gets or sets a value indicates whether this data points is in the second pie or bar
    /// on a pie of pie or bar of pie chart
    /// </summary>
    ASPOSE_CELLS_API bool IsInSecondaryPlot();
    /// <summary>
    /// Gets or sets a value indicates whether this data points is in the second pie or bar
    /// on a pie of pie or bar of pie chart
    /// </summary>
    ASPOSE_CELLS_API void SetIsInSecondaryPlot(bool value);
    /// <summary>
    /// Gets the x coordinate of the upper left corner in units of 1/4000 of chart's width after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetShapeX();
    /// <summary>
    /// Gets the y coordinate of the upper left corner in units of 1/4000 of chart's height after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetShapeY();
    /// <summary>
    /// Gets the width in units of 1/4000 of chart's width after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetShapeWidth();
    /// <summary>
    /// Gets the height in units of 1/4000 of chart's height after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetShapeHeight();
    /// <summary>
    /// Gets the x coordinate of the upper left corner in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetShapeXPx();
    /// <summary>
    /// Gets the y coordinate of the upper left corner in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetShapeYPx();
    /// <summary>
    /// Gets the width in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetShapeWidthPx();
    /// <summary>
    /// Gets the height in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetShapeHeightPx();
    /// <summary>
    /// Gets the width of border in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBorderWidthPx();
    /// <summary>
    /// Gets the radius of bubble, pie or doughnut in units of pixels after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetRadiusPx();
    /// <summary>
    /// Gets the inner radius of doughnut slice in units of pixels after calls Chart.Calculate() method.
    /// Applies to Doughnut chart.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetInnerRadiusPx();
    /// <summary>
    /// Gets the starting angle for the pie section, measured in degrees clockwise from the x-axis after calls Chart.Calculate() method.
    /// Applies to Pie chart.
    /// </summary>
    ASPOSE_CELLS_API float GetStartAngle();
    /// <summary>
    /// Gets the ending angle for the pie section, measured in degrees clockwise from the x-axis after calls Chart.Calculate() method.
    /// Applies to Pie chart.
    /// </summary>
    ASPOSE_CELLS_API float GetEndAngle();
    /// <summary>
    /// Gets the x coordinate of starting point for the pie section after calls Chart.Calculate() method.
    /// Applies to Pie and Doughnut  chart.
    /// </summary>
    ASPOSE_CELLS_API float GetArcStartPointXPx();
    /// <summary>
    /// Gets the y coordinate of starting point for the pie section after calls Chart.Calculate() method.
    /// Applies to Pie and Doughnut  chart.
    /// </summary>
    ASPOSE_CELLS_API float GetArcStartPointYPx();
    /// <summary>
    /// Gets the x coordinate of ending point for the pie section after calls Chart.Calculate() method.
    /// Applies to Pie and Doughnut  chart.
    /// </summary>
    ASPOSE_CELLS_API float GetArcEndPointXPx();
    /// <summary>
    /// Gets the y coordinate of ending point for the pie section after calls Chart.Calculate() method.
    /// Applies to Pie and Doughnut chart.
    /// </summary>
    ASPOSE_CELLS_API float GetArcEndPointYPx();
    /// <summary>
    /// Gets the x coordinate of starting point for the pie section after calls Chart.Calculate() method.
    /// Applies to Doughnut chart.
    /// </summary>
    ASPOSE_CELLS_API float GetInnerArcStartPointXPx();
    /// <summary>
    /// Gets the y coordinate of starting point for the pie section after calls Chart.Calculate() method.
    /// Applies to Doughnut chart.
    /// </summary>
    ASPOSE_CELLS_API float GetInnerArcStartPointYPx();
    /// <summary>
    /// Gets the x coordinate of ending point for the pie section after calls Chart.Calculate() method.
    /// Applies to Doughnut chart.
    /// </summary>
    ASPOSE_CELLS_API float GetInnerArcEndPointXPx();
    /// <summary>
    /// Gets the y coordinate of ending point for the pie section after calls Chart.Calculate() method.
    /// Applies to Doughnut chart.
    /// </summary>
    ASPOSE_CELLS_API float GetInnerArcEndPointYPx();
    /// <summary>
    /// Gets the number of top points after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTopPointCount();
    /// <summary>
    /// Gets x-coordinate of the top point of shape after calls Chart.Calculate() method.
    /// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid and Area3D
    /// </summary>
    ASPOSE_CELLS_API float GetTopPointXPx(int32_t index);
    /// <summary>
    /// Gets y-coordinate of the top point of shape after calls Chart.Calculate() method.
    /// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid and Area3D
    /// </summary>
    ASPOSE_CELLS_API float GetTopPointYPx(int32_t index);
    /// <summary>
    /// Gets the number of bottom points  after calls Chart.Calculate() method.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBottomPointCount();
    /// <summary>
    /// Gets x-coordinate of the bottom point of shape after calls Chart.Calculate() method.
    /// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid
    /// </summary>
    ASPOSE_CELLS_API float GetBottomPointXPx(int32_t index);
    /// <summary>
    /// Gets y-coordinate of the bottom point of shape  after calls Chart.Calculate() method.
    /// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid
    /// </summary>
    ASPOSE_CELLS_API float GetBottomPointYPx(int32_t index);
    /// <summary>
    /// Gets the number of the points on category axis after calls Chart.Calculate() method. Only applies to area chart.
    /// </summary>
    /// <remarks>
    /// Area 2D chart return 1
    /// Area 3D chart return 2.
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetOnCategoryAxisPointCount();
    /// <summary>
    /// Gets x-coordinate of the point on category axis after calls Chart.Calculate() method. Only applies to Area chart.
    /// </summary>
    /// <remarks>
    /// Area 2D chart: index is 0.
    /// Area 3D chart: index is 0 or 1.
    /// </remarks>
    ASPOSE_CELLS_API float GetOnCategoryAxisPointXPx(int32_t index);
    /// <summary>
    /// Gets y-coordinate of the point on category axis after calls Chart.Calculate() method. Only applies to Area chart.
    /// </summary>
    /// <remarks>
    /// Area 2D chart: index is 0.
    /// Area 3D chart: index is 0 or 1.
    /// </remarks>
    ASPOSE_CELLS_API float GetOnCategoryAxisPointYPx(int32_t index);
    
};

} } }

#endif
