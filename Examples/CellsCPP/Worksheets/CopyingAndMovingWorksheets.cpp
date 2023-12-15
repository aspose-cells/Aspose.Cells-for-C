#include "../CellsExamples.h"

//Copy Worksheets within a Workbook
void CopyWorksheetsWithinWorkbook()
{
	

	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleCopyingAndMovingWorksheets = srcDir + "sampleCopyingAndMovingWorksheets.xlsx";

	//Path of output excel file
	U16String outputCopyingAndMovingWorksheets = outDir + "outputCopyingAndMovingWorksheets.xlsx";

	//Create workbook
	Workbook  workbook(sampleCopyingAndMovingWorksheets);

	//Create worksheets object with reference to the sheets of the workbook.
	WorksheetCollection sheets = workbook.GetWorksheets();

	//Copy data to a new sheet from an existing sheet within the workbook.
	sheets.AddCopy("Test1");

	//Save the Excel file.
	workbook.Save(outputCopyingAndMovingWorksheets);

	std::cout << "Worksheet copied successfully with in a workbook!" << std::endl;
	
	//Show successfull execution message on console
	ShowMessageOnConsole("CopyWorksheetsWithInWorkbook executed successfully.\r\n\r\n");
	
}

//Move Worksheets within Workbook
void MoveWorksheetsWithinWorkbook()
{
	

	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleCopyingAndMovingWorksheets = srcDir + "sampleCopyingAndMovingWorksheets.xlsx";

	//Path of output excel file
	U16String outputCopyingAndMovingWorksheets = outDir + "outputCopyingAndMovingWorksheets.xlsx";

	//Create workbook
	Workbook  workbook(sampleCopyingAndMovingWorksheets);

	//Create worksheets object with reference to the sheets of the workbook.
	WorksheetCollection sheets = workbook.GetWorksheets();

	//Access the first sheet
	Worksheet sheet = sheets.Get(0);

	//Move the first sheet to the third position in the workbook.
	sheet.MoveTo(2);

	//Save the Excel file.
	workbook.Save(outputCopyingAndMovingWorksheets);

	//Show successfull execution message on console
	ShowMessageOnConsole("MoveWorksheetsWithinWorkbook executed successfully.\r\n\r\n");

	
}
