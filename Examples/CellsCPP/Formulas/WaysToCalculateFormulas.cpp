#include "../CellsExamples.h"

//Adding Formulas & Calculating Results
void  AddingFormulasAndCalculatingResults()
{
	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of output excel file
	StringPtr outputAddingFormulasAndCalculatingResults = outPath->StringAppend(new String("outputAddingFormulasAndCalculatingResults.xlsx"));

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
	StringPtr str1 = new String("Calculated Result: ");
	Console::WriteLine(str1->StringAppend(strVal));

	//Saving the workbook
	wb->Save(outputAddingFormulasAndCalculatingResults);

	//Show successfull execution message on console
	ShowMessageOnConsole("AddingFormulasAndCalculatingResults executed successfully.\r\n\r\n");
}

//Direct Calculation of Formula
void DirectCalculationOfFormula()
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
	intrusive_ptr<Aspose::Cells::Systems::Object> results = ws->CalculateFormula(new String("=Sum(A1:A2)"));

	//Print the output
	StringPtr str1 = new String("Value of A1: ");
	Console::WriteLine(str1->StringAppend(cellA1->GetStringValue()));
	StringPtr str2 = new String("Value of A2: ");
	Console::WriteLine(str2->StringAppend(cellA2->GetStringValue()));
	StringPtr str3 = new String("Result of Sum(A1:A2): ");
	Console::WriteLine(str3->StringAppend(results->ToString()));

	//Show successfull execution message on console
	ShowMessageOnConsole("DirectCalculationOfFormula executed successfully.\r\n\r\n");
}

//Calculating Formulas Once Only
void CalculatingFormulasOnceOnly()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Formulas\\");

	//Path of input excel file
	StringPtr sampleCalculatingFormulasOnceOnly = dirPath->StringAppend(new String("sampleCalculatingFormulasOnceOnly.xlsx"));

	//Create workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(sampleCalculatingFormulasOnceOnly);

	//Set the CreateCalcChain as false
	wb->GetISettings()->SetCreateCalcChain(false);

	//Get the time in milliseconds before formula calculation
	int before_miliseconds = Aspose::Cells::Systems::DateTime::GetNow()->GetMillisecond();

	//Calculate the workbook formulas
	wb->CalculateFormula();

	//Get the time in milliseconds after formula calculation
	int after_miliseconds = Aspose::Cells::Systems::DateTime::GetNow()->GetMillisecond();

	//Print the difference in milliseconds
	StringPtr str1 = new String("Workbook Formula Calculation Elapsed Time in Milliseconds: ");
	Console::WriteLine(str1->StringAppend(Int32Helper::ToString(after_miliseconds - before_miliseconds)));

	//Show successfull execution message on console
	ShowMessageOnConsole("CalculatingFormulasOnceOnly executed successfully.\r\n\r\n");
}