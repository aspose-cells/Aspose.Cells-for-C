#include "../CellsExamples.h"

//Grouping Rows & Columns
void GroupingRowsColumns()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleGroupingUngroupingRowsAndColumns = dirPath->StringAppend(new String("sampleGroupingUngroupingRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputGroupingUngroupingRowsAndColumns = outPath->StringAppend(new String("outputGroupingUngroupingRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleGroupingUngroupingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Grouping first seven rows and first four columns
	worksheet->GetICells()->GroupRows(0, 6, true);
	worksheet->GetICells()->GroupColumns(0, 3, true);

	//Save the Excel file.
	workbook->Save(outputGroupingUngroupingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("GroupingRowsColumns executed successfully.\r\n\r\n");
}

//Ungrouping Rows & Columns
void UnGroupingRowsColumns()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleGroupingUngroupingRowsAndColumns = dirPath->StringAppend(new String("sampleGroupingUngroupingRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputGroupingUngroupingRowsAndColumns = outPath->StringAppend(new String("outputGroupingUngroupingRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleGroupingUngroupingRowsAndColumns);

	//Accessing the second worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(1);

	//UnGroup first seven rows and first four columns
	worksheet->GetICells()->UngroupRows(0, 6);
	worksheet->GetICells()->UngroupColumns(0, 3);

	//Save the Excel file.
	workbook->Save(outputGroupingUngroupingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("UnGroupingRowsColumns executed successfully.\r\n\r\n");
}
