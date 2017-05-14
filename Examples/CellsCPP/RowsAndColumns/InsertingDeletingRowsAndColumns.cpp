#include "../CellsExamples.h"

//Insert a Row
void InsertRow()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleInsertingDeletingRowsAndColumns = dirPath->StringAppend(new String("sampleInsertingDeletingRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputInsertingDeletingRowsAndColumns = outPath->StringAppend(new String("outputInsertingDeletingRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleInsertingDeletingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Inserting a row into the worksheet at 3rd position
	worksheet->GetICells()->InsertRow(2);

	//Save the Excel file.
	workbook->Save(outputInsertingDeletingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("InsertRow executed successfully.\r\n\r\n");
}

//Inserting Multiple Rows
void InsertingMultipleRows()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleInsertingDeletingRowsAndColumns = dirPath->StringAppend(new String("sampleInsertingDeletingRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputInsertingDeletingRowsAndColumns = outPath->StringAppend(new String("outputInsertingDeletingRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleInsertingDeletingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Inserting 10 rows into the worksheet starting from 3rd row
	worksheet->GetICells()->InsertRows(2, 10);

	//Save the Excel file.
	workbook->Save(outputInsertingDeletingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("InsertingMultipleRows executed successfully.\r\n\r\n");
}

//Deleting Multiple Rows
void DeletingMultipleRows()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleInsertingDeletingRowsAndColumns = dirPath->StringAppend(new String("sampleInsertingDeletingRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputInsertingDeletingRowsAndColumns = outPath->StringAppend(new String("outputInsertingDeletingRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleInsertingDeletingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Deleting 10 rows from the worksheet starting from 3rd row
	worksheet->GetICells()->DeleteRows(2, 10);

	//Save the Excel file.
	workbook->Save(outputInsertingDeletingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("DeletingMultipleRows executed successfully.\r\n\r\n");
}

//Insert a Column
void InsertColumn()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleInsertingDeletingRowsAndColumns = dirPath->StringAppend(new String("sampleInsertingDeletingRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputInsertingDeletingRowsAndColumns = outPath->StringAppend(new String("outputInsertingDeletingRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleInsertingDeletingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Inserting a column into the worksheet at 2nd position
	worksheet->GetICells()->InsertColumn(1);

	//Save the Excel file.
	workbook->Save(outputInsertingDeletingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("InsertColumn executed successfully.\r\n\r\n");
}

//Delete a Column
void DeleteColumn()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleDeleteColumn = dirPath->StringAppend(new String("sampleInsertingDeletingRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputDeleteColumn = outPath->StringAppend(new String("outputInsertingDeletingRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleDeleteColumn);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Deleting a column from the worksheet at 2nd position
	worksheet->GetICells()->DeleteColumn(4);

	//Save the Excel file.
	workbook->Save(outputDeleteColumn);

	//Show successfull execution message on console
	ShowMessageOnConsole("DeleteColumn executed successfully.\r\n\r\n");
}
