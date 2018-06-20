#include "../CellsExamples.h"

//Creating and Customizing Charts - Pyramid Chart
void CreatingAndCustomizingCharts_PyramidChart()
{
	// Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	// Path of output excel file
	StringPtr outputChartTypePyramid = outDir->StringAppend(new String("outputChartTypePyramid.xlsx"));

	// Create a new workbook
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();

	// Get first worksheet which is created by default
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Adding sample values to cells
	worksheet->GetICells()->GetObjectByIndex(new String("A1"))->PutValue(50);
	worksheet->GetICells()->GetObjectByIndex(new String("A2"))->PutValue(100);
	worksheet->GetICells()->GetObjectByIndex(new String("A3"))->PutValue(150);
	worksheet->GetICells()->GetObjectByIndex(new String("B1"))->PutValue(4);
	worksheet->GetICells()->GetObjectByIndex(new String("B2"))->PutValue(20);
	worksheet->GetICells()->GetObjectByIndex(new String("B3"))->PutValue(50);

	// Adding a chart to the worksheet
	int chartIndex = worksheet->GetICharts()->Add(Aspose::Cells::Charts::ChartType::ChartType_Pyramid, 5, 0, 20, 8);

	// Accessing the instance of the newly added chart
	intrusive_ptr<Aspose::Cells::Charts::IChart> chart = worksheet->GetICharts()->GetObjectByIndex(chartIndex);

	// Adding SeriesCollection (chart data source) to the chart ranging from "A1" cell to "B3"
	chart->GetNISeries()->Add(new String("A1:B3"), true);

	// Saving the Excel file
	workbook->Save(outputChartTypePyramid);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreatingAndCustomizingCharts_PyramidChart executed successfully.");
}
