#include "../CellsExamples.h"

//Adding Page Breaks
void AddingPageBreaks()
{
	//Output directory path
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of output excel file
	StringPtr outputPageBreaks = outDir->StringAppend(new String("outputManagingPageBreaks.xlsx"));

	//Instantiating a Workbook object
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();

	//Add a page break at cell J20
	workbook->GetIWorksheets()->GetObjectByIndex(0)->AddPageBreaks(new String("J20"));

	//Save the Excel file.
	workbook->Save(outputPageBreaks);

	//Show successfull execution message on console
	ShowMessageOnConsole("AddingPageBreaks executed successfully.\r\n\r\n");
}