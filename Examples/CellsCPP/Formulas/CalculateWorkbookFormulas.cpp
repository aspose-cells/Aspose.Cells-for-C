#include "../CellsExamples.h"

//Calculate Workbook Formulas
void  CalculateWorkbookFormulas()
{
	//Create a new workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Get first worksheet which is created by default
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Adding a value to "A1" cell
	intrusive_ptr<ICell> cell = ws->GetICells()->GetObjectByIndex(new String("A1"));
	cell->PutValue(5);

	//Adding a value to "A2" cell
	cell = ws->GetICells()->GetObjectByIndex(new String("A2"));
	cell->PutValue(15);

	//Adding a value to "A3" cell
	cell = ws->GetICells()->GetObjectByIndex(new String("A3"));
	cell->PutValue(25);

	//Adding SUM formula to "A4" cell
	cell = ws->GetICells()->GetObjectByIndex(new String("A4"));
	cell->SetFormula(new String("=SUM(A1:A3)"));

	//Calculating the results of formulas
	wb->CalculateFormula();

	//Get the calculated value of the cell "A4" and print it on console
	cell = ws->GetICells()->GetObjectByIndex(new String("A4"));
	StringPtr sCalcuInfo = new String(L"Calculated Value of Cell A4: ");
	Console::WriteLine(sCalcuInfo->StringAppend(cell->GetStringValue()));

	//Show successfull execution message on console
	ShowMessageOnConsole("CalculateWorkbookFormulas executed successfully.\r\n\r\n");
}