#include "../CellsExamples.h"

//Read and Write CSV File Format
void ReadAndWriteCSVFileFormat()
{
		  
	
	//Source directory path
	U16String dirPath(u"..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	U16String outPath(u"..\\Data\\Output\\");

	//Path of input csv file
	U16String srcReadWriteCSV = dirPath + u"srcReadWriteCSV.csv";

	//Path of output csv file
	U16String outReadWriteCSV = outPath + u"outReadWriteCSV.csv";

	//Read source csv file
	Workbook wb(srcReadWriteCSV);

	//Access first worksheet
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Access cell A1
	Cell cell = ws.GetCells().Get(u"A1");

	//Get the string value of cell A1
	U16String strVal = cell.GetStringValue();

	//Print the string value of cell A1
	U16String cellValue(u"Cell Value: ");
	std::cout << cellValue.ToUtf8() << strVal.ToUtf8() << std::endl;

	//Access cell C4
	cell = ws.GetCells().Get(u"C4");

	//Put the string value of cell A1 into C4
	U16String strValPtr(strVal);
	cell.PutValue(strValPtr);

	//Save the workbook in csv format
	wb.Save(outReadWriteCSV, SaveFormat::CSV);	

	//Show successfull execution message on console
	ShowMessageOnConsole("ReadAndWriteCSVFileFormat executed successfully.\r\n\r\n");

	
}
