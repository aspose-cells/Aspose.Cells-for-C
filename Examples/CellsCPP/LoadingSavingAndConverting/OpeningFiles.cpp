#include "../CellsExamples.h"

//Opening Excel File using its Path
void OpeningExcelFileUsingPath()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\LoadingSavingAndConverting\\";

	//Create Workbook object from an Excel file path
	Workbook  workbook(dirPath + "sampleExcelFile.xlsx");

	//Show following message on console
	ShowMessageOnConsole("Workbook opened successfully using file path.");

	//Show successfull execution message on console
	ShowMessageOnConsole("OpeningExcelFileUsingPath executed successfully.\r\n\r\n");

	
}

//Opening Excel File using Stream
void OpeningExcelFileUsingStream()
{
	
	
	//Source directory path
	U16String dirPath(u"..\\Data\\LoadingSavingAndConverting\\");

	//You need to write your own code to read the contents of the sampleExcelFile.xlsx file into this variable.
	Vector<uint8_t> FileStream = GetDataFromFile(dirPath + "sampleExcelFile.xlsx"); 

	//Create Workbook object from a Stream object
	Workbook  workbook(FileStream);

	//Show following message on console
	ShowMessageOnConsole("Workbook opened successfully using stream.");

	//Show successfull execution message on console
	ShowMessageOnConsole("OpeningExcelFileUsingStream executed successfully.\r\n\r\n");

	
}

