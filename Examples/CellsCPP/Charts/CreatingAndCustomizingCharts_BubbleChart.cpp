#include "../CellsExamples.h"

//Creating and Customizing Charts - Bubble Chart
void CreatingAndCustomizingCharts_BubbleChart()
{
	// Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	// Path of output excel file
	StringPtr outputChartTypeBubble = outDir->StringAppend(new String("outputChartTypeBubble.xlsx"));

	// Create a new workbook
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();

	// Get first worksheet which is created by default
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Fill in data for chart's series
	// Y Values
	worksheet->GetICells()->GetObjectByIndex(0, 0)->PutValue((StringPtr)new String("Y Values"));
	worksheet->GetICells()->GetObjectByIndex(0, 1)->PutValue(2);
	worksheet->GetICells()->GetObjectByIndex(0, 2)->PutValue(4);
	worksheet->GetICells()->GetObjectByIndex(0, 3)->PutValue(6);
	// Bubble Size
	worksheet->GetICells()->GetObjectByIndex(1, 0)->PutValue((StringPtr)new String("Bubble Size"));
	worksheet->GetICells()->GetObjectByIndex(1, 1)->PutValue(2);
	worksheet->GetICells()->GetObjectByIndex(1, 2)->PutValue(3);
	worksheet->GetICells()->GetObjectByIndex(1, 3)->PutValue(1);
	// X Values
	worksheet->GetICells()->GetObjectByIndex(2, 0)->PutValue((StringPtr)new String("X Values"));
	worksheet->GetICells()->GetObjectByIndex(2, 1)->PutValue(1);
	worksheet->GetICells()->GetObjectByIndex(2, 2)->PutValue(2);
	worksheet->GetICells()->GetObjectByIndex(2, 3)->PutValue(3);

	// Set first column width
	worksheet->GetICells()->SetColumnWidth(0, 12);

	// Adding a chart to the worksheet
	int chartIndex = worksheet->GetICharts()->Add(Aspose::Cells::Charts::ChartType::ChartType_Bubble, 5, 0, 20, 8);

	// Accessing the instance of the newly added chart
	intrusive_ptr<Aspose::Cells::Charts::IChart> chart = worksheet->GetICharts()->GetObjectByIndex(chartIndex);

	// Adding SeriesCollection (chart data source) to the chart ranging from B1 to D1
	chart->GetNISeries()->Add(new String("B1:D1"), true);

	// Set bubble sizes
	chart->GetNISeries()->GetObjectByIndex(0)->SetBubbleSizes(new String("B2:D2"));

	// Set X axis values
	chart->GetNISeries()->GetObjectByIndex(0)->SetXValues(new String("B3:D3"));

	// Set Y axis values
	chart->GetNISeries()->GetObjectByIndex(0)->SetValues(new String("B1:D1"));

	// Saving the Excel file
	workbook->Save(outputChartTypeBubble);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreatingAndCustomizingCharts_BubbleChart executed successfully.");
}
