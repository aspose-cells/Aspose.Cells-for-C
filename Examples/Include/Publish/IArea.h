#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum FormattingType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IFillFormat;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents an area format.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
	        /// //Instantiate a new Workbook.
	        /// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// //Adding a new worksheet to the Workbook object
	        /// int sheetIndex = workbook->GetIWorksheets()->Add();
	        /// //Obtaining the reference of the newly added worksheet by passing its sheet index
	        /// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(sheetIndex);
			/// //Adding a sample value to "A1" cell
		    /// worksheet->GetICells()->GetObjectByIndex(new String("A1"))->PutValue(50);
			/// //Adding a sample value to "A2" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("A2"))->PutValue(100);
			/// //Adding a sample value to "A3" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("A3"))->PutValue(150);
			/// //Adding a sample value to "B1" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("B1"))->PutValue(60);
			/// //Adding a sample value to "B2" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("B2"))->PutValue(32);
			/// //Adding a sample value to "B3" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("B3"))->PutValue(50);
			/// //Adding a chart to the worksheet
			/// int chartIndex = worksheet->GetICharts()->Add(ChartType_Column, 5, 0, 15, 5);
			/// //Accessing the instance of the newly added chart
			/// intrusive_ptr<IChart> chart = worksheet->GetICharts()->GetObjectByIndex(chartIndex);
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart->GetNISeries()->Add(new String("A1:B3"), true);
			/// //Setting the foreground color of the plot area
			/// chart->GetIPlotArea()->GetIArea()->SetForegroundColor(Systems::Drawing::Color::GetBlue());
			/// //Setting the foreground color of the chart area
			/// chart->GetIChartArea()->GetIArea()->SetForegroundColor(Systems::Drawing::Color::GetYellow());
			/// //Setting the foreground color of the 1st NSeries area
			/// chart->GetNISeries()->GetObjectByIndex(0)->GetIArea()->SetForegroundColor(Systems::Drawing::Color::GetRed());
			/// //Setting the foreground color of the area of the 1st NSeries point
			/// chart->GetNISeries()->GetObjectByIndex(0)->GetIPoints()->GetObjectByIndex(0)->GetIArea()->SetForegroundColor(Systems::Drawing::Color::GetCyan());
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\test\\AreaTest.xls"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IArea : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the backgroundColor
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetBackgroundColor()=0;
			/// <summary>
			/// Sets the backgroundColor
			/// </summary>
			 virtual void SetBackgroundColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the foreground Color
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetForegroundColor()=0;
			/// <summary>
			/// Sets the foreground Color
			/// </summary>
			 virtual void SetForegroundColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Represents the formatting of the area.
			/// </summary>
			 virtual Aspose::Cells::Charts::FormattingType GetFormatting()=0;
			/// <summary>
			/// Represents the formatting of the area.
			/// </summary>
			 virtual void SetFormatting(Aspose::Cells::Charts::FormattingType value)=0;
			/// <summary>
			/// If the value is true and the value of chart point is a negative number,
			/// the foreground color and background color will be exchanged.
			/// </summary>			 
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// //Adding a new worksheet to the Workbook object
			/// int sheetIndex = workbook->GetIWorksheets()->Add();
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(sheetIndex);
			/// //Adding a sample value to "A1" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("A1"))->PutValue(50);
			/// //Adding a sample value to "A2" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("A2"))->PutValue(-100);
			/// //Adding a sample value to "A3" cell
			/// worksheet->GetICells()->GetObjectByIndex(new String("A3"))->PutValue(150);
			/// //Adding a chart to the worksheet
			/// int chartIndex = worksheet->GetICharts()->Add(ChartType_Column, 5, 0, 15, 5);
			/// //Accessing the instance of the newly added chart
			/// intrusive_ptr<IChart> chart = worksheet->GetICharts()->GetObjectByIndex(chartIndex);
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "A3"
			/// chart->GetNISeries()->Add(new String("A1:A3"), true);
			/// chart->GetNISeries()->GetObjectByIndex(0)->GetIArea()->SetInvertIfNegative(true);
			/// //Setting the foreground color of the 1st NSeries area
			/// chart->GetNISeries()->GetObjectByIndex(0)->GetIArea()->SetForegroundColor(Systems::Drawing::Color::GetRed());
			/// //Setting the background color of the 1st NSeries area.
			/// //The displayed area color of second chart point will be the background color.
			/// chart->GetNISeries()->GetObjectByIndex(0)->GetIArea()->SetBackgroundColor(Systems::Drawing::Color::GetYellow());
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\test\\AreaTest2.xls"));			
			/// 
			/// </code>
			/// </example>
			 virtual bool GetInvertIfNegative()=0;
			/// <summary>
			/// If the value is true and the value of chart point is a negative number,
			/// the foreground color and background color will be exchanged.
			/// </summary>
			 virtual void SetInvertIfNegative(bool value)=0;
			/// <summary>
			/// Represents a <seealso cref="IFillFormat" />
			///  object that contains fill formatting properties for the specified chart or shape.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IFillFormat> 		GetIFillFormat()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::Systems::Double value)=0;

	};
}
}
}
