#include "../CellsExamples.h"

//Create and Manipulate Excel Table
void  CreateAndManipulateExcelTable()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\TechnicalArticles\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleCreateAndManipulateExcelTable = dirPath->StringAppend(new String("sampleCreateAndManipulateExcelTable.xlsx"));

	//Path of output excel file
	StringPtr outputCreateAndManipulateExcelTable = outPath->StringAppend(new String("outputCreateAndManipulateExcelTable.xlsx"));

	//Load the sample excel file
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(sampleCreateAndManipulateExcelTable);

	//Access first worksheet
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Add table i.e. list object
	int idx = ws->GetIListObjects()->Add(new String("A1"), new String("H10"), true);

	//Access the newly added list object
	intrusive_ptr<IListObject> lo = ws->GetIListObjects()->GetObjectByIndex(idx);

	//Use its display methods
	lo->SetShowHeaderRow(true);
	lo->SetShowTableStyleColumnStripes(true);
	lo->SetShowTotals(true);

	//Set its style
	lo->SetTableStyleType(TableStyleType_TableStyleLight12);

	//Set total functions of 3rd, 4th and 5th columns
	lo->GetIListColumns()->GetObjectByIndex(2)->SetTotalsCalculation(TotalsCalculation_Min);
	lo->GetIListColumns()->GetObjectByIndex(3)->SetTotalsCalculation(TotalsCalculation_Max);
	lo->GetIListColumns()->GetObjectByIndex(4)->SetTotalsCalculation(TotalsCalculation_Count);

	//Save the output excel file
	wb->Save(outputCreateAndManipulateExcelTable);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreateAndManipulateExcelTable executed successfully.\r\n\r\n");
}