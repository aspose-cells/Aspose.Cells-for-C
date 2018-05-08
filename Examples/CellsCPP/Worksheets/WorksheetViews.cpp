#include "../CellsExamples.h"

//Enabling Page Break Preview
void EnablingPageBreakPreview()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleWorksheetViews = srcDir->StringAppend(new String("sampleWorksheetViews.xlsx"));

	//Path of input excel file
	StringPtr outputWorksheetViews = outDir->StringAppend(new String("outputWorksheetViews.xlsx"));
	
	//Instantiate a workbook object
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Displaying the worksheet in page break preview
	worksheet->SetPageBreakPreview(true);

	//Save the Excel file
	workbook->Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("EnablingPageBreakPreview executed successfully.\r\n\r\n");
}

//Zoom Factor
void ZoomFactor()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleWorksheetViews = srcDir->StringAppend(new String("sampleWorksheetViews.xlsx"));

	//Path of input excel file
	StringPtr outputWorksheetViews = outDir->StringAppend(new String("outputWorksheetViews.xlsx"));

	//Instantiate a workbook object
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Setting the zoom factor of the worksheet to 75
	worksheet->SetZoom(75);

	// Saving the modified Excel file
	workbook->Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("ZoomFactor executed successfully.\r\n\r\n");
}

//Freeze Panes
void FreezePanes()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleWorksheetViews = srcDir->StringAppend(new String("sampleWorksheetViews.xlsx"));

	//Path of input excel file
	StringPtr outputWorksheetViews = outDir->StringAppend(new String("outputWorksheetViews.xlsx"));

	//Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Applying freeze panes settings
	worksheet->FreezePanes(3, 2, 3, 2);

	//Saving the modified Excel file
	workbook->Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("FreezePanes executed successfully.\r\n\r\n");
}

//Split Panes
void SplitPanes()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleWorksheetViews = srcDir->StringAppend(new String("sampleWorksheetViews.xlsx"));

	//Path of input excel file
	StringPtr outputWorksheetViews = outDir->StringAppend(new String("outputWorksheetViews.xlsx"));

	//Instantiating a Workbook object 
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Set the active cell
	worksheet->SetActiveCell(new String("A20"));

	//Split the worksheet window
	worksheet->Split();

	//Saving the modified Excel file
	workbook->Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("SplitPanes executed successfully.\r\n\r\n");
}

//Removing Panes
void RemovingPanes()
{
	//Source directory path
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleWorksheetViews = srcDir->StringAppend(new String("sampleWorksheetViews.xlsx"));

	//Path of input excel file
	StringPtr outputWorksheetViews = outDir->StringAppend(new String("outputWorksheetViews.xlsx"));

	//Instantiating a Workbook object 
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleWorksheetViews);

	//Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Set the active cell
	worksheet->SetActiveCell(new String("A20"));

	// Split the worksheet window
	worksheet->RemoveSplit();

	//Saving the modified Excel file
	workbook->Save(outputWorksheetViews);

	//Show successfull execution message on console
	ShowMessageOnConsole("RemovingPanes executed successfully.\r\n\r\n");
}