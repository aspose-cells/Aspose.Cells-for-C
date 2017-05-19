#include "../CellsExamples.h"

//Creating Subtotals
void CreatingSubtotals()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleCreatingSubtotals = dirPath->StringAppend(new String("sampleCreatingSubtotals.xlsx"));

	//Path of output excel file
	StringPtr outputCreatingSubtotals = outPath->StringAppend(new String("outputCreatingSubtotals.xlsx"));

	//Load sample excel file into a workbook object
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(sampleCreatingSubtotals);

	//Get first worksheet of the workbook
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Get the cells collection of the worksheet
	intrusive_ptr<ICells> cells = ws->GetICells();

	//Create cell area covering the cell range B3:C19
	intrusive_ptr<ICellArea> ca = ICellArea::CreateICellArea(new String("B3"), new String("C19"));

	//Create integer array of size 1 and set its first value to 1
	intrusive_ptr<Array1D<int>> totalList = new Array1D<int>(1);
	totalList->SetValue(1, 0);

	//Apply subtotal, the consolidation function is Sum and it will be applied to second column
	cells->Subtotal(ca, 0, ConsolidationFunction_Sum, totalList);

	//Save the workbook in xlsx format
	wb->Save(outputCreatingSubtotals);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreatingSubtotals executed successfully.\r\n\r\n");
}