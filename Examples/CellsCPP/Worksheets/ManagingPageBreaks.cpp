#include "../CellsExamples.h"

//Adding Page Breaks
void AddingPageBreaks()
{
	

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of output excel file
	U16String outputPageBreaks = outDir + "outputManagingPageBreaks.xlsx";

	//Instantiating a Workbook object
	Workbook workbook;

	//Add a page break at cell J20
	workbook.GetWorksheets().Get(0).AddPageBreaks("J20");

	//Save the Excel file.
	workbook.Save(outputPageBreaks);

	//Show successfull execution message on console
	ShowMessageOnConsole("AddingPageBreaks executed successfully.\r\n\r\n");

	
}