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

	ReadAndManipulateExcel2016Charts();

	//Console::WriteLine(new String("<<-------Formulas------->>\n"));

	//Calculate Workbook Formulas
	//CalculateWorkbookFormulas();

	//Using ICustomFunction Feature
	//UsingICustomFunctionFeature();

	//Adding Formulas & Calculating Results
	//AddingFormulasAndCalculatingResults();

	//Direct Calculation of Formula
	//DirectCalculationOfFormula();

	//Calculating Formulas Once Only
	//CalculatingFormulasOnceOnly();
	
	//Developer Guide > Loading, Saving and Converting
	//--------------------------------------------------------------------------------------------------------------------------
	//Console::WriteLine(new String("Section: Developer Guide > Loading, Saving and Converting"));
	//Console::WriteLine(new String("--------------------------------------------------------------"));
	//Console::WriteLine(new String("--------------------------------------------------------------\r\n"));

	//Opening Files
	//OpeningExcelFileUsingPath();
	//OpeningExcelFileUsingStream();

	//Saving Files
	//SavingFiletoSomeLocation();
	//SavingFiletoStream();

	//Managing Document Properties
	//ManagingDocumentProperties();

	//Read and Write CSV File Format
	//ReadAndWriteCSVFileFormat();

	//Read and Write Tab Delimited File Format
	//ReadAndWriteTabDelimitedFileFormat();

	//Read and Write XLSB File Format 
	//ReadAndWriteXLSBFileFormat();

	//Read and Write XLSM File Format
	//ReadAndWriteXLSMFileFormat();


	//Developer Guide > Rows and Columns
	//--------------------------------------------------------------------------------------------------------------------------
	//Console::WriteLine(new String("Section: Developer Guide > Rows and Columns"));
	//Console::WriteLine(new String("--------------------------------------------------------------"));
	//Console::WriteLine(new String("--------------------------------------------------------------\r\n"));
	
	//Adjusting Row Height and Column Width
	//Setting the Height of a Row
	//SettingHeightOfRow();

	//Setting the Height of All Rows in a Worksheet
	//SettingHeightOfAllRowsInWorksheet();

	//Setting the Width of a Column
	//SettingWidthOfColumn();

	//Setting the Width of All Columns in a Worksheet
	//SettingWidthOfAllColumnsInWorksheet();

	//Copying Rows and Columns
	//Copying Rows
	//CopyingRows();

	//Copying Columns
	//CopyingColumns();

	//Grouping, Ungrouping Rows and Columns
	//Grouping Rows & Columns
	//GroupingRowsColumns();

	//Ungrouping Rows & Columns
	//UnGroupingRowsColumns();

	//Inserting, Deleting Rows and Columns
	//Insert a Row
	//InsertRow();

	//Inserting Multiple Rows
	//InsertingMultipleRows();

	//Deleting Multiple Rows
	//DeletingMultipleRows();

	//Insert a Column
	//InsertColumn();

	//Delete a Column
	//DeleteColumn();

	//Developer Guide > Data
	//--------------------------------------------------------------------------------------------------------------------------
	//Console::WriteLine(new String("Section: Developer Guide > Data"));
	//Console::WriteLine(new String("--------------------------------------------------------------"));
	//Console::WriteLine(new String("--------------------------------------------------------------\r\n"));

	//Accessing Cells
	//Using Cell Name
	//AccessingCellsUsingCellName();

	//Using Row & Column Index of the Cell
	//AccessingCellsUsingRowAndColumnIndexOfTheCell();

	//Maximum Display Range of Worksheet
	//AccessingMaximumDisplayRangeOfWorksheet();

	//Add and Retrieve Data
	//Adding Data to Cells
	//AddingDataToCells();

	//Retrieving Data from Cells
	//RetrievingDataFromCells();

	//Add Hyperlinks to the Cells
	//AddHyperlinksToTheCells();

	//Apply Conditional Formatting in Worksheet
	//ApplyConditionalFormattingInWorksheet();

	//Format Cell or Range of Cells
	//FormatCellOrRangeOfCells();

	//Create Named Range in a Workbook 
	//CreateNamedRangeInWorkbook();

	//Creating Subtotals
	//CreatingSubtotals();

	//Find or Search Data 
	//FindOrSearchData();

	//Manipulate Named Range in a Workbook
	//ManipulateNamedRangeInWorkbook();

	//Create Pivot Table
	//CreatePivotTable();

	//Manipulate Pivot Table 
	//ManipulatePivotTable();

	//Apply Custom Theme Colors of the Workbook using Array of Colors 
	//ApplyCustomThemeColorsOfWorkbookUsingArrayOfColors();

	//Copy Theme from one Workbook to Another
	//CopyThemeFromOneWorkbookToAnother();

	//Create and Manipulate Excel Table
	//CreateAndManipulateExcelTable();

	//Group Rows and Columns of Worksheet
	//GroupRowsAndColumnsOfWorksheet();

	//CopyWorksheetsWithinWorkbook();
	//MoveWorksheetsWithinWorkbook();

	//AccessingWorksheetsUsingSheetIndex();
	//RemovingWorksheetsUsingSheetIndex();
	//AddingPageBreaks();

	//EnablingPageBreakPreview();
	//ZoomFactor();
	//FreezePanes();
	//SplitPanes();
	//RemovingPanes();

	//Stop before exiting
	printf("\nProgram Finished. Press any key to exit....");
	getchar();
}
