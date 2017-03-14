#include "CellsExamples.h"

void AddingFormulasandCalculatingResults()
{
	//Create workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Access first worksheet in the workbook
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Adding integer values to cells A1, A2 and A3
	ws->GetICells()->GetObjectByIndex(new String("A1"))->PutValue(10);
	ws->GetICells()->GetObjectByIndex(new String("A2"))->PutValue(20);
	ws->GetICells()->GetObjectByIndex(new String("A3"))->PutValue(70);

	//Adding a SUM formula to "A4" cell
	ws->GetICells()->GetObjectByIndex(new String("A4"))->SetFormula(new String("=SUM(A1:A3)"));

	//Calculating the results of formulas
	wb->CalculateFormula();

	//Get the calculated value of the cell
	intrusive_ptr<String> strVal = ws->GetICells()->GetObjectByIndex(new String("A4"))->GetStringValue();

	//Print the calculated value on console
	printf("Calculated Result: %s", strVal->charValue());

	//Saving the workbook
	wb->Save(dirPath->StringAppend(new String("outputAddingFormulasCalculatingResults.xlsx")));

	//Print empty lines
	printf("\r\n\r\n");

}


void DirectCalculationofFormula()
{
	//Create workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Access first worksheet in the workbook
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Put 20 in cell A1
	intrusive_ptr<ICell> cellA1 = ws->GetICells()->GetObjectByIndex(new String("A1"));
	cellA1->PutValue(20);

	//Put 30 in cell A2
	intrusive_ptr<ICell> cellA2 = ws->GetICells()->GetObjectByIndex(new String("A2"));
	cellA2->PutValue(30);

	//Calculate the Sum of A1 and A2
	intrusive_ptr<Aspose::Cells::System::Object> results = ws->CalculateFormula(new String("=Sum(A1:A2)"));

	//Print the output
	printf("Value of A1: %s\r\n", cellA1->GetStringValue()->charValue());
	printf("Value of A2: %s\r\n", cellA2->GetStringValue()->charValue());
	printf("Result of Sum(A1:A2): %s\r\n", results->ToString()->charValue());

	//Print empty lines
	printf("\r\n\r\n");
}

void CalculatingFormulasOnceOnly()
{
	//Create workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(dirPath->StringAppend(new String("sampleCalculatingFormulasOnceOnly.xlsx")));

	//Set the CreateCalcChain as false
	wb->GetISettings()->SetCreateCalcChain(false);

	//Get the time in milliseconds before formula calculation
	int before_miliseconds = Aspose::Cells::System::DateTime::GetNow()->GetMillisecond();

	//Calculate the workbook formulas
	wb->CalculateFormula();

	//Get the time in milliseconds after formula calculation
	int after_miliseconds = Aspose::Cells::System::DateTime::GetNow()->GetMillisecond();

	//Print the difference in milliseconds
	printf("Workbook Formula Calculation Elapsed Time in Milliseconds: %d\r\n\r\n", after_miliseconds - before_miliseconds);

	//Print empty lines
	printf("\r\n\r\n");
}

