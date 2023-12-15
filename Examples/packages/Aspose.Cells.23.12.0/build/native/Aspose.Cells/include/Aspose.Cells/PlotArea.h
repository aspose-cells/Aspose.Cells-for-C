// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_PLOTAREA_H
#define ASPOSE_CELLS_CHARTS_PLOTAREA_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ChartFrame.h"

namespace Aspose { namespace Cells { namespace Charts {

class PlotArea_Impl;

/// <summary>
/// Encapsulates the object that represents the plot area in a chart.
/// </summary>
class PlotArea : public ChartFrame {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PlotArea_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PlotArea(PlotArea_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PlotArea(const PlotArea& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API PlotArea(const ChartFrame& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PlotArea();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PlotArea& operator=(const PlotArea& src);
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
    /// Gets or gets the x coordinate of the upper left corner of plot-area bounding box in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetX();
    /// <summary>
    /// Gets or gets the x coordinate of the upper left corner of plot-area bounding box in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetX(int32_t value);
    /// <summary>
    /// Gets or gets the y coordinate of the upper top corner  of plot-area bounding box in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetY();
    /// <summary>
    /// Gets or gets the y coordinate of the upper top corner  of plot-area bounding box in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetY(int32_t value);
    /// <summary>
    /// Gets or sets the height of plot-area bounding box in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetHeight();
    /// <summary>
    /// Gets or sets the height of plot-area bounding box in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetHeight(int32_t value);
    /// <summary>
    /// Gets or sets the width of plot-area bounding box in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetWidth();
    /// <summary>
    /// Gets or sets the width of plot-area bounding box in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetWidth(int32_t value);
    /// <summary>
    /// Gets or gets the x coordinate of the upper top corner of plot area in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetInnerX();
    /// <summary>
    /// Gets or gets the x coordinate of the upper top corner of plot area in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetInnerX(int32_t value);
    /// <summary>
    /// Gets or gets the x coordinate of the upper top corner of plot area in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetInnerY();
    /// <summary>
    /// Gets or gets the x coordinate of the upper top corner of plot area in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetInnerY(int32_t value);
    /// <summary>
    /// Gets or sets the height of plot area in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetInnerHeight();
    /// <summary>
    /// Gets or sets the height of plot area in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetInnerHeight(int32_t value);
    /// <summary>
    /// Gets or sets the width  of plot area in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API int32_t GetInnerWidth();
    /// <summary>
    /// Gets or sets the width  of plot area in units of 1/4000 of the chart area.
    /// </summary>
    /// <remarks>
    /// <p>The plot-area bounding box includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If the value is not created by MS Excel, please call Chart.Calculate() method before calling this method. </p>
    /// <p>The <b>X</b>, <b>Y</b>, <b>Width</b> and <b>Height</b> of <b>PlotArea</b> represents the plot-area
    /// bounding box that includes the plot area, tick marks(tick labels), and a small border around the tick marks.
    /// If you want to get actual size of plot area, you should call <b>InnerX</b>, <b>InnerY</b>, <b>InnerWidth</b> and
    /// <b>InnerHeight</b> properties.</p>
    /// <p>For excel 2007 or latter, the default value is zero. you should call get the value after calling Chart.Calculate().</p>
    /// </remarks>
    ASPOSE_CELLS_API void SetInnerWidth(int32_t value);
    /// <summary>
    /// Set position of the plot area to automatic
    /// </summary>
    ASPOSE_CELLS_API void SetPositionAuto();
    /// <summary>
    /// Indicates whether the plot area is automatic sized.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutomaticSize();
    /// <summary>
    /// Indicates whether the plot area is automatic sized.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutomaticSize(bool value);
    
};

} } }

#endif
