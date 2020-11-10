#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			class IChart;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the shape of the chart.
			/// Properties and methods for the ChartObject object control the appearance and size of the embedded chart on the worksheet.
			/// </summary>
			/// <example><code>
			/// [C++]
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
			/// //Getting Chart Shape
			/// intrusive_ptr<IChartShape> chartShape = chart->GetIChartObject();
			/// //Set Lower Right Column
			/// chartShape->SetLowerRightColumn(10); 
			/// //Set LowerDeltaX
			/// chartShape->SetLowerDeltaX(1024); 
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\test\\ChartShapeTest.xls"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IChartShape : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Returns a Chart object that represents the chart contained in the object. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IChart> 		GetIChart()=0;

	};
}
}
}
