#include "../CellsExamples.h"

//Manipulate Named Range in a Workbook
void  ManipulateNamedRangeInWorkbook()
{
	

	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleManipulateNamedRangeInWorkbook = dirPath + "sampleManipulateNamedRangeInWorkbook.xlsx";

	//Path of output excel file
	U16String outputManipulateNamedRangeInWorkbook = outPath + "outputManipulateNamedRangeInWorkbook.xlsx";

	//Create a workbook
	Workbook wb(sampleManipulateNamedRangeInWorkbook);

	//Read the named range created above from names collection
	Name nm = wb.GetWorksheets().GetNames().Get(0);

	//Print its FullText and RefersTo memebers
	U16String fullTect = "Full Text : ";
	std::cout << (fullTect + nm.GetFullText()).ToUtf8();

	U16String referTo = "Refers To: ";
	std::cout << (referTo + nm.GetRefersTo()).ToUtf8() << std::endl;

	//Manipulate the RefersTo property of NamedRange
	nm.SetRefersTo("=Sheet1!$D$5:$J$10");

	//Save the workbook in xlsx format
	wb.Save(outputManipulateNamedRangeInWorkbook, SaveFormat::Xlsx);
	
	//Show successfull execution message on console
	ShowMessageOnConsole("ManipulateNamedRangeInWorkbook executed successfully.\r\n\r\n");

	

}