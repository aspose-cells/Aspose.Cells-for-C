#include "../CellsExamples.h"

//Creating Subtotals
void CreatingSubtotals()
{
	
	//Source directory path
	U16String dirPath ="..\\Data\\Data\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleCreatingSubtotals = dirPath + "sampleCreatingSubtotals.xlsx";

	//Path of output excel file
	U16String outputCreatingSubtotals = outPath + "outputCreatingSubtotals.xlsx";

	//Load sample excel file into a workbook object
	Workbook wb(sampleCreatingSubtotals);

	//Get first worksheet of the workbook
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Get the cells collection of the worksheet
	Cells cells = ws.GetCells();

	//Create cell area covering the cell range B3:C19
	CellArea ca = CellArea::CreateCellArea(u"B3", u"C19");

	//Create integer array of size 1 and set its first value to 1
	Vector<int> totalList(1);
	totalList[0] = 1;

	//Apply subtotal, the consolidation function is Sum and it will be applied to second column
	cells.Subtotal(ca, 0, ConsolidationFunction::Sum, totalList);

	//Save the workbook in xlsx format
	wb.Save(outputCreatingSubtotals);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreatingSubtotals executed successfully.\r\n\r\n");

	
}