#include "../CellsExamples.h"

//Creating and Customizing Charts - Bubble Chart
void CreatingAndCustomizingCharts_BubbleChart()
{
	// Output directory path
	U16String outDir("..\\Data\\02_OutputDirectory\\");

	// Path of output excel file
	U16String outputChartTypeBubble = outDir + u"outputChartTypeBubble.xlsx";

	// Create a new workbook
	Workbook workbook;

	// Get first worksheet which is created by default
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Fill in data for chart's series
	// Y Values
	worksheet.GetCells().Get("A1").PutValue(u"Y Values");
	worksheet.GetCells().Get("B1").PutValue(2);
	worksheet.GetCells().Get("C1").PutValue(4);
	worksheet.GetCells().Get("D1").PutValue(6);

	// Bubble Size
	worksheet.GetCells().Get("A2").PutValue(u"Bubble Size");
	worksheet.GetCells().Get("B2").PutValue(2);
	worksheet.GetCells().Get("C2").PutValue(3);
	worksheet.GetCells().Get("D2").PutValue(1);
	// X Values
	worksheet.GetCells().Get("A3").PutValue(u"X Values");
	worksheet.GetCells().Get("B3").PutValue(1);
	worksheet.GetCells().Get("C3").PutValue(2);
	worksheet.GetCells().Get("D3").PutValue(3);

	// Set first column width
	worksheet.GetCells().SetColumnWidth(0, 12);

	// Adding a chart to the worksheet
	int chartIndex = worksheet.GetCharts().Add(ChartType::Bubble, 5, 0, 20, 8);

	// Accessing the instance of the newly added chart
	Chart chart = worksheet.GetCharts().Get(chartIndex);

	// Adding SeriesCollection (chart data source) to the chart ranging from B1 to D1
	chart.GetNSeries().Add(u"B1:D1", true);

	// Set bubble sizes
	chart.GetNSeries().Get(0).SetBubbleSizes(u"B2:D2");

	// Set X axis values
	chart.GetNSeries().Get(0).SetXValues(u"B3:D3");

	// Set Y axis values
	chart.GetNSeries().Get(0).SetValues(u"B1:D1");

	// Saving the Excel file
	workbook.Save(outputChartTypeBubble);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreatingAndCustomizingCharts_BubbleChart executed successfully.");

}
