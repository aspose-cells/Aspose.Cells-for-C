#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Drawing/Color.h"
#include "System/Single.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ILine;
			class IArea;
			class IShapePropertyCollection;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum ChartMarkerType;
			enum FormattingType;
			class IDataLabels;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents a single point in a series in a chart.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// //Obtaining the reference of the first worksheet
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// //Adding a sample value to "A1" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("A1"))->PutValue(50);
			/// //Adding a sample value to "A2" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("A2"))->PutValue(100);
			/// //Adding a sample value to "A3" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("A3"))->PutValue(150);
			/// //Adding a sample value to "B1" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("B1"))->PutValue(60);
			/// //Adding a sample value to "A2" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("B2"))->PutValue(32);
			/// //Adding a sample value to "A3" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("B3"))->PutValue(50);
			/// //Adding a chart to the worksheet
			/// int chartIndex = worksheet->GetICharts()->Add(ChartType_Column, 5, 0, 25, 10);
			/// //Accessing the instance of the newly added chart
			/// intrusive_ptr<IChart> chart = worksheet->GetICharts()->GetObjectByIndex(chartIndex);
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart->GetNISeries()->Add(new String("A1:B3"), true);
		    /// //Show Data Labels 
			/// chart->GetNISeries()->GetObjectByIndex(0)->GetIDataLabels()->SetValueShown(true);
			/// for (int i = 0; i < chart->GetNISeries()->GetObjectByIndex(0)->GetIPoints()->GetCount(); i++)
		    /// {
		    /// 	//Get Data Point
			/// 	intrusive_ptr<IChartPoint> point = chart->GetNISeries()->GetObjectByIndex(0)->GetIPoints()->GetObjectByIndex(i);
		    /// 	//Set Pir Explosion
		    /// 	point->SetExplosion (15);
			/// 	//Set Border Color
			/// 	point->GetBorderILine()->SetColor(System::Drawing::Color::GetRed());
		    /// }
		    /// //Saving the Excel file
			/// workbook->Save(new String("D:\\test\\ChartPointTest.xls"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IChartPoint : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetExplosion()=0;
			/// <summary>
			/// The distance of an open pie slice from the center of the pie chart is expressed as a percentage of the pie diameter.
			/// </summary>
			 virtual void SetExplosion(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// True if the chartpoint has a shadow. 
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// True if the chartpoint has a shadow. 
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// Gets the <see cref="ILine" >border</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;
			/// <summary>
			/// Gets the <see cref="IArea" >area</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IArea> 		GetIArea()=0;
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
			/// Represents the marker foregournd color in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMarkerForegroundColor()=0;
			/// <summary>
			/// Represents the marker foregournd color in a line chart, scatter chart, or radar chart. 
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
			/// Represents the marker backgournd color in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMarkerBackgroundColor()=0;
			/// <summary>
			/// Represents the marker backgournd color in a line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual void SetMarkerBackgroundColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Gets or sets the marker background color set type.
			/// </summary>
			 virtual Aspose::Cells::Charts::FormattingType GetMarkerBackgroundColorSetType()=0;
			/// <summary>
			/// Gets or sets the marker background color set type.
			/// </summary>
			 virtual void SetMarkerBackgroundColorSetType(Aspose::Cells::Charts::FormattingType value)=0;
			/// <summary>
			/// Returns a DataLabels object that represents the data label associated with the point.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IDataLabels> 		GetIDataLabels()=0;
			/// <summary>
			/// Gets or sets the Y value of the chart point.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> Get_YValue()=0;
			/// <summary>
			/// Gets the Y value of the chart point.
			/// </summary>
			 virtual void SetYValue(intrusive_ptr<Aspose::Cells::System::Object> value)=0;
			/// <summary>
			/// Sets the X value of the chart point.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetXValue()=0;
			/// <summary>
			/// Gets the X value of the chart point.
			/// </summary>
			 virtual void SetXValue(intrusive_ptr<Aspose::Cells::System::Object> value)=0;
			/// <summary>
			/// Gets the <seealso cref="IShapePropertyCollection" />
			///  object that holds the visual shape properties of the ChartPoint.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapePropertyCollection> 		GetIShapeProperties()=0;
			/// <summary>
			/// Gets a value indicates whether this data points is in the second pie or bar
			/// on a pie of pie or bar of pie chart
			/// </summary>
			 virtual bool IsInSecondaryPlot()=0;
			/// <summary>
			/// Sets a value indicates whether this data points is in the second pie or bar
			/// on a pie of pie or bar of pie chart
			/// </summary>
			 virtual void SetInSecondaryPlot(bool value)=0;
			/// <summary>
			/// Gets the x coordinate of the upper left corner in units of 1/4000 of chart's width after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetShapeX()=0;
			/// <summary>
			/// Gets the y coordinate of the upper left corner in units of 1/4000 of chart's height after calls Chart.Calculate() method.		
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetShapeY()=0;
			/// <summary>
			/// Gets the width in units of 1/4000 of chart's width after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetShapeWidth()=0;
			/// <summary>
			/// Gets the height in units of 1/4000 of chart's height after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetShapeHeight()=0;
			/// <summary>
			/// Gets the x coordinate of the upper left corner in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetShapeXPx()=0;
			/// <summary>
			/// Gets the y coordinate of the upper left corner in units of pixels after calls Chart.Calculate() method.		
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetShapeYPx()=0;
			/// <summary>
			/// Gets the width in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetShapeWidthPx()=0;
			/// <summary>
			/// Gets the height in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetShapeHeightPx()=0;
			/// <summary>
			/// Gets the width of border in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetBorderWidthPx()=0;
			/// <summary>
			/// Gets the radius of bubble, pie or doughnut in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetRadiusPx()=0;
			/// <summary>
			/// Gets the inner radius of doughnut slice in units of pixels after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetInnerRadiusPx()=0;
			/// <summary>
			/// Gets the starting angle for the pie section, measured in degrees clockwise from the x-axis after calls Chart.Calculate() method.
			/// Applies to Pie chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetStartAngle()=0;
			/// <summary>
			/// Gets the ending angle for the pie section, measured in degrees clockwise from the x-axis after calls Chart.Calculate() method.
			/// Applies to Pie chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetEndAngle()=0;
			/// <summary>
			/// Gets the x coordinate of starting point for the pie section after calls Chart.Calculate() method.
			/// Applies to Pie and Doughnut  chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetArcStartPointXPx()=0;
			/// <summary>
			/// Gets the y coordinate of starting point for the pie section after calls Chart.Calculate() method.
			/// Applies to Pie and Doughnut  chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetArcStartPointYPx()=0;
			/// <summary>
			/// Gets the x coordinate of ending point for the pie section after calls Chart.Calculate() method.
			/// Applies to Pie and Doughnut  chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetArcEndPointXPx()=0;
			/// <summary>
			/// Gets the y coordinate of ending point for the pie section after calls Chart.Calculate() method.
			/// Applies to Pie and Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetArcEndPointYPx()=0;
			/// <summary>
			/// Gets the x coordinate of starting point for the pie section after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetInnerArcStartPointXPx()=0;
			/// <summary>
			/// Gets the y coordinate of starting point for the pie section after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetInnerArcStartPointYPx()=0;
			/// <summary>
			/// Gets the x coordinate of ending point for the pie section after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetInnerArcEndPointXPx()=0;
			/// <summary>
			/// Gets the y coordinate of ending point for the pie section after calls Chart.Calculate() method.
			/// Applies to Doughnut chart.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetInnerArcEndPointYPx()=0;
			/// <summary>
			/// Gets the number of top points after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetTopPointCount()=0;
			/// <summary>
			/// Gets x-coordinate of the top point of shape after calls Chart.Calculate() method.
			/// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid and Area3D
			/// </summary>
			 virtual Aspose::Cells::System::Single GetTopPointXPx(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets y-coordinate of the top point of shape after calls Chart.Calculate() method.
			/// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid and Area3D
			/// </summary>
			 virtual Aspose::Cells::System::Single GetTopPointYPx(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the number of bottom points  after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetBottomPointCount()=0;
			/// <summary>
			/// Gets x-coordinate of the bottom point of shape after calls Chart.Calculate() method.
			/// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid
			/// </summary>
			 virtual Aspose::Cells::System::Single GetBottomPointXPx(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets y-coordinate of the bottom point of shape  after calls Chart.Calculate() method.
			/// Applies 3D charts: Column3D, Bar3D, Cone, Cylinder, Pyramid
			/// </summary>
			 virtual Aspose::Cells::System::Single GetBottomPointYPx(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the number of the points on category axis after calls Calculate() method in Chart. Only applies to area chart.
			/// </summary>
			/// <remarks>
			/// Area 2D chart return 1
			/// Area 3D chart return 2.
			/// </remarks>
			 virtual Aspose::Cells::System::Int32 GetOnCategoryAxisPointCount()=0;
			/// <summary>
			/// Gets x-coordinate of the point on category axis after calls Calculate() method in Chart. Only applies to Aarea chart.
			/// </summary>
			/// <remarks>
			/// Area 2D chart: index is 0.
			/// Area 3D chart: index is 0 or 1.
			/// </remarks>
			 virtual Aspose::Cells::System::Single GetOnCategoryAxisPointXPx(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets y-coordinate of the point on category axis after calls Calculate() method in Chart. Only applies to Area chart.
			/// </summary>
			/// <remarks>
			/// Area 2D chart: index is 0.
			/// Area 3D chart: index is 0 or 1.
			/// </remarks>
			 virtual Aspose::Cells::System::Single GetOnCategoryAxisPointYPx(Aspose::Cells::System::Int32 index)=0;

	};
}
}
}
