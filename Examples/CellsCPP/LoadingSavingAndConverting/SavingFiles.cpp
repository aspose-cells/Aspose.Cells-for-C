#include "../CellsExamples.h"

//Saving File to Some Location
void SavingFiletoSomeLocation()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Load sample Excel file
	intrusive_ptr<IWorkbook>  workbook = Factory::CreateIWorkbook(dirPath->StringAppend(new String("sampleExcelFile.xlsx")));

	//Save in Excel 97-2003 format
	workbook->Save(outPath->StringAppend(new String("outputSavingFiletoSomeLocationExcel97-2003.xls")));
	
	//OR
	workbook->Save(outPath->StringAppend(new String("outputSavingFiletoSomeLocationOrExcel97-2003.xls")), SaveFormat_Excel97To2003);

	//Save in Excel2007 xlsx format
	workbook->Save(outPath->StringAppend(new String("outputSavingFiletoSomeLocationXlsx.xlsx")), SaveFormat_Xlsx);

	//Show successfull execution message on console
	ShowMessageOnConsole("SavingFiletoSomeLocation executed successfully.\r\n\r\n");
}

//Saving File to a Stream
void SavingFiletoStream()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Load sample Excel file
	intrusive_ptr<IWorkbook>  workbook = Factory::CreateIWorkbook(dirPath->StringAppend(new String("sampleExcelFile.xlsx")));

	//Create FileStream object
	intrusive_ptr<FileStream> stream = new FileStream(outPath->StringAppend(new String("outputSavingFiletoStream.xlsx")), FileMode_CreateNew);

	//Save the Workbook to Stream
	workbook->Save(stream, SaveFormat_Xlsx);
	stream->Close();

	//Show successfull execution message on console
	ShowMessageOnConsole("SavingFiletoStream executed successfully.\r\n\r\n");
}