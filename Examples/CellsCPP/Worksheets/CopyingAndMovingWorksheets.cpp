#include "../CellsExamples.h"

//Copy Worksheets within a Workbook
void CopyWorksheetsWithinWorkbook()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleCopyingAndMovingWorksheets = srcDir->StringAppend(new String("sampleCopyingAndMovingWorksheets.xlsx"));

	//Path of output excel file
	StringPtr outputCopyingAndMovingWorksheets = outDir->StringAppend(new String("outputCopyingAndMovingWorksheets.xlsx"));

	//Create workbook
	intrusive_ptr<IWorkbook>  workbook = Factory::CreateIWorkbook(sampleCopyingAndMovingWorksheets);

	//Create worksheets object with reference to the sheets of the workbook.
	intrusive_ptr<IWorksheetCollection> sheets = workbook->GetIWorksheets();

	//Copy data to a new sheet from an existing sheet within the workbook.
	sheets->AddCopy(new String("Test1"));

	//Save the Excel file.
	workbook->Save(outputCopyingAndMovingWorksheets);

	StringPtr msg = new String("Worksheet copied successfully with in a workbook!");
	Console::WriteLine(msg);

	//Show successfull execution message on console
	ShowMessageOnConsole("CopyWorksheetsWithInWorkbook executed successfully.\r\n\r\n");
}

//Move Worksheets within Workbook
void MoveWorksheetsWithinWorkbook()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleCopyingAndMovingWorksheets = srcDir->StringAppend(new String("sampleCopyingAndMovingWorksheets.xlsx"));

	//Path of output excel file
	StringPtr outputCopyingAndMovingWorksheets = outDir->StringAppend(new String("outputCopyingAndMovingWorksheets.xlsx"));

	//Create workbook
	intrusive_ptr<IWorkbook>  workbook = Factory::CreateIWorkbook(sampleCopyingAndMovingWorksheets);

	//Create worksheets object with reference to the sheets of the workbook.
	intrusive_ptr<IWorksheetCollection> sheets = workbook->GetIWorksheets();

	//Access the first sheet
	intrusive_ptr<IWorksheet> sheet = sheets->GetObjectByIndex(0);

	//Move the first sheet to the third position in the workbook.
	sheet->MoveTo(2);

	//Save the Excel file.
	workbook->Save(outputCopyingAndMovingWorksheets);

	//Show successfull execution message on console
	ShowMessageOnConsole("MoveWorksheetsWithinWorkbook executed successfully.\r\n\r\n");
}
