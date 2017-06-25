#include "../CellsExamples.h"

//Adding Worksheets to a New Excel File
void AddingWorksheetsToNewExcelFile()
{
	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of output excel file
	StringPtr outputManageWorksheets = outDir->StringAppend(new String("outputManageWorksheets.xlsx"));

	//Create workbook
	intrusive_ptr<IWorkbook>  workbook = Factory::CreateIWorkbook();

	// Adding a new worksheet to the Workbook object
	int i = workbook->GetIWorksheets()->Add();

	// Obtaining the reference of the newly added worksheet by passing its sheet index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(i);

	// Setting the name of the newly added worksheet
	worksheet->SetName(new String("My Worksheet"));

	// Save the Excel file.
	workbook->Save(outputManageWorksheets);
	
	StringPtr msg = new String("New worksheet added successfully with in a workbook!");
	Console::WriteLine(msg);

	//Show successfull execution message on console
	ShowMessageOnConsole("AddingWorksheetsToNewExcelFile executed successfully.\r\n\r\n");
}

//Accessing Worksheets using Sheet Index
void AccessingWorksheetsUsingSheetIndex()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Path of input excel file
	StringPtr sampleManageWorksheets = srcDir->StringAppend(new String("sampleManageWorksheets.xlsx"));

	//Load the sample Excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleManageWorksheets);

	//Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Access the cell by its name.
	intrusive_ptr<ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("F7"));

	//Print the value of cell F7
	StringPtr val = cell->GetStringValue();

	//Print the value on console.
	Console::Write(new String("Value of cell F7: "));
	Console::WriteLine(val);

	//Show successfull execution message on console
	ShowMessageOnConsole("AccessingWorksheetsUsingSheetIndex executed successfully.\r\n\r\n");
}

//Removing Worksheets using Sheet Index
void RemovingWorksheetsUsingSheetIndex()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleManageWorksheets = srcDir->StringAppend(new String("sampleManageWorksheets.xlsx"));

	//Path of output excel file
	StringPtr outputManageWorksheets = outDir->StringAppend(new String("outputManageWorksheets.xlsx"));
	
	//Load the sample Excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleManageWorksheets);

	//Removing a worksheet using its sheet index
	workbook->GetIWorksheets()->RemoveAt(0);

	//Save the Excel file.
	workbook->Save(outputManageWorksheets);

	//Show successfull execution message on console
	ShowMessageOnConsole("RemovingWorksheetsUsingSheetIndex executed successfully.\r\n\r\n");
}
