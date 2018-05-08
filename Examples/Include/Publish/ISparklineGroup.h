#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Double.h"

namespace Aspose {
	namespace Cells {
		class ICellArea;
		class ICellsColor;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum SparklinePresetStyleType;
			class ISparklineCollection;
			enum SparklineType;
			enum PlotEmptyCellsType;
			enum SparklineAxisMinMaxType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary><see cref="ISparkline" />
			///  is organized into sparkline group. A SparklineGroup contains a variable number of sparkline items.
			/// A sparkline group specifies the type, display settings and axis settings for the sparklines.
			/// </summary>
	class ASPOSE_CELLS_API ISparklineGroup : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Resets the data range and location range of the sparkline group. 
			/// This method will clear original sparkline items in the group and creates new sparkline items for the new ranges.
			/// </summary>
			/// <param name="dataRange" >Specifies the new data range of the sparkline group.</param>
			/// <param name="isVertical" >Specifies whether to plot the sparklines from the new data range by row or by column.</param>
			/// <param name="locationRange" >Specifies where the sparklines to be placed.</param>
			 virtual void 		ResetRanges(intrusive_ptr<Aspose::Cells::System::String> dataRange , bool isVertical , intrusive_ptr<Aspose::Cells::ICellArea> locationRange)=0;
			/// <summary>
			/// Gets the preset style type of the sparkline group.
			/// </summary>
			 virtual Aspose::Cells::Charts::SparklinePresetStyleType GetPresetStyle()=0;
			/// <summary>
			/// Sets the preset style type of the sparkline group.
			/// </summary>
			 virtual void SetPresetStyle(Aspose::Cells::Charts::SparklinePresetStyleType value)=0;
			/// <summary>
			/// Gets the <see cref="ISparklineCollection" />
			///  object of the sparkline group.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ISparklineCollection> 		GetISparklineCollection()=0;
			/// <summary>
			/// Indicates the sparkline type of the sparkline group.
			/// </summary>
			 virtual Aspose::Cells::Charts::SparklineType GetType()=0;
			/// <summary>
			/// Indicates the sparkline type of the sparkline group.
			/// </summary>
			 virtual void SetType(Aspose::Cells::Charts::SparklineType value)=0;
			/// <summary>
			/// Indicates how to plot empty cells.
			/// </summary>
			 virtual Aspose::Cells::Charts::PlotEmptyCellsType GetPlotEmptyCellsType()=0;
			/// <summary>
			/// Indicates how to plot empty cells.
			/// </summary>
			 virtual void SetPlotEmptyCellsType(Aspose::Cells::Charts::PlotEmptyCellsType value)=0;
			/// <summary>
			/// Indicates whether to show data in hidden rows and columns.
			/// </summary>
			 virtual bool GetDisplayHidden()=0;
			/// <summary>
			/// Indicates whether to show data in hidden rows and columns.
			/// </summary>
			 virtual void SetDisplayHidden(bool value)=0;
			/// <summary>
			/// Indicates whether to highlight the highest points of data in the sparkline group.
			/// </summary>
			 virtual bool GetShowHighPoint()=0;
			/// <summary>
			/// Indicates whether to highlight the highest points of data in the sparkline group.
			/// </summary>
			 virtual void SetShowHighPoint(bool value)=0;
			/// <summary>
			/// Gets the color of the highest points of data in the sparkline group.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetHighPointICellsColor()=0;
			/// <summary>
			/// Sets the color of the highest points of data in the sparkline group.
			/// </summary>
			 virtual void 		SetHighPointICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Indicates whether to highlight the lowest points of data in the sparkline group.
			/// </summary>
			 virtual bool GetShowLowPoint()=0;
			/// <summary>
			/// Indicates whether to highlight the lowest points of data in the sparkline group.
			/// </summary>
			 virtual void SetShowLowPoint(bool value)=0;
			/// <summary>
			/// Gets the color of the lowest points of data in the sparkline group.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetLowPointICellsColor()=0;
			/// <summary>
			/// Sets the color of the lowest points of data in the sparkline group.
			/// </summary>
			 virtual void 		SetLowPointICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Indicates whether to highlight the negative values on the sparkline group with a different color or marker.
			/// </summary>
			 virtual bool GetShowNegativePoints()=0;
			/// <summary>
			/// Indicates whether to highlight the negative values on the sparkline group with a different color or marker.
			/// </summary>
			 virtual void SetShowNegativePoints(bool value)=0;
			/// <summary>
			/// Gets the color of the negative values on the sparkline group.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetNegativePointsICellsColor()=0;
			/// <summary>
			/// Sets the color of the negative values on the sparkline group.
			/// </summary>
			 virtual void 		SetNegativePointsICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Indicates whether to highlight the first point of data in the sparkline group.
			/// </summary>
			 virtual bool GetShowFirstPoint()=0;
			/// <summary>
			/// Indicates whether to highlight the first point of data in the sparkline group.
			/// </summary>
			 virtual void SetShowFirstPoint(bool value)=0;
			/// <summary>
			/// Gets the color of the first point of data in the sparkline group.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetFirstPointICellsColor()=0;
			/// <summary>
			/// Sets the color of the first point of data in the sparkline group.
			/// </summary>
			 virtual void 		SetFirstPointICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Indicates whether to highlight the last point of data in the sparkline group.
			/// </summary>
			 virtual bool GetShowLastPoint()=0;
			/// <summary>
			/// Indicates whether to highlight the last point of data in the sparkline group.
			/// </summary>
			 virtual void SetShowLastPoint(bool value)=0;
			/// <summary>
			/// Gets the color of the last point of data in the sparkline group.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetLastPointICellsColor()=0;
			/// <summary>
			/// Sets the color of the last point of data in the sparkline group.
			/// </summary>
			 virtual void 		SetLastPointICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Indicates whether to highlight each point in each line sparkline in the sparkline group.
			/// </summary>
			 virtual bool GetShowMarkers()=0;
			/// <summary>
			/// Indicates whether to highlight each point in each line sparkline in the sparkline group.
			/// </summary>
			 virtual void SetShowMarkers(bool value)=0;
			/// <summary>
			/// Gets the color of points in each line sparkline in the sparkline group.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetMarkersICellsColor()=0;
			/// <summary>
			/// Sets the color of points in each line sparkline in the sparkline group.
			/// </summary>
			 virtual void 		SetMarkersICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Gets the color of the sparklines in the sparkline group.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetSeriesICellsColor()=0;
			/// <summary>
			/// Sets the color of the sparklines in the sparkline group.
			/// </summary>
			 virtual void 		SetSeriesICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Indicates whether the plot data is right to left.
			/// </summary>
			 virtual bool GetPlotRightToLeft()=0;
			/// <summary>
			/// Indicates whether the plot data is right to left.
			/// </summary>
			 virtual void SetPlotRightToLeft(bool value)=0;
			/// <summary>
			/// Gets the line weight in each line sparkline in the sparkline group, in the unit of points.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetLineWeight()=0;
			/// <summary>
			/// Sets the line weight in each line sparkline in the sparkline group, in the unit of points.
			/// </summary>
			 virtual void SetLineWeight(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the color of the horizontal axis in the sparkline group.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetHorizontalAxisICellsColor()=0;
			/// <summary>
			/// Sets the color of the horizontal axis in the sparkline group.
			/// </summary>
			 virtual void 		SetHorizontalAxisICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Indicates whether to show the sparkline horizontal axis.
			/// The horizontal axis appears if the sparkline has data that crosses the zero axis.
			/// </summary>
			 virtual bool GetShowHorizontalAxis()=0;
			/// <summary>
			/// Indicates whether to show the sparkline horizontal axis.
			/// The horizontal axis appears if the sparkline has data that crosses the zero axis.
			/// </summary>
			 virtual void SetShowHorizontalAxis(bool value)=0;
			/// <summary>
			/// Represents the range that contains the date values for the sparkline data.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetHorizontalAxisDateRange()=0;
			/// <summary>
			/// Represents the range that contains the date values for the sparkline data.
			/// </summary>
			 virtual void SetHorizontalAxisDateRange(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Represents the vertical axis maximum value type.
			/// </summary>
			 virtual Aspose::Cells::Charts::SparklineAxisMinMaxType GetVerticalAxisMaxValueType()=0;
			/// <summary>
			/// Represents the vertical axis maximum value type.
			/// </summary>
			 virtual void SetVerticalAxisMaxValueType(Aspose::Cells::Charts::SparklineAxisMinMaxType value)=0;
			/// <summary>
			/// Gets the custom maximum value for the vertical axis.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetVerticalAxisMaxValue()=0;
			/// <summary>
			/// Sets the custom maximum value for the vertical axis.
			/// </summary>
			 virtual void SetVerticalAxisMaxValue(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Represents the vertical axis minimum value type.
			/// </summary>
			 virtual Aspose::Cells::Charts::SparklineAxisMinMaxType GetVerticalAxisMinValueType()=0;
			/// <summary>
			/// Represents the vertical axis minimum value type.
			/// </summary>
			 virtual void SetVerticalAxisMinValueType(Aspose::Cells::Charts::SparklineAxisMinMaxType value)=0;
			/// <summary>
			/// Gets the custom minimum value for the vertical axis.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetVerticalAxisMinValue()=0;
			/// <summary>
			/// Sets the custom minimum value for the vertical axis.
			/// </summary>
			 virtual void SetVerticalAxisMinValue(Aspose::Cells::System::Double value)=0;

	};
}
}
}
