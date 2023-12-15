#include "../CellsExamples.h"

//Read and Write XLSB File Format 
void ReadAndWriteXLSBFileFormat()
{
	

	//Source directory path
	U16String dirPath(u"..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	U16String outPath(u"..\\Data\\Output\\");

	//Path of input excel file
	U16String srcReadWriteXLSB = dirPath + u"srcReadWriteXLSB.xlsb";

	//Path of output excel file
	U16String outReadWriteXLSB = outPath + u"outReadWriteXLSB.xlsb";

	//Read source xlsb file
	Workbook wb(srcReadWriteXLSB);

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

	//Save the workbook in XLSB format
	wb.Save(outReadWriteXLSB, SaveFormat::Xlsb);	

	//Show successfull execution message on console
	ShowMessageOnConsole("ReadAndWriteXLSBFileFormat executed successfully.\r\n\r\n");

	
}
