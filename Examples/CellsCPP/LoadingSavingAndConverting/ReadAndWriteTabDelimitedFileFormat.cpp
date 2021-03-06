#include "../CellsExamples.h"

//Read and Write Tab Delimited File Format
void ReadAndWriteTabDelimitedFileFormat()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input tab delimited file
	StringPtr srcReadWriteTabDelimited = dirPath->StringAppend(new String(L"srcReadWriteTabDelimited.txt"));

	//Path of output tab delimited file
	StringPtr outReadWriteTabDelimited = outPath->StringAppend(new String(L"outReadWriteTabDelimited.txt"));

	//Read source tab delimited file
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(srcReadWriteTabDelimited);

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

	//Save the workbook in tab delimited format
	wb->Save(outReadWriteTabDelimited, SaveFormat_TabDelimited);

	//Show successfull execution message on console
	ShowMessageOnConsole("ReadAndWriteTabDelimitedFileFormat executed successfully.\r\n\r\n");
}
