#include "../CellsExamples.h"

//Read and Write XLSM File Format
void ReadAndWriteXLSMFileFormat()
{
	

	//Source directory path
	U16String dirPath(u"..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	U16String outPath(u"..\\Data\\Output\\");

	//Path of input excel file
	U16String srcReadWriteXLSM = dirPath + u"srcReadWriteXLSM.xlsm";

	//Path of output excel file
	U16String outReadWriteXLSM = outPath + u"outReadWriteXLSM.xlsm";

	//Read source xlsm file
	Workbook wb(srcReadWriteXLSM);

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

	//Save the workbook in XLSM format
	wb.Save(outReadWriteXLSM, SaveFormat::Xlsm);

	//Show successfull execution message on console
	ShowMessageOnConsole("ReadAndWriteXLSMFileFormat executed successfully.\r\n\r\n");

	
}
