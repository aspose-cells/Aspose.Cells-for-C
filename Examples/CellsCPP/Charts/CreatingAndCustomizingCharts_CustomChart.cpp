#include "../CellsExamples.h"

//Creating and Customizing Charts - Custom Chart
void CreatingAndCustomizingCharts_CustomChart()
{
	// Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	// Path of output excel file
	StringPtr outputChartTypeCustom = outDir->StringAppend(new String("outputChartTypeCustom.xlsx"));

	// Create a new workbook
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();

	// Get first worksheet which is created by default
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Adding sample values to cells
	worksheet->GetICells()->GetObjectByIndex(new String("A1"))->PutValue(50);
	worksheet->GetICells()->GetObjectByIndex(new String("A2"))->PutValue(100);
	worksheet->GetICells()->GetObjectByIndex(new String("A3"))->PutValue(150);
	worksheet->GetICells()->GetObjectByIndex(new String("A4"))->PutValue(110);
	worksheet->GetICells()->GetObjectByIndex(new String("B1"))->PutValue(260);
	worksheet->GetICells()->GetObjectByIndex(new String("B2"))->PutValue(12);
	worksheet->GetICells()->GetObjectByIndex(new String("B3"))->PutValue(50);
	worksheet->GetICells()->GetObjectByIndex(new String("B4"))->PutValue(100);

	// Adding a chart to the worksheet
	int chartIndex = worksheet->GetICharts()->Add(Aspose::Cells::Charts::ChartType::ChartType_Column, 5, 0, 20, 8);

	// Accessing the instance of the newly added chart
	intrusive_ptr<Aspose::Cells::Charts::IChart> chart = worksheet->GetICharts()->GetObjectByIndex(chartIndex);

	// Adding SeriesCollection (chart data source) to the chart ranging from A1 to B4
	chart->GetNISeries()->Add(new String("A1:B4"), true);

	// Setting the chart type of 2nd NSeries to display as line chart
	chart->GetNISeries()->GetObjectByIndex(1)->SetType(Aspose::Cells::Charts::ChartType::ChartType_Line);

	// Saving the Excel file
	workbook->Save(outputChartTypeCustom);
	
	//Show successfull execution message on console
	ShowMessageOnConsole("CreatingAndCustomizingCharts_CustomChart executed successfully.");
}
