#include "../CellsExamples.h"

//Create and Manipulate Excel Table
void  CreateAndManipulateExcelTable()
{
	

	//Source directory path
	U16String dirPath = "..\\Data\\TechnicalArticles\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleCreateAndManipulateExcelTable = dirPath + "sampleCreateAndManipulateExcelTable.xlsx";

	//Path of output excel file
	U16String outputCreateAndManipulateExcelTable = outPath + "outputCreateAndManipulateExcelTable.xlsx";

	//Load the sample excel file
	Workbook wb(sampleCreateAndManipulateExcelTable);

	//Access first worksheet
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Add table i.e. list object
	int idx = ws.GetListObjects().Add("A1", "H10", true);

	//Access the newly added list object
	ListObject lo = ws.GetListObjects().Get(idx);

	//Use its display methods
	lo.SetShowHeaderRow(true);
	lo.SetShowTableStyleColumnStripes(true);
	lo.SetShowTotals(true);

	//Set its style
	lo.SetTableStyleType(TableStyleType::TableStyleLight12);

	//Set total functions of 3rd, 4th and 5th columns
	lo.GetListColumns().Get(2).SetTotalsCalculation(TotalsCalculation::Min);
	lo.GetListColumns().Get(3).SetTotalsCalculation(TotalsCalculation::Max);
	lo.GetListColumns().Get(4).SetTotalsCalculation(TotalsCalculation::Count);

	//Save the output excel file
	wb.Save(outputCreateAndManipulateExcelTable);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreateAndManipulateExcelTable executed successfully.\r\n\r\n");

	
}
