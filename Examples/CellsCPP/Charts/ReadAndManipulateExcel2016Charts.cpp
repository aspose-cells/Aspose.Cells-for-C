#include "../CellsExamples.h"

//Read and Manipulate Excel 2016 Charts
void ReadAndManipulateExcel2016Charts()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleReadAndManipulateExcel2016Charts = srcDir->StringAppend(new String("sampleReadAndManipulateExcel2016Charts.xlsx"));

	//Path of output excel file
	StringPtr outputReadAndManipulateExcel2016Charts = outDir->StringAppend(new String("outputReadAndManipulateExcel2016Charts.xlsx"));

	// Load sample Excel file containing Excel 2016 charts
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleReadAndManipulateExcel2016Charts);

	// Access the first worksheet which contains the charts
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Access all charts one by one and read their types
	for (int i = 0; i < worksheet->GetICharts()->GetCount(); i++)
	{
		// Access the chart
		intrusive_ptr<IChart> ch = worksheet->GetICharts()->GetObjectByIndex(i);

		//Get the chart type
		ChartType chartType = ch->GetType();

		//Convert chart type enum to string
		StringPtr strChartType = NULL;

		switch (chartType)
		{
		case Aspose::Cells::Charts::ChartType_BoxWhisker:
			strChartType = new String("BoxWhisker");
			break;
		case Aspose::Cells::Charts::ChartType_Histogram:
			strChartType = new String("Histogram");
			break;
		case Aspose::Cells::Charts::ChartType_Sunburst:
			strChartType = new String("Sunburst");
			break;
		case Aspose::Cells::Charts::ChartType_Treemap:
			strChartType = new String("Treemap");
			break;
		case Aspose::Cells::Charts::ChartType_Waterfall:
			strChartType = new String("Waterfall");
			break;
		default:
			break;
		}

		// Print chart type
		Aspose::Cells::Systems::Console::WriteLine(strChartType);

		// Change the title of the charts as per their types
		StringPtr strTitle = (StringPtr)(new String("Chart Type is "))->Append(strChartType);
		ch->GetITitle()->SetText(strTitle);
	}

	// Save the workbook
	workbook->Save(outputReadAndManipulateExcel2016Charts);

	//Show successfull execution message on console
	ShowMessageOnConsole("ReadAndManipulateExcel2016Charts executed successfully.");
}
