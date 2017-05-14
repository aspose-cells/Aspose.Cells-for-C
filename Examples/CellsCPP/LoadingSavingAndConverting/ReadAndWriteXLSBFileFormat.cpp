#include "../CellsExamples.h"

//Read and Write XLSB File Format 
void ReadAndWriteXLSBFileFormat()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr srcReadWriteXLSB = dirPath->StringAppend(new String("srcReadWriteXLSB.xlsb"));

	//Path of output excel file
	StringPtr outReadWriteXLSB = outPath->StringAppend(new String("outReadWriteXLSB.xlsb"));

	//Read source xlsb file
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(srcReadWriteXLSB);

	//Access first worksheet
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Access cell A1
	intrusive_ptr<ICell> cell = ws->GetICells()->GetObjectByIndex(new String("A1"));

	//Get the string value of cell A1
	StringPtr strVal = cell->GetStringValue();

	//Print the string value of cell A1
	StringPtr cellValue = new String("Cell Value: ");
	Console::WriteLine(cellValue->StringAppend(strVal));

	//Access cell C4
	cell = ws->GetICells()->GetObjectByIndex(new String("C4"));

	//Put the string value of cell A1 into C4
	intrusive_ptr<String> strValPtr = new String(strVal);
	cell->PutValue(strValPtr);

	//Save the workbook in XLSB format
	wb->Save(outReadWriteXLSB, SaveFormat_Xlsb);

	//Show successfull execution message on console
	ShowMessageOnConsole("ReadAndWriteXLSBFileFormat executed successfully.\r\n\r\n");
}
