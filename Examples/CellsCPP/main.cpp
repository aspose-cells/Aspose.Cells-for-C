/*The unique head file need to be included*/
#include "Aspose.Cells.h"
#include "CellsExamples.h"

using namespace std;

void ShowMessageOnConsole(char* msg)
{
	StringPtr msgConsole = new String(msg);
	Console::WriteLine(msgConsole);
}

void ShowCellsVersion()
{
	printf("Aspose.Cells for C++ Version: %s\n\n", ICellsHelper::GetVersion()->charValue());
}

int main(int argc, char** argv)
{
	//Show Aspose.Cells for C++ Version
	ShowCellsVersion();
	
	//Developer Guide > Loading, Saving and Converting
	//--------------------------------------------------------------------------------------------------------------------------
	Console::WriteLine(new String("Section: Developer Guide > Loading, Saving and Converting"));
	Console::WriteLine(new String("--------------------------------------------------------------"));
	Console::WriteLine(new String("--------------------------------------------------------------\r\n"));

	//Opening Files
	OpeningExcelFileUsingPath();
	OpeningExcelFileUsingStream();

	//Saving Files
	SavingFiletoSomeLocation();
	SavingFiletoStream();

	//Managing Document Properties
	ManagingDocumentProperties();

	//Read and Write CSV File Format
	ReadAndWriteCSVFileFormat();

	//Read and Write Tab Delimited File Format
	ReadAndWriteTabDelimitedFileFormat();

	//Read and Write XLSB File Format 
	ReadAndWriteXLSBFileFormat();

	//Read and Write XLSM File Format
	ReadAndWriteXLSMFileFormat();

	//Developer Guide > Rows and Columns
	//--------------------------------------------------------------------------------------------------------------------------
	Console::WriteLine(new String("Section: Developer Guide > Rows and Columns"));
	Console::WriteLine(new String("--------------------------------------------------------------"));
	Console::WriteLine(new String("--------------------------------------------------------------\r\n"));
	
	//Adjusting Row Height and Column Width
	//Setting the Height of a Row
	SettingHeightOfRow();

	//Setting the Height of All Rows in a Worksheet
	SettingHeightOfAllRowsInWorksheet();

	//Setting the Width of a Column
	SettingWidthOfColumn();

	//Setting the Width of All Columns in a Worksheet
	SettingWidthOfAllColumnsInWorksheet();

	//Copying Rows and Columns
	//Copying Rows
	CopyingRows();

	//Copying Columns
	CopyingColumns();

	//Grouping, Ungrouping Rows and Columns
	//Grouping Rows & Columns
	GroupingRowsColumns();

	//Ungrouping Rows & Columns
	UnGroupingRowsColumns();

	//Inserting, Deleting Rows and Columns
	//Insert a Row
	InsertRow();

	//Inserting Multiple Rows
	InsertingMultipleRows();

	//Deleting Multiple Rows
	DeletingMultipleRows();

	//Insert a Column
	InsertColumn();

	//Delete a Column
	DeleteColumn();

	//Developer Guide > Data
	//--------------------------------------------------------------------------------------------------------------------------
	Console::WriteLine(new String("Section: Developer Guide > Data"));
	Console::WriteLine(new String("--------------------------------------------------------------"));
	Console::WriteLine(new String("--------------------------------------------------------------\r\n"));

	//Accessing Cells
	//Using Cell Name
	AccessingCellsUsingCellName();

	//Using Row & Column Index of the Cell
	AccessingCellsUsingRowAndColumnIndexOfTheCell();

	//Maximum Display Range of Worksheet
	AccessingMaximumDisplayRangeOfWorksheet();

	//Add and Retrieve Data
	//Adding Data to Cells
	AddingDataToCells();

	//Retrieving Data from Cells
	RetrievingDataFromCells();

	// Stop before exiting
	printf("\n\nProgram Finished. Press any key to exit....");
	getchar();
}
