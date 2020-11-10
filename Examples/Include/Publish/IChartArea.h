#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "IChartFrame.h"

namespace Aspose {
	namespace Cells {
		class IFont;
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the chart area in the worksheet.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
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
			/// int chartIndex = worksheet->GetICharts()->Add(ChartType_Column, 5, 0, 15, 5);
			/// //Accessing the instance of the newly added chart
			/// intrusive_ptr<IChart> chart = worksheet->GetICharts()->GetObjectByIndex(chartIndex);
			/// //Adding NSeries (chart data source) to the chart ranging from "A1" cell to "B3"
			/// chart->GetNISeries()->Add(new String("A1:B3"), true);
			/// //Getting Chart Area
			/// intrusive_ptr<IChartArea> chartArea = chart->GetIChartArea();
			/// //Setting the foreground color of the chart area
			/// chartArea->GetIArea()->SetForegroundColor(Systems::Drawing::Color::GetYellow()); 
			/// //Setting Chart Area Shadow
			/// chartArea->SetShadow(true); 
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\test\\ChartAreaTest.xls"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IChartArea : virtual public Aspose::Cells::Charts::IChartFrame
	{
		public:
			/// <summary>
			/// Gets the horizontal offset from its upper left corner column.
			/// </summary>
			  virtual Aspose::Cells::Systems::Int32 GetX()=0;
			/// <summary>
			/// Sets the horizontal offset from its upper left corner column.
			/// </summary>
			  virtual void SetX(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the vertical offset from its upper left corner row.		
			/// </summary>
			  virtual Aspose::Cells::Systems::Int32 GetY()=0;
			/// <summary>
			/// Sets the vertical offset from its upper left corner row.		
			/// </summary>
			  virtual void SetY(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the vertical offset from its lower right corner row.		
			/// </summary>
			  virtual Aspose::Cells::Systems::Int32 GetHeight()=0;
			/// <summary>
			/// Sets the vertical offset from its lower right corner row.		
			/// </summary>
			  virtual void SetHeight(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the horizontal offset from its lower right corner column.		
			/// </summary>
			  virtual Aspose::Cells::Systems::Int32 GetWidth()=0;
			/// <summary>
			/// Sets the horizontal offset from its lower right corner column.		
			/// </summary>
			  virtual void SetWidth(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets a <see cref="IFont" />
			///  object of the specified chartarea object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;

	};
}
}
}
