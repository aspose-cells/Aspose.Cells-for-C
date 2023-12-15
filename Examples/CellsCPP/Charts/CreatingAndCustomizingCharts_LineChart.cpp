#include "../CellsExamples.h"

//Creating and Customizing Charts - Line Chart
void CreatingAndCustomizingCharts_LineChart()
{
	// Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	// Path of output excel file
	U16String outputChartTypeLine = outDir + "outputChartTypeLine.xlsx";

	// Create a new workbook
	Workbook workbook;

	// Get first worksheet which is created by default
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Adding sample values to cells
	worksheet.GetCells().Get("A1").PutValue(50);
	worksheet.GetCells().Get("A2").PutValue(100);
	worksheet.GetCells().Get("A3").PutValue(150);
	worksheet.GetCells().Get("B1").PutValue(4);
	worksheet.GetCells().Get("B2").PutValue(20);
	worksheet.GetCells().Get("B3").PutValue(50);

	// Adding a chart to the worksheet
	int chartIndex = worksheet.GetCharts().Add(Aspose::Cells::Charts::ChartType::Line, 5, 0, 20, 8);

	// Accessing the instance of the newly added chart
	Chart chart = worksheet.GetCharts().Get(chartIndex);

	// Adding SeriesCollection (chart data source) to the chart ranging from "A1" cell to "B3"
	chart.GetNSeries().Add("A1:B3", true);

	// Saving the Excel file
	workbook.Save(outputChartTypeLine);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreatingAndCustomizingCharts_LineChart executed successfully.");
	
}
