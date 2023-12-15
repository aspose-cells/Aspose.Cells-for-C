#include "../CellsExamples.h"

//Read and Write Tab Delimited File Format
void ReadAndWriteTabDelimitedFileFormat()
{
	

	//Source directory path
	U16String dirPath(u"..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	U16String outPath(u"..\\Data\\Output\\");

	//Path of input tab delimited file
	U16String srcReadWriteTabDelimited = dirPath + u"srcReadWriteTabDelimited.txt";

	//Path of output tab delimited file
	U16String outReadWriteTabDelimited = outPath + u"outReadWriteTabDelimited.txt";

	//Read source tab delimited file
	Workbook wb(srcReadWriteTabDelimited);

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

	//Save the workbook in tab delimited format
	wb.Save(outReadWriteTabDelimited, SaveFormat::TabDelimited);	

	//Show successfull execution message on console
	ShowMessageOnConsole("ReadAndWriteTabDelimitedFileFormat executed successfully.\r\n\r\n");

	
}
