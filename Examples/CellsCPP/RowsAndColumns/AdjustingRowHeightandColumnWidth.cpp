#include "../CellsExamples.h"

//Setting the Height of a Row
void SettingHeightOfRow()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleRowsAndColumns = dirPath + "sampleRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputRowsAndColumns = outPath + "outputRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Setting the height of the second row to 35
	worksheet.GetCells().SetRowHeight(1, 35);

	//Save the Excel file.
	workbook.Save(outputRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("SettingHeightOfRow executed successfully.\r\n\r\n");

	
}

//Setting the Height of All Rows in a Worksheet
void SettingHeightOfAllRowsInWorksheet()
{
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleRowsAndColumns = dirPath + "sampleRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputRowsAndColumns = outPath + "outputRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Setting the height of all rows in the worksheet to 25
	worksheet.GetCells().SetStandardHeight(25);

	//Save the Excel file.
	workbook.Save(outputRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("SettingHeightOfAllRowsInWorksheet executed successfully.\r\n\r\n");
	
}

//Setting the Width of a Column
void SettingWidthOfColumn()
{
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleRowsAndColumns = dirPath + "sampleRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputRowsAndColumns = outPath + "outputRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Setting the width of the second column to 56.5
	worksheet.GetCells().SetColumnWidth(1, 56.5);

	//Save the Excel file.
	workbook.Save(outputRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("SettingWidthOfColumn executed successfully.\r\n\r\n");

	
}

//Setting the Width of All Columns in a Worksheet
void SettingWidthOfAllColumnsInWorksheet()
{
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleRowsAndColumns = dirPath + "sampleRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputRowsAndColumns = outPath + "outputRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Setting the width of all columns in the worksheet to 20.5
	worksheet.GetCells().SetStandardWidth(20.5);

	//Save the Excel file.
	workbook.Save(outputRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("SettingWidthOfAllColumnsInWorksheet executed successfully.\r\n\r\n");

	
}
