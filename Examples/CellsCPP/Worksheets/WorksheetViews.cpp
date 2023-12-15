#include "../CellsExamples.h"

//Enabling Page Break Preview
void EnablingPageBreakPreview()
{
	
	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleWorksheetViews = srcDir + "sampleWorksheetViews.xlsx";

	//Path of input excel file
	U16String outputWorksheetViews = outDir + "outputWorksheetViews.xlsx";
	
	//Instantiate a workbook object
	Workbook workbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Displaying the worksheet in page break preview
	worksheet.SetIsPageBreakPreview(true);

	//Save the Excel file
	workbook.Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("EnablingPageBreakPreview executed successfully.\r\n\r\n");

	
}

//Zoom Factor
void ZoomFactor()
{
	
	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleWorksheetViews = srcDir + "sampleWorksheetViews.xlsx";

	//Path of input excel file
	U16String outputWorksheetViews = outDir + "outputWorksheetViews.xlsx";

	//Instantiate a workbook object
	Workbook workbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Setting the zoom factor of the worksheet to 75
	worksheet.SetZoom(75);

	// Saving the modified Excel file
	workbook.Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("ZoomFactor executed successfully.\r\n\r\n");

	
}

//Freeze Panes
void FreezePanes()
{
	
	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleWorksheetViews = srcDir + "sampleWorksheetViews.xlsx";

	//Path of input excel file
	U16String outputWorksheetViews = outDir + "outputWorksheetViews.xlsx";

	//Instantiating a Workbook object and opening the Excel file through the file stream
	Workbook workbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Applying freeze panes settings
	worksheet.FreezePanes(3, 2, 3, 2);

	//Saving the modified Excel file
	workbook.Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("FreezePanes executed successfully.\r\n\r\n");

	
}

//Split Panes
void SplitPanes()
{
	
	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleWorksheetViews = srcDir + "sampleWorksheetViews.xlsx";

	//Path of input excel file
	U16String outputWorksheetViews = outDir + "outputWorksheetViews.xlsx";

	//Instantiating a Workbook object 
	Workbook workbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Set the active cell
	worksheet.SetActiveCell("A20");

	//Split the worksheet window
	worksheet.Split();

	//Saving the modified Excel file
	workbook.Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("SplitPanes executed successfully.\r\n\r\n");
	
}

//Removing Panes
void RemovingPanes()
{
	
	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleWorksheetViews = srcDir + "sampleWorksheetViews.xlsx";

	//Path of input excel file
	U16String outputWorksheetViews = outDir + "outputWorksheetViews.xlsx";

	//Instantiating a Workbook object 
	Workbook workbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Set the active cell
	worksheet.SetActiveCell("A20");

	// Split the worksheet window
	worksheet.RemoveSplit();

	//Saving the modified Excel file
	workbook.Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("RemovingPanes executed successfully.\r\n\r\n");

	
}