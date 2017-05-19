#include "../CellsExamples.h"

//Group Rows and Columns of Worksheet
void GroupRowsAndColumnsOfWorksheet()
{
	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of output excel file
	StringPtr outputGroupRowsAndColumnsOfWorksheet = outPath->StringAppend(new String("outputGroupRowsAndColumnsOfWorksheet.xlsx"));

	//Create an empty workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Add worksheet for grouping rows
	intrusive_ptr<IWorksheet> grpRows = wb->GetIWorksheets()->GetObjectByIndex(0);
	grpRows->SetName(new String("GroupRows"));

	//Add worksheet for grouping columns
	int idx = wb->GetIWorksheets()->Add();
	intrusive_ptr<IWorksheet> grpCols = wb->GetIWorksheets()->GetObjectByIndex(idx);
	grpCols->SetName(new String("GroupColumns"));

	//Add sample values in both worksheets
	for (int i = 0; i<50; i++)
	{
		intrusive_ptr<String> str = new String("Text");

		grpRows->GetICells()->GetObjectByIndex(i, 0)->PutValue(str);
		grpCols->GetICells()->GetObjectByIndex(0, i)->PutValue(str);
	}

	//Grouping rows at first level
	grpRows->GetICells()->GroupRows(0, 10);
	grpRows->GetICells()->GroupRows(12, 22);
	grpRows->GetICells()->GroupRows(24, 34);

	//Grouping rows at second level
	grpRows->GetICells()->GroupRows(2, 8);
	grpRows->GetICells()->GroupRows(14, 20);
	grpRows->GetICells()->GroupRows(28, 30);

	//Grouping rows at third level
	grpRows->GetICells()->GroupRows(5, 7);

	//Grouping columns at first level
	grpCols->GetICells()->GroupColumns(0, 10);
	grpCols->GetICells()->GroupColumns(12, 22);
	grpCols->GetICells()->GroupColumns(24, 34);

	//Grouping columns at second level
	grpCols->GetICells()->GroupColumns(2, 8);
	grpCols->GetICells()->GroupColumns(14, 20);
	grpCols->GetICells()->GroupColumns(28, 30);

	//Grouping columns at third level
	grpCols->GetICells()->GroupColumns(5, 7);

	//Save the output excel file
	wb->Save(outputGroupRowsAndColumnsOfWorksheet);

	//Show successfull execution message on console
	ShowMessageOnConsole("GroupRowsAndColumnsOfWorksheet executed successfully.\r\n\r\n");
}