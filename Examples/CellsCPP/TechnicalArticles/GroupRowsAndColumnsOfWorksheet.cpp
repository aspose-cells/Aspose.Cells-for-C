#include "../CellsExamples.h"

//Group Rows and Columns of Worksheet
void GroupRowsAndColumnsOfWorksheet()
{
	

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of output excel file
	U16String outputGroupRowsAndColumnsOfWorksheet = outPath + "outputGroupRowsAndColumnsOfWorksheet.xlsx";

	//Create an empty workbook
	Workbook wb;

	//Add worksheet for grouping rows
	Worksheet grpRows = wb.GetWorksheets().Get(0);
	grpRows.SetName("GroupRows");

	//Add worksheet for grouping columns
	int idx = wb.GetWorksheets().Add();
	Worksheet grpCols = wb.GetWorksheets().Get(idx);
	grpCols.SetName("GroupColumns");

	//Add sample values in both worksheets
	for (int i = 0; i<50; i++)
	{
		U16String str = "Text";

		grpRows.GetCells().Get(i, 0).PutValue(str);
		grpCols.GetCells().Get(0, i).PutValue(str);
	}

	//Grouping rows at first level
	grpRows.GetCells().GroupRows(0, 10);
	grpRows.GetCells().GroupRows(12, 22);
	grpRows.GetCells().GroupRows(24, 34);

	//Grouping rows at second level
	grpRows.GetCells().GroupRows(2, 8);
	grpRows.GetCells().GroupRows(14, 20);
	grpRows.GetCells().GroupRows(28, 30);

	//Grouping rows at third level
	grpRows.GetCells().GroupRows(5, 7);

	//Grouping columns at first level
	grpCols.GetCells().GroupColumns(0, 10);
	grpCols.GetCells().GroupColumns(12, 22);
	grpCols.GetCells().GroupColumns(24, 34);

	//Grouping columns at second level
	grpCols.GetCells().GroupColumns(2, 8);
	grpCols.GetCells().GroupColumns(14, 20);
	grpCols.GetCells().GroupColumns(28, 30);

	//Grouping columns at third level
	grpCols.GetCells().GroupColumns(5, 7);

	//Save the output excel file
	wb.Save(outputGroupRowsAndColumnsOfWorksheet);

	//Show successfull execution message on console
	ShowMessageOnConsole("GroupRowsAndColumnsOfWorksheet executed successfully.\r\n\r\n");

	
}