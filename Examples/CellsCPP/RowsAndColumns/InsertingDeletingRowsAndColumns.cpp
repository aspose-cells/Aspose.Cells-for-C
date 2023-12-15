#include "../CellsExamples.h"

//Insert a Row
void InsertRow()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleInsertingDeletingRowsAndColumns = dirPath + "sampleInsertingDeletingRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputInsertingDeletingRowsAndColumns = outPath + "outputInsertingDeletingRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleInsertingDeletingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Inserting a row into the worksheet at 3rd position
	worksheet.GetCells().InsertRow(2);

	//Save the Excel file.
	workbook.Save(outputInsertingDeletingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("InsertRow executed successfully.\r\n\r\n");
	
}

//Inserting Multiple Rows
void InsertingMultipleRows()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleInsertingDeletingRowsAndColumns = dirPath + "sampleInsertingDeletingRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputInsertingDeletingRowsAndColumns = outPath + "outputInsertingDeletingRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleInsertingDeletingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Inserting 10 rows into the worksheet starting from 3rd row
	worksheet.GetCells().InsertRows(2, 10);

	//Save the Excel file.
	workbook.Save(outputInsertingDeletingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("InsertingMultipleRows executed successfully.\r\n\r\n");
	
}

//Deleting Multiple Rows
void DeletingMultipleRows()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleInsertingDeletingRowsAndColumns = dirPath + "sampleInsertingDeletingRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputInsertingDeletingRowsAndColumns = outPath + "outputInsertingDeletingRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleInsertingDeletingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Deleting 10 rows from the worksheet starting from 3rd row
	worksheet.GetCells().DeleteRows(2, 10);

	//Save the Excel file.
	workbook.Save(outputInsertingDeletingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("DeletingMultipleRows executed successfully.\r\n\r\n");
	
}

//Insert a Column
void InsertColumn()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleInsertingDeletingRowsAndColumns = dirPath + "sampleInsertingDeletingRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputInsertingDeletingRowsAndColumns = outPath + "outputInsertingDeletingRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleInsertingDeletingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Inserting a column into the worksheet at 2nd position
	worksheet.GetCells().InsertColumn(1);

	//Save the Excel file.
	workbook.Save(outputInsertingDeletingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("InsertColumn executed successfully.\r\n\r\n");
	
}

//Delete a Column
void DeleteColumn()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleDeleteColumn = dirPath + "sampleInsertingDeletingRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputDeleteColumn = outPath + "outputInsertingDeletingRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleDeleteColumn);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Deleting a column from the worksheet at 2nd position
	worksheet.GetCells().DeleteColumn(4);

	//Save the Excel file.
	workbook.Save(outputDeleteColumn);

	//Show successfull execution message on console
	ShowMessageOnConsole("DeleteColumn executed successfully.\r\n\r\n");
	
}
