#pragma once
#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		class IFont;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum BackgroundMode;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ILine;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents a chart data table.
			/// </summary>
			/// <example><code>
			/// 
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
			/// chart->SetDataTableShown(true);
			/// //Getting Chart Table
			/// intrusive_ptr<IChartDataTable> chartTable = chart->GetIChartDataTable();
			/// //Setting Chart Table Font Color
			/// chartTable->GetIFont()->SetColor(System::Drawing::Color::GetRed());
			/// //Setting Legend Key VisibilityOptions
			/// chartTable->SetShowLegendKey(false);
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\test\\ChartDataTableTest.xls"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IChartDataTable : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets a <see cref="IFont" />
			///  object which represents the font setting of the specified chart data table.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// True if the text in the object changes font size when the object size changes. 
			/// The default value is True. 
			/// </summary>
			 virtual bool GetAutoScaleFont()=0;
			/// <summary>
			/// True if the text in the object changes font size when the object size changes. 
			/// The default value is True. 
			/// </summary>
			 virtual void SetAutoScaleFont(bool value)=0;
			/// <summary>
			/// Gets the display mode of the background
			/// </summary>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackgroundMode()=0;
			/// <summary>
			/// Sets the display mode of the background
			/// </summary>
			 virtual void SetBackgroundMode(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// Gets the display mode of the background
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetBackgroundMode method.</remarks>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackground()=0;
			/// <summary>
			/// Sets the display mode of the background
			/// </summary>
			 virtual void SetBackground(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// True if the chart data table has horizontal cell borders
			/// </summary>
			 virtual bool HasBorderHorizontal()=0;
			/// <summary>
			/// True if the chart data table has horizontal cell borders
			/// </summary>
			 virtual void SetHasBorderHorizontal(bool value)=0;
			/// <summary>
			/// True if the chart data table has vertical cell borders
			/// </summary>
			 virtual bool HasBorderVertical()=0;
			/// <summary>
			/// True if the chart data table has vertical cell borders
			/// </summary>
			 virtual void SetHasBorderVertical(bool value)=0;
			/// <summary>
			/// True if the chart data table has outline borders
			/// </summary>
			 virtual bool HasBorderOutline()=0;
			/// <summary>
			/// True if the chart data table has outline borders
			/// </summary>
			 virtual void SetHasBorderOutline(bool value)=0;
			/// <summary>
			/// True if the data label legend key is visible.
			/// </summary>
			 virtual bool GetShowLegendKey()=0;
			/// <summary>
			/// True if the data label legend key is visible.
			/// </summary>
			 virtual void SetShowLegendKey(bool value)=0;
			/// <summary>
			/// Returns a Border object that represents the border of the object
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;

	};
}
}
}
