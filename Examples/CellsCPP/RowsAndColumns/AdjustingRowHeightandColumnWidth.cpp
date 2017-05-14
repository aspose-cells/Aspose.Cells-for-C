#include "../CellsExamples.h"

//Setting the Height of a Row
void SettingHeightOfRow()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleRowsAndColumns = dirPath->StringAppend(new String("sampleRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputRowsAndColumns = outPath->StringAppend(new String("outputRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Setting the height of the second row to 35
	worksheet->GetICells()->SetRowHeight(1, 35);

	//Save the Excel file.
	workbook->Save(outputRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("SettingHeightOfRow executed successfully.\r\n\r\n");
}

//Setting the Height of All Rows in a Worksheet
void SettingHeightOfAllRowsInWorksheet()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleRowsAndColumns = dirPath->StringAppend(new String("sampleRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputRowsAndColumns = outPath->StringAppend(new String("outputRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Setting the height of all rows in the worksheet to 25
	worksheet->GetICells()->SetStandardHeight(25);

	//Save the Excel file.
	workbook->Save(outputRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("SettingHeightOfAllRowsInWorksheet executed successfully.\r\n\r\n");
}

//Setting the Width of a Column
void SettingWidthOfColumn()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleRowsAndColumns = dirPath->StringAppend(new String("sampleRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputRowsAndColumns = outPath->StringAppend(new String("outputRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Setting the width of the second column to 56.5
	worksheet->GetICells()->SetColumnWidth(1, 56.5);

	//Save the Excel file.
	workbook->Save(outputRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("SettingWidthOfColumn executed successfully.\r\n\r\n");
}

//Setting the Width of All Columns in a Worksheet
void SettingWidthOfAllColumnsInWorksheet()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleRowsAndColumns = dirPath->StringAppend(new String("sampleRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputRowsAndColumns = outPath->StringAppend(new String("outputRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Setting the width of all columns in the worksheet to 20.5
	worksheet->GetICells()->SetStandardWidth(20.5);

	//Save the Excel file.
	workbook->Save(outputRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("SettingWidthOfAllColumnsInWorksheet executed successfully.\r\n\r\n");
}
