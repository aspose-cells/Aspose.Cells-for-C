#pragma once
#include "System/Object.h"
#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			class IChartPoint;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			///  Represents a collection that contains all the points in one series.
			///  </summary>
			/// <example>
			///  <code>
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
			/// workbook->Save(new String("D:\\test\\ChartPointCollectionTest.xls"));
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IChartPointCollection : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Returns an enumerator for the entire <see cref="IChartPointCollection" />
			/// .
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator()=0;
			/// <summary>
			/// Remove all setting of the chart points.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			/// Removes point at the index of the series..
			/// </summary>
			/// <param name="index" >The index of the point.</param>
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the count of the chart point.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCount()=0;
			/// <summary>
			///  Gets the <see cref="IChartPoint" />
			///  element at the specified index in the series.
			///  </summary>
			/// <param name="index" >The index of chart point in the series.</param>
			/// <returns>The ChartPoint object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Charts::IChartPoint> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;

	};
}
}
}
