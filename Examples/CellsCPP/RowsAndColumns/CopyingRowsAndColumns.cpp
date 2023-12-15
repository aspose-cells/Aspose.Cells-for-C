#include "../CellsExamples.h"

//Copying Rows
void CopyingRows()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleCopyingRowsAndColumns = dirPath + "sampleCopyingRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputCopyingRowsAndColumns = outPath + "outputCopyingRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleCopyingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Copy the second row with data, formattings, images and drawing objects to the 16th row in the worksheet.
	worksheet.GetCells().CopyRow(worksheet.GetCells(), 1, 15);

	//Save the Excel file.
	workbook.Save(outputCopyingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("CopyingRows executed successfully.\r\n\r\n");

	
}

//Copying Columns
void CopyingColumns()
{
	
	//Source directory path
	U16String dirPath = "..\\Data\\RowsAndColumns\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleCopyingRowsAndColumns = dirPath + "sampleCopyingRowsAndColumns.xlsx";

	//Path of output excel file
	U16String outputCopyingRowsAndColumns = outPath + "outputCopyingRowsAndColumns.xlsx";

	//Read input excel file
	Workbook workbook(sampleCopyingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Copy the third column to eighth column
	worksheet.GetCells().CopyColumn(worksheet.GetCells(), 2, 7);

	//Save the Excel file.
	workbook.Save(outputCopyingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("CopyingColumns executed successfully.\r\n\r\n");

	
}
