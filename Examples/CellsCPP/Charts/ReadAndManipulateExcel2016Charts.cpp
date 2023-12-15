#include "../CellsExamples.h"

//Read and Manipulate Excel 2016 Charts
void ReadAndManipulateExcel2016Charts()
{
	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleReadAndManipulateExcel2016Charts = srcDir + "sampleReadAndManipulateExcel2016Charts.xlsx";

	//Path of output excel file
	U16String outputReadAndManipulateExcel2016Charts = outDir + "outputReadAndManipulateExcel2016Charts.xlsx";

	// Load sample Excel file containing Excel 2016 charts
	Workbook workbook(sampleReadAndManipulateExcel2016Charts);

	// Access the first worksheet which contains the charts
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Access all charts one by one and read their types
	for (int i = 0; i < worksheet.GetCharts().GetCount(); i++)
	{
		// Access the chart
		Chart ch = worksheet.GetCharts().Get(i);

		//Get the chart type
		ChartType chartType = ch.GetType();

		//Convert chart type enum to string
		U16String strChartType;

		switch (chartType)
		{
		case Aspose::Cells::Charts::ChartType::BoxWhisker:
			strChartType = "BoxWhisker";
			break;
		case Aspose::Cells::Charts::ChartType::Histogram:
			strChartType = "Histogram";
			break;
		case Aspose::Cells::Charts::ChartType::Sunburst:
			strChartType ="Sunburst";
			break;
		case Aspose::Cells::Charts::ChartType::Treemap:
			strChartType = "Treemap";
			break;
		case Aspose::Cells::Charts::ChartType::Waterfall:
			strChartType = "Waterfall";
			break;
		default:
			break;
		}

		// Print chart type
		std::cout << strChartType.ToUtf8() << std::endl;

		// Change the title of the charts as per their types
		U16String strTitle = "Chart Type is " + strChartType;
		ch.GetTitle().SetText(strTitle);
	}

	// Save the workbook
	workbook.Save(outputReadAndManipulateExcel2016Charts);

	//Show successfull execution message on console
	ShowMessageOnConsole("ReadAndManipulateExcel2016Charts executed successfully.");

}
