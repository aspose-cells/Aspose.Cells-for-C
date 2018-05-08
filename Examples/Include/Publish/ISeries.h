#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Drawing/Color.h"
#include "System/Int16.h"
#include "System/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			class IChartPointCollection;
			class ITrendlineCollection;
			enum Bar3DShapeType;
			class IDataLabels;
			enum ChartType;
			enum ChartMarkerType;
			enum FormattingType;
			class IErrorBar;
			class IDropBars;
			enum ChartSplitType;
			enum BubbleSizeRepresents;
			class ILegendEntry;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IArea;
			class ILine;
			class IShapePropertyCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents a single data series in a chart.
			/// </summary>
	class ASPOSE_CELLS_API ISeries : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Moves the series up or down.
			/// </summary>
			/// <param name="count" >The number of moving up or down.
			/// Move the series up if this is less than zero;
			/// Move the series down if this is greater than zero.
			/// </param>
			 virtual void Move(Aspose::Cells::System::Int32 count)=0;
			/// <summary>
			/// Gets the collection of points in a series in a chart.
			/// </summary>
			/// <remarks>
			/// When the chart is Pie of Pie or Bar of Pie, the last point is other point in first pie plot.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IChartPointCollection> 		GetIPoints()=0;
			/// <summary>
			/// Represents the background area of Series object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IArea> 		GetIArea()=0;
			/// <summary>
			/// Represents border of Series object.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use Border property. 
			/// This property will be removed 12 months later since Mar. 2012. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetILine()=0;
			/// <summary>
			/// Represents border of Series object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;
			/// <summary>
			/// Gets the name of the data series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Sets the name of the data series.
			/// </summary>

			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the series's name that displays on the chart graph.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetDisplayName()=0;
			/// <summary>
			/// Gets the number of the data values.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCountOfDataValues()=0;
			/// <summary>
			/// Indicates whether the data source is vertical.
			/// </summary>
			 virtual bool IsVerticalValues()=0;
			/// <summary>
			/// Represents the data of the chart series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetValues()=0;
			/// <summary>
			/// Represents the data of the chart series.
			/// </summary>
			 virtual void SetValues(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents the x values of the chart series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetXValues()=0;
			/// <summary>
			/// Represents the x values of the chart series.
			/// </summary>
			 virtual void SetXValues(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the bubble sizes values of the chart series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetBubbleSizes()=0;
			/// <summary>
			/// Sets the bubble sizes values of the chart series.
			/// </summary>
			 virtual void SetBubbleSizes(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Returns an object that represents a collection of all the trendlines for the series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ITrendlineCollection> 		GetITrendLines()=0;
			/// <summary>
			/// Represents curve smoothing. 
			/// True if curve smoothing is turned on for the line chart or scatter chart.
			/// Applies only to line and scatter connected by lines charts.
			/// </summary>
			 virtual bool GetSmooth()=0;
			/// <summary>
			/// Represents curve smoothing. 
			/// True if curve smoothing is turned on for the line chart or scatter chart.
			/// Applies only to line and scatter connected by lines charts.
			/// </summary>
			 virtual void SetSmooth(bool value)=0;
			/// <summary>
			/// True if the series has a shadow. 
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// True if the series has a shadow. 
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// True if the series has a three-dimensional appearance. 
			/// Applies only to bubble charts.
			/// </summary>
			 virtual bool GetHas3DEffect()=0;
			/// <summary>
			/// True if the series has a three-dimensional appearance. 
			/// Applies only to bubble charts.
			/// </summary>
			 virtual void SetHas3DEffect(bool value)=0;
			/// <summary>
			/// Gets the 3D shape type used with the 3-D bar or column chart.
			/// </summary>
			 virtual Aspose::Cells::Charts::Bar3DShapeType GetBar3DShapeType()=0;
			/// <summary>
			/// Sets the 3D shape type used with the 3-D bar or column chart.
			/// </summary>
			 virtual void SetBar3DShapeType(Aspose::Cells::Charts::Bar3DShapeType value)=0;
			/// <summary>
			/// Gets the 3D shape type used with the 3-D bar or column chart.
			/// </summary>
			 virtual Aspose::Cells::Charts::Bar3DShapeType GetBarShape()=0;
			/// <summary>
			/// Gets or sets the 3D shape type used with the 3-D bar or column chart.
			/// </summary>
			 virtual void SetBarShape(Aspose::Cells::Charts::Bar3DShapeType value)=0;
			/// <summary>
			/// Represents the DataLabels object for the specified ASeries. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDataLabels> 		GetIDataLabels()=0;
			/// <summary>
			/// Gets a data series' type.
			/// </summary>
			 virtual Aspose::Cells::Charts::ChartType GetType()=0;
			/// <summary>
			/// Sets a data series' type.
			/// </summary>
			 virtual void SetType(Aspose::Cells::Charts::ChartType value)=0;
			/// <summary>
			/// Represents the marker style in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual Aspose::Cells::Charts::ChartMarkerType GetMarkerStyle()=0;
			/// <summary>
			/// Represents the marker style in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual void SetMarkerStyle(Aspose::Cells::Charts::ChartMarkerType value)=0;
			/// <summary>
			/// Represents the marker size in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetMarkerSize()=0;
			/// <summary>
			/// Represents the marker size in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual void SetMarkerSize(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents the marker foreground color in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMarkerForegroundColor()=0;
			/// <summary>
			/// Represents the marker foreground color in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual void SetMarkerForegroundColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the marker foreground color set type.
			/// </summary>
			 virtual Aspose::Cells::Charts::FormattingType GetMarkerForegroundColorSetType()=0;
			/// <summary>
			/// Sets the marker foreground color set type.
			/// </summary>
			 virtual void SetMarkerForegroundColorSetType(Aspose::Cells::Charts::FormattingType value)=0;
			/// <summary>
			/// Represents the marker background color in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMarkerBackgroundColor()=0;
			/// <summary>
			/// Represents the marker background color in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual void SetMarkerBackgroundColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the marker background color set type.
			/// </summary>
			 virtual Aspose::Cells::Charts::FormattingType GetMarkerBackgroundColorSetType()=0;
			/// <summary>
			/// Gets the marker background color set type.
			/// </summary>
			 virtual void SetMarkerBackgroundColorSetType(Aspose::Cells::Charts::FormattingType value)=0;
			/// <summary>
			/// Indicates if this series is plotted on second value axis.
			/// </summary>
			 virtual bool GetPlotOnSecondAxis()=0;
			/// <summary>
			/// Indicates if this series is plotted on second value axis.
			/// </summary>
			 virtual void SetPlotOnSecondAxis(bool value)=0;
			/// <summary>
			/// Represents X direction error bar of the series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IErrorBar> 		GetXIErrorBar()=0;
			/// <summary>
			/// Represents Y direction error bar of the series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IErrorBar> 		GetYIErrorBar()=0;
			/// <summary>
			/// True if the line chart has high-low lines. 
			///  Applies only to line charts.
			///  </summary>
			 virtual bool HasHiLoLines()=0;
			/// <summary>
			/// True if the line chart has high-low lines. 
			///  Applies only to line charts.
			///  </summary>
			 virtual void SetHasHiLoLines(bool value)=0;
			/// <summary>
			/// Returns a HiLoLines object that represents the high-low lines for a series on a line chart. 
			/// Applies only to line charts.
			///  </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetHiLoILines()=0;
			/// <summary>
			/// True if a stacked column chart or bar chart has series lines or
			/// if a Pie of Pie chart or Bar of Pie chart has connector lines between the two sections. 
			/// Applies only to stacked column charts, bar charts, Pie of Pie charts, or Bar of Pie charts.
			/// </summary>
			 virtual bool HasSeriesLines()=0;
			/// <summary>
			/// True if a stacked column chart or bar chart has series lines or
			/// if a Pie of Pie chart or Bar of Pie chart has connector lines between the two sections. 
			/// Applies only to stacked column charts, bar charts, Pie of Pie charts, or Bar of Pie charts.
			/// </summary>
			 virtual void SetHasSeriesLines(bool value)=0;
			/// <summary>
			/// Returns a SeriesLines object that represents the series lines for a stacked bar chart or a stacked column chart.
			/// Applies only to stacked bar and stacked column charts.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetSeriesILines()=0;
			/// <summary>
			/// True if the chart has drop lines.
			/// Applies only to line chart or area charts.
			/// </summary>
			 virtual bool HasDropLines()=0;
			/// <summary>
			/// True if the chart has drop lines.
			/// Applies only to line chart or area charts.
			/// </summary>
			 virtual void SetHasDropLines(bool value)=0;
			/// <summary>
			/// Returns a <see cref="Line" />
			///  object that represents the drop lines for a series on the line chart or area chart.
			/// Applies only to line chart or area charts.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetDropILines()=0;
			/// <summary>
			/// True if a line chart has up and down bars.
			/// Applies only to line charts.
			/// </summary>
			 virtual bool HasUpDownBars()=0;
			/// <summary>
			/// True if a line chart has up and down bars.
			/// Applies only to line charts.
			/// </summary>
			 virtual void SetHasUpDownBars(bool value)=0;
			/// <summary>
			/// Returns an DropBars object that represents the up bars on a line chart.
			/// Applies only to line charts.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDropBars> 		GetIUpBars()=0;
			/// <summary>
			/// Returns a <see cref="DropBars" />
			///  object that represents the down bars on a line chart.
			/// Applies only to line charts.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDropBars> 		GetIDownBars()=0;
			/// <summary>
			/// Represents if the color of points is varied. 
			/// The chart must contain only one series.
			/// </summary>
			 virtual bool IsColorVaried()=0;
			/// <summary>
			/// Represents if the color of points is varied. 
			/// The chart must contain only one series.
			/// </summary>
			 virtual void SetColorVaried(bool value)=0;
			/// <summary>
			/// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
			/// The value of this property must be between 0 and 500.
			/// </summary>
			 virtual Aspose::Cells::System::Int16 GetGapWidth()=0;
			/// <summary>
			/// Returns or sets the space between bar or column clusters, as a percentage of the bar or column width.
			/// The value of this property must be between 0 and 500.
			/// </summary>
			 virtual void SetGapWidth(Aspose::Cells::System::Int16 value)=0;
			/// <summary>
			/// Gets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical). 
			/// Applies only to pie, 3-D pie, and doughnut charts, 0 to 360. 
			/// </summary>
			 virtual Aspose::Cells::System::Int16 GetFirstSliceAngle()=0;
			/// <summary>
			/// Sets the angle of the first pie-chart or doughnut-chart slice, in degrees (clockwise from vertical). 
			/// Applies only to pie, 3-D pie, and doughnut charts, 0 to 360. 
			/// </summary>
			 virtual void SetFirstSliceAngle(Aspose::Cells::System::Int16 value)=0;
			/// <summary>
			/// Specifies how bars and columns are positioned.
			/// Can be a value between C 100 and 100. 
			/// Applies only to 2-D bar and 2-D column charts. 
			/// </summary>
			 virtual Aspose::Cells::System::Int16 GetOverlap()=0;
			/// <summary>
			/// Specifies how bars and columns are positioned.
			/// Can be a value between C 100 and 100. 
			/// Applies only to 2-D bar and 2-D column charts. 
			/// </summary>
			 virtual void SetOverlap(Aspose::Cells::System::Int16 value)=0;
			/// <summary>
			/// Returns or sets the size of the secondary section of either a pie of pie chart or a bar of pie chart, 
			/// as a percentage of the size of the primary pie.
			/// Can be a value from 5 to 200. 
			/// </summary>
			 virtual Aspose::Cells::System::Int16 GetSecondPlotSize()=0;
			/// <summary>
			/// Returns or sets the size of the secondary section of either a pie of pie chart or a bar of pie chart, 
			/// as a percentage of the size of the primary pie.
			/// Can be a value from 5 to 200. 
			/// </summary>
			 virtual void SetSecondPlotSize(Aspose::Cells::System::Int16 value)=0;
			/// <summary>
			/// Returns or sets a value that how to determine which data points are in the second pie or bar on a pie of pie or bar of
			/// pie chart.
			/// </summary>
			 virtual Aspose::Cells::Charts::ChartSplitType GetSplitType()=0;
			/// <summary>
			/// Returns or sets a value that how to determine which data points are in the second pie or bar on a pie of pie or bar of
			/// pie chart.
			/// </summary>
			 virtual void SetSplitType(Aspose::Cells::Charts::ChartSplitType value)=0;
			/// <summary>
			/// Returns or sets a value that shall be used to determine which data points are in the second pie or bar on
			/// a pie of pie or bar of pie chart.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetSplitValue()=0;
			/// <summary>
			/// Returns or sets a value that shall be used to determine which data points are in the second pie or bar on
			/// a pie of pie or bar of pie chart.
			/// </summary>
			 virtual void SetSplitValue(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Indicates whether the threshold value is automatic.
			/// </summary>
			 virtual bool IsAutoSplit()=0;
			/// <summary>
			/// Gets the scale factor for bubbles in the specified chart group. 
			/// It can be an integer value from 0 (zero) to 300, 
			/// corresponding to a percentage of the default size.
			/// Applies only to bubble charts. 
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetBubbleScale()=0;
			/// <summary>
			/// Sets the scale factor for bubbles in the specified chart group. 
			/// It can be an integer value from 0 (zero) to 300, 
			/// corresponding to a percentage of the default size.
			/// Applies only to bubble charts. 
			/// </summary>
			 virtual void SetBubbleScale(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets what the bubble size represents on a bubble chart.
			/// </summary>
			/// <remarks>
			/// BubbleSizeRepresents.SizeIsArea means the value <see cref="Series.BubbleSizes" />
			///  is the area of the bubble.
			/// BubbleSizeRepresents.SizeIsWidth means the value <see cref="Series.BubbleSizes" />
			///  is the width of the bubble.
			/// </remarks>
			 virtual Aspose::Cells::Charts::BubbleSizeRepresents GetSizeRepresents()=0;
			/// <summary>
			/// Sets what the bubble size represents on a bubble chart.
			/// </summary>
			/// <remarks>
			/// BubbleSizeRepresents.SizeIsArea means the value <see cref="Series.BubbleSizes" />
			///  is the area of the bubble.
			/// BubbleSizeRepresents.SizeIsWidth means the value <see cref="Series.BubbleSizes" />
			///  is the width of the bubble.
			/// </remarks>
			 virtual void SetSizeRepresents(Aspose::Cells::Charts::BubbleSizeRepresents value)=0;
			/// <summary>
			/// True if negative bubbles are shown for the chart group. Valid only for bubble charts. 
			/// </summary>
			 virtual bool GetShowNegativeBubbles()=0;
			/// <summary>
			/// True if negative bubbles are shown for the chart group. Valid only for bubble charts. 
			/// </summary>
			 virtual void SetShowNegativeBubbles(bool value)=0;
			/// <summary>
			/// Returns or sets the size of the hole in a doughnut chart group. 
			/// The hole size is expressed as a percentage of the chart size, between 10 and 90 percent.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetDoughnutHoleSize()=0;
			/// <summary>
			/// Returns or sets the size of the hole in a doughnut chart group. 
			/// The hole size is expressed as a percentage of the chart size, between 10 and 90 percent.
			/// </summary>
			 virtual void SetDoughnutHoleSize(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetExplosion()=0;
			/// <summary>
			/// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
			/// </summary>
			 virtual void SetExplosion(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// True if a radar chart has category axis labels. Applies only to radar charts.
			/// </summary>
			 virtual bool HasRadarAxisLabels()=0;
			/// <summary>
			/// True if a radar chart has category axis labels. Applies only to radar charts.
			/// </summary>
			 virtual void SetHasRadarAxisLabels(bool value)=0;
			/// <summary>
			/// True if the series has leader lines.
			/// </summary>
			 virtual bool HasLeaderLines()=0;
			/// <summary>
			/// True if the series has leader lines.
			/// </summary>
			 virtual void SetHasLeaderLines(bool value)=0;
			/// <summary>
			/// Represents leader lines on a chart. Leader lines connect data labels to data points. 
			/// This object isnt a collection; theres no object that represents a single leader line.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetLeaderILines()=0;
			/// <summary>
			/// Gets the legend entry according to this series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ILegendEntry> 		GetILegendEntry()=0;
			/// <summary>
			/// Gets the <seealso cref="ShapePropertyCollection" />
			///  object that holds the visual shape properties of the Series.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapePropertyCollection> 		GetIShapeProperties()=0;

	};
}
}
}
