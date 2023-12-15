#include "../CellsExamples.h"

//Create Named Range in a Workbook 
void CreateNamedRangeInWorkbook()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Path of output excel file
	U16String outputCreateNamedRange = dirPath + "outputCreateNamedRange.xlsx";

	//Create a workbook
	Workbook wb;

	//Access first worksheet
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Create a range
	Range rng = ws.GetCells().CreateRange("A5:C10");

	//Set its name to make it named range
	rng.SetName("MyNamedRange");

	//Read the named range created above from names collection
	Name nm = wb.GetWorksheets().GetNames().Get(0);

	//Print its FullText and RefersTo memebers
	U16String fullTect = "Full Text : ";
	std::cout << (fullTect + nm.GetFullText()).ToUtf8() << std::endl;

	U16String referTo = "Refers To: ";
	std::cout << (referTo + nm.GetRefersTo()).ToUtf8() << std::endl;

	//Save the workbook in xlsx format
	wb.Save(outputCreateNamedRange, SaveFormat::Xlsx);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreateNamedRangeInWorkbook executed successfully.\r\n\r\n");

	
}