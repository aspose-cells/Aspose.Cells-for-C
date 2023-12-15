#include "../CellsExamples.h"

//Saving File to Some Location
void SavingFiletoSomeLocation()
{
	

	//For complete examples and data files, please go to https://github.com/aspose-cells/Aspose.Cells-for-C

	//Source directory path
	U16String dirPath(u"..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	U16String outPath(u"..\\Data\\Output\\");

	//Load sample Excel file
	Workbook  workbook(dirPath + u"sampleExcelFile.xlsx");

	//Save in Excel 97-2003 format
	workbook.Save(outPath + u"outputSavingFiletoSomeLocationExcel97-2003.xls");

	//OR
	workbook.Save(outPath + u"outputSavingFiletoSomeLocationOrExcel97-2003.xls", SaveFormat::Excel97To2003);

	//Save in Excel2007 xlsx format
	workbook.Save(outPath + u"outputSavingFiletoSomeLocationXlsx.xlsx", SaveFormat::Xlsx);	

	//Show successfull execution message on console
	ShowMessageOnConsole("SavingFiletoSomeLocation executed successfully.\r\n\r\n");

	
}

//Saving File to a Stream
void SavingFiletoStream()
{
	

	//Source directory path
	U16String dirPath = "..\\Data\\LoadingSavingAndConverting\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Load sample Excel file
	Workbook  workbook(dirPath + "sampleExcelFile.xlsx");

	//Create FileStream object
	std::ofstream fileStream(outPath.ToUtf8() + "outputSavingFiletoStream.xlsx", std::ios::binary);

	//Save the Workbook to Stream
	Vector<uint8_t> stream = workbook.Save(SaveFormat::Xlsx);
	fileStream.write(reinterpret_cast<char*>(stream.GetData()), stream.GetLength());
	fileStream.close();

	//Show successfull execution message on console
	ShowMessageOnConsole("SavingFiletoStream executed successfully.\r\n\r\n");

	
}