#include "../CellsExamples.h"

//Grouping Rows & Columns
void GroupingRowsColumns()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleGroupingUngroupingRowsAndColumns = dirPath + "sampleGroupingUngroupingRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputGroupingUngroupingRowsAndColumns = outPath + "outputGroupingUngroupingRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleGroupingUngroupingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Grouping first seven rows and first four columns
	worksheet.GetCells().GroupRows(0, 6, true);
	worksheet.GetCells().GroupColumns(0, 3, true);

	//Save the Excel file.
	workbook.Save(outputGroupingUngroupingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("GroupingRowsColumns executed successfully.\r\n\r\n");

	
}

//Ungrouping Rows & Columns
void UnGroupingRowsColumns()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleGroupingUngroupingRowsAndColumns = dirPath + "sampleGroupingUngroupingRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputGroupingUngroupingRowsAndColumns = outPath + "outputGroupingUngroupingRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleGroupingUngroupingRowsAndColumns);

	//Accessing the second worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(1);

	//UnGroup first seven rows and first four columns
	worksheet.GetCells().UngroupRows(0, 6);
	worksheet.GetCells().UngroupColumns(0, 3);

	//Save the Excel file.
	workbook.Save(outputGroupingUngroupingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("UnGroupingRowsColumns executed successfully.\r\n\r\n");

	
}
