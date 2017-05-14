#include "../CellsExamples.h"

//Opening Excel File using its Path
void OpeningExcelFileUsingPath()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\LoadingSavingAndConverting\\");

	//Create Workbook object from an Excel file path
	intrusive_ptr<IWorkbook>  workbook = Factory::CreateIWorkbook(dirPath->StringAppend(new String("sampleExcelFile.xlsx")));

	//Show following message on console
	ShowMessageOnConsole("Workbook opened successfully using file path.");

	//Show successfull execution message on console
	ShowMessageOnConsole("OpeningExcelFileUsingPath executed successfully.\r\n\r\n");
}

//Opening Excel File using Stream
void OpeningExcelFileUsingStream()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\LoadingSavingAndConverting\\");

	//Create a Stream object
	intrusive_ptr<FileStream>  fstream = new FileStream(dirPath->StringAppend(new String("sampleExcelFile.xlsx")), FileMode_Open);

	//Create Workbook object from a Stream object
	intrusive_ptr<IWorkbook>  workbook = Factory::CreateIWorkbook(fstream);

	//Show following message on console
	ShowMessageOnConsole("Workbook opened successfully using stream.");

	//Close the Stream object
	fstream->Close();

	//Show successfull execution message on console
	ShowMessageOnConsole("OpeningExcelFileUsingStream executed successfully.\r\n\r\n");
}