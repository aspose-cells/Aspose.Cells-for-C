#include "../CellsExamples.h"

//Creating and Customizing Charts - Custom Chart
void CreatingAndCustomizingCharts_CustomChart()
{
	// Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	// Path of output excel file
	U16String outputChartTypeCustom = outDir + "outputChartTypeCustom.xlsx";

	// Create a new workbook
	Workbook workbook;

	// Get first worksheet which is created by default
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Adding sample values to cells
	worksheet.GetCells().Get("A1").PutValue(50);
	worksheet.GetCells().Get("A2").PutValue(100);
	worksheet.GetCells().Get("A3").PutValue(150);
	worksheet.GetCells().Get("A4").PutValue(110);
	worksheet.GetCells().Get("B1").PutValue(260);
	worksheet.GetCells().Get("B2").PutValue(12);
	worksheet.GetCells().Get("B3").PutValue(50);
	worksheet.GetCells().Get("B4").PutValue(100);

	// Adding a chart to the worksheet
	int chartIndex = worksheet.GetCharts().Add(Aspose::Cells::Charts::ChartType::Column, 5, 0, 20, 8);

	// Accessing the instance of the newly added chart
	Chart chart = worksheet.GetCharts().Get(chartIndex);

	// Adding SeriesCollection (chart data source) to the chart ranging from A1 to B4
	chart.GetNSeries().Add("A1:B4", true);

	// Setting the chart type of 2nd NSeries to display as line chart
	chart.GetNSeries().Get(1).SetType(ChartType::Line);

	// Saving the Excel file
	workbook.Save(outputChartTypeCustom);
	
	//Show successfull execution message on console
	ShowMessageOnConsole("CreatingAndCustomizingCharts_CustomChart executed successfully.");

}
