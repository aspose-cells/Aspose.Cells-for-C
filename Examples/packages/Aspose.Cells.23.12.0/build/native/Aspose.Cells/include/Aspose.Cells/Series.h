// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_SERIES_H
#define ASPOSE_CELLS_CHARTS_SERIES_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/Bar3DShapeType.h"
#include "Aspose.Cells/BubbleSizeRepresents.h"
#include "Aspose.Cells/ChartSplitType.h"
#include "Aspose.Cells/ChartType.h"

namespace Aspose { namespace Cells { namespace Charts {
    class SeriesLayoutProperties;
    class ChartPointCollection;
    class TrendlineCollection;
    class DataLabels;
    class Marker;
    class ErrorBar;
    class DropBars;
    class LegendEntry;
} } }

namespace Aspose { namespace Cells { namespace Drawing {
    class Area;
    class Line;
    class ShapePropertyCollection;
} } }

namespace Aspose { namespace Cells { namespace Charts {

using namespace Aspose::Cells;
using namespace Aspose::Cells::Drawing;

class Series_Impl;

/// <summary>
/// Encapsulates the object that represents a single data series in a chart.
/// </summary>
class Series {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    Series_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API Series(Series_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API Series(const Series& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~Series();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API Series& operator=(const Series& src);
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
    /// Indicates whether the series is selected or filtered.True represents this series is filtered, and it will not be displayed on the chart.
    /// </summary>
    ASPOSE_CELLS_API bool IsFiltered();
    /// <summary>
    /// Indicates whether the series is selected or filtered.True represents this series is filtered, and it will not be displayed on the chart.
    /// </summary>
    ASPOSE_CELLS_API void SetIsFiltered(bool value);
    /// <summary>
    /// Represents the properties of layout.
    /// </summary>
    ASPOSE_CELLS_API SeriesLayoutProperties GetLayoutProperties();
    /// <summary>
    /// Moves the series up or down.
    /// </summary>
    /// <param name="count">The number of moving up or down.
    /// Move the series up if this is less than zero;
    /// Move the series down if this is greater than zero.
    /// </param>
    ASPOSE_CELLS_API void Move(int32_t count);
    /// <summary>
    /// Gets the collection of points in a series in a chart.
    /// </summary>
    /// <remarks>
    /// When the chart is Pie of Pie or Bar of Pie, the last point is other point in first pie plot.
    /// </remarks>
    ASPOSE_CELLS_API ChartPointCollection GetPoints();
    /// <summary>
    /// Represents the background area of Series object.
    /// </summary>
    ASPOSE_CELLS_API Area GetArea();
    /// <summary>
    /// Represents border of Series object.
    /// </summary>
    ASPOSE_CELLS_API Line GetBorder();
    /// <summary>
    /// Gets or sets the name of the data series.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets or sets the name of the data series.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets or sets the name of the data series.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets the series's name that displays on the chart graph.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDisplayName();
    /// <summary>
    /// Gets the number of the data values.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetCountOfDataValues();
    /// <summary>
    /// Indicates whether the data source is vertical.
    /// </summary>
    ASPOSE_CELLS_API bool IsVerticalValues();
    /// <summary>
    /// Represents the data of the chart series.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValues();
    /// <summary>
    /// Represents the data of the chart series.
    /// </summary>
    ASPOSE_CELLS_API void SetValues(const U16String& value);
    /// <summary>
    /// Represents the data of the chart series.
    /// </summary>
    ASPOSE_CELLS_API void SetValues(const char16_t* value);
    /// <summary>
    /// Represents format code of Values‘s NumberList.
    /// </summary>
    ASPOSE_CELLS_API U16String GetValuesFormatCode();
    /// <summary>
    /// Represents format code of Values‘s NumberList.
    /// </summary>
    ASPOSE_CELLS_API void SetValuesFormatCode(const U16String& value);
    /// <summary>
    /// Represents format code of Values‘s NumberList.
    /// </summary>
    ASPOSE_CELLS_API void SetValuesFormatCode(const char16_t* value);
    /// <summary>
    /// Represents the x values of the chart series.
    /// </summary>
    ASPOSE_CELLS_API U16String GetXValues();
    /// <summary>
    /// Represents the x values of the chart series.
    /// </summary>
    ASPOSE_CELLS_API void SetXValues(const U16String& value);
    /// <summary>
    /// Represents the x values of the chart series.
    /// </summary>
    ASPOSE_CELLS_API void SetXValues(const char16_t* value);
    /// <summary>
    /// Gets or sets the bubble sizes values of the chart series.
    /// </summary>
    ASPOSE_CELLS_API U16String GetBubbleSizes();
    /// <summary>
    /// Gets or sets the bubble sizes values of the chart series.
    /// </summary>
    ASPOSE_CELLS_API void SetBubbleSizes(const U16String& value);
    /// <summary>
    /// Gets or sets the bubble sizes values of the chart series.
    /// </summary>
    ASPOSE_CELLS_API void SetBubbleSizes(const char16_t* value);
    /// <summary>
    /// Returns an object that represents a collection of all the trendlines for the series.
    /// </summary>
    ASPOSE_CELLS_API TrendlineCollection GetTrendLines();
    /// <summary>
    /// Represents curve smoothing.
    /// True if curve smoothing is turned on for the line chart or scatter chart.
    /// Applies only to line and scatter connected by lines charts.
    /// </summary>
    ASPOSE_CELLS_API bool GetSmooth();
    /// <summary>
    /// Represents curve smoothing.
    /// True if curve smoothing is turned on for the line chart or scatter chart.
    /// Applies only to line and scatter connected by lines charts.
    /// </summary>
    ASPOSE_CELLS_API void SetSmooth(bool value);
    /// <summary>
    /// True if the series has a shadow.
    /// </summary>
    ASPOSE_CELLS_API bool GetShadow();
    /// <summary>
    /// True if the series has a shadow.
    /// </summary>
    ASPOSE_CELLS_API void SetShadow(bool value);
    /// <summary>
    /// True if the series has a three-dimensional appearance.
    /// Applies only to bubble charts.
    /// </summary>
    ASPOSE_CELLS_API bool GetHas3DEffect();
    /// <summary>
    /// True if the series has a three-dimensional appearance.
    /// Applies only to bubble charts.
    /// </summary>
    ASPOSE_CELLS_API void SetHas3DEffect(bool value);
    /// <summary>
    /// Gets or sets the 3D shape type used with the 3-D bar or column chart.
    /// </summary>
    ASPOSE_CELLS_API Bar3DShapeType GetBar3DShapeType();
    /// <summary>
    /// Gets or sets the 3D shape type used with the 3-D bar or column chart.
    /// </summary>
    ASPOSE_CELLS_API void SetBar3DShapeType(Bar3DShapeType value);
    /// <summary>
    /// Represents the DataLabels object for the specified ASeries.
    /// </summary>
    ASPOSE_CELLS_API DataLabels GetDataLabels();
    /// <summary>
    /// Gets or sets a data series' type.
    /// </summary>
    ASPOSE_CELLS_API ChartType GetType();
    /// <summary>
    /// Gets or sets a data series' type.
    /// </summary>
    ASPOSE_CELLS_API void SetType(ChartType value);
    /// <summary>
    /// Gets the <see cref="Marker">marker</see>.
    /// </summary>
    ASPOSE_CELLS_API Marker GetMarker();
    /// <summary>
    /// Indicates if this series is plotted on second value axis.
    /// </summary>
    ASPOSE_CELLS_API bool GetPlotOnSecondAxis();
    /// <summary>
    /// Indicates if this series is plotted on second value axis.
    /// </summary>
    ASPOSE_CELLS_API void SetPlotOnSecondAxis(bool value);
    /// <summary>
    /// Represents X direction error bar of the series.
    /// </summary>
    ASPOSE_CELLS_API ErrorBar GetXErrorBar();
    /// <summary>
    /// Represents Y direction error bar of the series.
    /// </summary>
    ASPOSE_CELLS_API ErrorBar GetYErrorBar();
    /// <summary>
    /// True if the line chart has high-low lines.
    /// Applies only to line charts.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasHiLoLines();
    /// <summary>
    /// True if the line chart has high-low lines.
    /// Applies only to line charts.
    /// </summary>
    ASPOSE_CELLS_API void SetHasHiLoLines(bool value);
    /// <summary>
    /// Returns a HiLoLines object that represents the high-low lines for a series on a line chart.
    /// Applies only to line charts.
    /// </summary>
    ASPOSE_CELLS_API Line GetHiLoLines();
    /// <summary>
    /// True if a stacked column chart or bar chart has series lines or
    /// if a Pie of Pie chart or Bar of Pie chart has connector lines between the two sections.
    /// Applies only to stacked column charts, bar charts, Pie of Pie charts, or Bar of Pie charts.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasSeriesLines();
    /// <summary>
    /// True if a stacked column chart or bar chart has series lines or
    /// if a Pie of Pie chart or Bar of Pie chart has connector lines between the two sections.
    /// Applies only to stacked column charts, bar charts, Pie of Pie charts, or Bar of Pie charts.
    /// </summary>
    ASPOSE_CELLS_API void SetHasSeriesLines(bool value);
    /// <summary>
    /// Returns a SeriesLines object that represents the series lines for a stacked bar chart or a stacked column chart.
    /// Applies only to stacked bar and stacked column charts.
    /// </summary>
    ASPOSE_CELLS_API Line GetSeriesLines();
    /// <summary>
    /// True if the chart has drop lines.
    /// Applies only to line chart or area charts.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasDropLines();
    /// <summary>
    /// True if the chart has drop lines.
    /// Applies only to line chart or area charts.
    /// </summary>
    ASPOSE_CELLS_API void SetHasDropLines(bool value);
    /// <summary>
    /// Returns a <see cref="Line"/> object that represents the drop lines for a series on the line chart or area chart.
    /// Applies only to line chart or area charts.
    /// </summary>
    ASPOSE_CELLS_API Line GetDropLines();
    /// <summary>
    /// True if a line chart has up and down bars.
    /// Applies only to line charts.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasUpDownBars();
    /// <summary>
    /// True if a line chart has up and down bars.
    /// Applies only to line charts.
    /// </summary>
    ASPOSE_CELLS_API void SetHasUpDownBars(bool value);
    /// <summary>
    /// Returns an DropBars object that represents the up bars on a line chart.
    /// Applies only to line charts.
    /// </summary>
    ASPOSE_CELLS_API DropBars GetUpBars();
    /// <summary>
    /// Returns a <see cref="DropBars"/> object that represents the down bars on a line chart.
    /// Applies only to line charts.
    /// </summary>
    ASPOSE_CELLS_API DropBars GetDownBars();
    /// <summary>
    /// Represents if the color of points is varied.
    /// The chart must contain only one series.
    /// </summary>
    ASPOSE_CELLS_API bool IsColorVaried();
    /// <summary>
    /// Represents if the color of points is varied.
    /// The chart must contain only one series.
    /// </summary>
    ASPOSE_CELLS_API void SetIsColorVaried(bool value);
    /// <summary>
    /// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
    /// The value of this property must be between 0 and 500.
    /// </summary>
    ASPOSE_CELLS_API int16_t GetGapWidth();
    /// <summary>
    /// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
    /// The value of this property must be between 0 and 500.
    /// </summary>
    ASPOSE_CELLS_API void SetGapWidth(int16_t value);
    /// <summary>
    /// Gets or sets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical).
    /// Applies only to pie, 3-D pie, and doughnut charts, 0 to 360.
    /// </summary>
    ASPOSE_CELLS_API int16_t GetFirstSliceAngle();
    /// <summary>
    /// Gets or sets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical).
    /// Applies only to pie, 3-D pie, and doughnut charts, 0 to 360.
    /// </summary>
    ASPOSE_CELLS_API void SetFirstSliceAngle(int16_t value);
    /// <summary>
    /// Specifies how bars and columns are positioned.
    /// Can be a value between – 100 and 100.
    /// Applies only to 2-D bar and 2-D column charts.
    /// </summary>
    ASPOSE_CELLS_API int16_t GetOverlap();
    /// <summary>
    /// Specifies how bars and columns are positioned.
    /// Can be a value between – 100 and 100.
    /// Applies only to 2-D bar and 2-D column charts.
    /// </summary>
    ASPOSE_CELLS_API void SetOverlap(int16_t value);
    /// <summary>
    /// Returns or sets the size of the secondary section of either a pie of pie chart or a bar of pie chart,
    /// as a percentage of the size of the primary pie.
    /// Can be a value from 5 to 200.
    /// </summary>
    ASPOSE_CELLS_API int16_t GetSecondPlotSize();
    /// <summary>
    /// Returns or sets the size of the secondary section of either a pie of pie chart or a bar of pie chart,
    /// as a percentage of the size of the primary pie.
    /// Can be a value from 5 to 200.
    /// </summary>
    ASPOSE_CELLS_API void SetSecondPlotSize(int16_t value);
    /// <summary>
    /// Returns or sets a value that how to determine which data points are in the second pie or bar on a pie of pie or bar of
    /// pie chart.
    /// </summary>
    ASPOSE_CELLS_API ChartSplitType GetSplitType();
    /// <summary>
    /// Returns or sets a value that how to determine which data points are in the second pie or bar on a pie of pie or bar of
    /// pie chart.
    /// </summary>
    ASPOSE_CELLS_API void SetSplitType(ChartSplitType value);
    /// <summary>
    /// Returns or sets a value that shall be used to determine which data points are in the second pie or bar on
    /// a pie of pie or bar of pie chart.
    /// </summary>
    ASPOSE_CELLS_API double GetSplitValue();
    /// <summary>
    /// Returns or sets a value that shall be used to determine which data points are in the second pie or bar on
    /// a pie of pie or bar of pie chart.
    /// </summary>
    ASPOSE_CELLS_API void SetSplitValue(double value);
    /// <summary>
    /// Indicates whether the threshold value is automatic.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoSplit();
    /// <summary>
    /// Gets or sets the scale factor for bubbles in the specified chart group.
    /// It can be an integer value from 0 (zero) to 300,
    /// corresponding to a percentage of the default size.
    /// Applies only to bubble charts.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBubbleScale();
    /// <summary>
    /// Gets or sets the scale factor for bubbles in the specified chart group.
    /// It can be an integer value from 0 (zero) to 300,
    /// corresponding to a percentage of the default size.
    /// Applies only to bubble charts.
    /// </summary>
    ASPOSE_CELLS_API void SetBubbleScale(int32_t value);
    /// <summary>
    /// Gets or sets what the bubble size represents on a bubble chart.
    /// </summary>
    /// <remarks>
    /// BubbleSizeRepresents.SizeIsArea means the value <see cref="Series.BubbleSizes"/> is the area of the bubble.
    /// BubbleSizeRepresents.SizeIsWidth means the value <see cref="Series.BubbleSizes"/> is the width of the bubble.
    /// </remarks>
    ASPOSE_CELLS_API BubbleSizeRepresents GetSizeRepresents();
    /// <summary>
    /// Gets or sets what the bubble size represents on a bubble chart.
    /// </summary>
    /// <remarks>
    /// BubbleSizeRepresents.SizeIsArea means the value <see cref="Series.BubbleSizes"/> is the area of the bubble.
    /// BubbleSizeRepresents.SizeIsWidth means the value <see cref="Series.BubbleSizes"/> is the width of the bubble.
    /// </remarks>
    ASPOSE_CELLS_API void SetSizeRepresents(BubbleSizeRepresents value);
    /// <summary>
    /// True if negative bubbles are shown for the chart group. Valid only for bubble charts.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowNegativeBubbles();
    /// <summary>
    /// True if negative bubbles are shown for the chart group. Valid only for bubble charts.
    /// </summary>
    ASPOSE_CELLS_API void SetShowNegativeBubbles(bool value);
    /// <summary>
    /// Returns or sets the size of the hole in a doughnut chart group.
    /// The hole size is expressed as a percentage of the chart size, between 10 and 90 percent.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetDoughnutHoleSize();
    /// <summary>
    /// Returns or sets the size of the hole in a doughnut chart group.
    /// The hole size is expressed as a percentage of the chart size, between 10 and 90 percent.
    /// </summary>
    ASPOSE_CELLS_API void SetDoughnutHoleSize(int32_t value);
    /// <summary>
    /// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetExplosion();
    /// <summary>
    /// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
    /// </summary>
    ASPOSE_CELLS_API void SetExplosion(int32_t value);
    /// <summary>
    /// True if a radar chart has category axis labels. Applies only to radar charts.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasRadarAxisLabels();
    /// <summary>
    /// True if a radar chart has category axis labels. Applies only to radar charts.
    /// </summary>
    ASPOSE_CELLS_API void SetHasRadarAxisLabels(bool value);
    /// <summary>
    /// True if the series has leader lines.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasLeaderLines();
    /// <summary>
    /// True if the series has leader lines.
    /// </summary>
    ASPOSE_CELLS_API void SetHasLeaderLines(bool value);
    /// <summary>
    /// Represents leader lines on a chart. Leader lines connect data labels to data points.
    /// This object isn’t a collection; there’s no object that represents a single leader line.
    /// </summary>
    ASPOSE_CELLS_API Line GetLeaderLines();
    /// <summary>
    /// Gets the legend entry according to this series.
    /// </summary>
    ASPOSE_CELLS_API LegendEntry GetLegendEntry();
    /// <summary>
    /// Gets the <see cref="ShapePropertyCollection"/> object that holds the visual shape properties of the Series.
    /// </summary>
    ASPOSE_CELLS_API ShapePropertyCollection GetShapeProperties();
    
};

} } }

#endif
