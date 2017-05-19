#include "../CellsExamples.h"

//Find or Search Data 
void  FindOrSearchData()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Path of input excel file
	StringPtr sampleFindOrSearchData = dirPath->StringAppend(new String("sampleFindOrSearchData.xlsx"));

	//Load sample excel file into a workbook object
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(sampleFindOrSearchData);

	//Get first worksheet of the workbook
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Finding the cell containing the number 80
	intrusive_ptr<ICell> cell = ws->GetICells()->FindNumber(80, NULL);

	//Printing the name of the cell found after searching worksheet
	StringPtr str1 = new String(L"Name of the cell containing the number 80: ");
	Console::WriteLine(str1->StringAppend(cell->GetName()));

	//Finding the cell containing the specified formula
	cell = ws->GetICells()->FindFormula(new String("=SUM(A5:A10)"), NULL);

	//Printing the name of the cell found after searching worksheet
	StringPtr str2 = new String(L"Name of the cell containing formula =SUM(A5:A10): ");
	Console::WriteLine(str2->StringAppend(cell->GetName()));

	//Finding the cell containing the formula that contains CHA
	cell = ws->GetICells()->FindFormulaContains(new String("CHA"), NULL);

	//Printing the name of the cell found after searching worksheet
	StringPtr str3 = new String(L"Name of the cell containing the formula that contains CHA: ");
	Console::WriteLine(str3->StringAppend(cell->GetName()));

	//Finding the cell containing the specified string
	cell = ws->GetICells()->FindString(new String("SampleData"), NULL);

	//Printing the name of the cell found after searching worksheet
	StringPtr str4 = new String(L"Name of the cell containing specified string: ");
	Console::WriteLine(str4->StringAppend(cell->GetName()));

	//Finding the cell containing the string that contains Two
	cell = ws->GetICells()->FindStringContains(new String("Two"), NULL);

	//Printing the name of the cell found after searching worksheet
	StringPtr str5 = new String(L"Name of the cell containing the string that contains Two: ");
	Console::WriteLine(str5->StringAppend(cell->GetName()));

	//Finding the cell containing the string that starts with AAA
	cell = ws->GetICells()->FindStringStartsWith(new String("AAA"), NULL);

	//Printing the name of the cell found after searching worksheet
	StringPtr str6 = new String(L"Name of the cell containing the string that starts with AAA: ");
	Console::WriteLine(str6->StringAppend(cell->GetName()));

	//Finding the cell containing the string that ends with BBB
	cell = ws->GetICells()->FindStringEndsWith(new String("BBB"), NULL);

	//Printing the name of the cell found after searching worksheet
	StringPtr str7 = new String(L"Name of the cell containing the string that ends with BBB: ");
	Console::WriteLine(str7->StringAppend(cell->GetName()));

	//Show successfull execution message on console
	ShowMessageOnConsole("FindOrSearchData executed successfully.\r\n\r\n");
}