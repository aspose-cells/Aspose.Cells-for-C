#include "../CellsExamples.h"

//Read and Write CSV File Format
void ReadAndWriteCSVFileFormat()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input csv file
	StringPtr srcReadWriteCSV = dirPath->StringAppend(new String(L"srcReadWriteCSV.csv"));

	//Path of output csv file
	StringPtr outReadWriteCSV = outPath->StringAppend(new String(L"outReadWriteCSV.csv"));

	//Read source csv file
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(srcReadWriteCSV);

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

	//Save the workbook in csv format
	wb->Save(outReadWriteCSV, SaveFormat_CSV);

	//Show successfull execution message on console
	ShowMessageOnConsole("ReadAndWriteCSVFileFormat executed successfully.\r\n\r\n");
}
