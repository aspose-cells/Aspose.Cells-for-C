#include "../CellsExamples.h"

//Copying Rows
void CopyingRows()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleCopyingRowsAndColumns = dirPath->StringAppend(new String("sampleCopyingRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputCopyingRowsAndColumns = outPath->StringAppend(new String("outputCopyingRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleCopyingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Copy the second row with data, formattings, images and drawing objects to the 16th row in the worksheet.
	worksheet->GetICells()->CopyIRow(worksheet->GetICells(), 1, 15);

	//Save the Excel file.
	workbook->Save(outputCopyingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("CopyingRows executed successfully.\r\n\r\n");
}

//Copying Columns
void CopyingColumns()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\RowsAndColumns\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleCopyingRowsAndColumns = dirPath->StringAppend(new String("sampleCopyingRowsAndColumns.xlsx"));

	//Path of output excel file
	StringPtr outputCopyingRowsAndColumns = outPath->StringAppend(new String("outputCopyingRowsAndColumns.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleCopyingRowsAndColumns);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Copy the third column to eighth column
	worksheet->GetICells()->CopyIColumn(worksheet->GetICells(), 2, 7);

	//Save the Excel file.
	workbook->Save(outputCopyingRowsAndColumns);

	//Show successfull execution message on console
	ShowMessageOnConsole("CopyingColumns executed successfully.\r\n\r\n");
}
