#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <io.h>

#include <Windows.h>
#include "Aspose.Cells.h"
#include <algorithm>
#include <chrono>

using namespace Aspose::Cells;
using namespace std;

Vector<uint8_t> GetDataFromFile(const U16String& file);

void SaveDataToFile(const Vector<uint8_t>& data, const U16String& file);

void SaveDataToFile(const Vector<uint8_t>& data, const char16_t* file);

//Utility method to show message on console like printf
void ShowMessageOnConsole(const char* msg);

//Developer Guide > Loading, Saving and Converting
//Opening Files
void OpeningExcelFileUsingPath();
void OpeningExcelFileUsingStream();

//Saving Files
void SavingFiletoSomeLocation();
void SavingFiletoStream();

//Managing Document Properties
void ManagingDocumentProperties();

//Read and Write CSV File Format
void ReadAndWriteCSVFileFormat();

//Read and Write Tab Delimited File Format
void ReadAndWriteTabDelimitedFileFormat();

//Read and Write XLSB File Format 
void ReadAndWriteXLSBFileFormat();

//Read and Write XLSM File Format
void ReadAndWriteXLSMFileFormat();

//Developer Guide > Rows and Columns
//Adjusting Row Height and Column Width
//Setting the Height of a Row
void SettingHeightOfRow();

//Setting the Height of All Rows in a Worksheet
void SettingHeightOfAllRowsInWorksheet();

//Setting the Width of a Column
void SettingWidthOfColumn();

//Setting the Width of All Columns in a Worksheet
void SettingWidthOfAllColumnsInWorksheet();

//Copying Rows and Columns
//Copying Rows
void CopyingRows();

//Copying Columns
void CopyingColumns();

//Grouping, Ungrouping Rows and Columns
//Grouping Rows & Columns
void GroupingRowsColumns();

//Ungrouping Rows & Columns
void UnGroupingRowsColumns();

//Inserting, Deleting Rows and Columns
//Insert a Row
void InsertRow();

//Inserting Multiple Rows
void InsertingMultipleRows();

//Deleting Multiple Rows
void DeletingMultipleRows();

//Insert a Column
void InsertColumn();

//Delete a Column
void DeleteColumn();

//Developer Guide > Data
//Accessing Cells
//Using Cell Name
void AccessingCellsUsingCellName();

//Using Row & Column Index of the Cell
void AccessingCellsUsingRowAndColumnIndexOfTheCell();

//Maximum Display Range of Worksheet
void AccessingMaximumDisplayRangeOfWorksheet();

//Add and Retrieve Data
//Adding Data to Cells
void AddingDataToCells();

//Retrieving Data from Cells
void RetrievingDataFromCells();

//Add Hyperlinks to the Cells 
void AddingDataToCells();

//Add Hyperlinks to the Cells
void AddHyperlinksToTheCells();

//Apply Conditional Formatting in Worksheet
void ApplyConditionalFormattingInWorksheet();

//Format Cell or Range of Cells
void FormatCellOrRangeOfCells();

//Create Named Range in a Workbook
void CreateNamedRangeInWorkbook();

//Create Named Range in a Workbook 
void CreateNamedRangeInWorkbook();

//Creating Subtotals
void CreatingSubtotals();

//Find or Search Data 
void  FindOrSearchData();

//Manipulate Named Range in a Workbook
void  ManipulateNamedRangeInWorkbook();

//Calculate Workbook Formulas
void  CalculateWorkbookFormulas();

//Adding Formulas & Calculating Results
void  AddingFormulasAndCalculatingResults();

//Calculating Formulas Once Only
void CalculatingFormulasOnceOnly();

//Create Pivot Table
void  CreatePivotTable();

//Manipulate Pivot Table 
void ManipulatePivotTable();

//Apply Custom Theme Colors of the Workbook using Array of Colors 
void ApplyCustomThemeColorsOfWorkbookUsingArrayOfColors();

//Copy Theme from one Workbook to Another
void CopyThemeFromOneWorkbookToAnother();

//Create and Manipulate Excel Table
void  CreateAndManipulateExcelTable();

//Group Rows and Columns of Worksheet
void GroupRowsAndColumnsOfWorksheet();

//Tracing Precedents
void TracingPrecedents();

//Tracing Dependents
void TracingDependents();

//Copy Worksheets within a Workbook
void CopyWorksheetsWithinWorkbook();

//Move Worksheets within Workbook
void MoveWorksheetsWithinWorkbook();

//Adding Worksheets to a New Excel File
void AddingWorksheetsToNewExcelFile();

//Accessing Worksheets using Sheet Index
void AccessingWorksheetsUsingSheetIndex();

//Removing Worksheets using Sheet Index
void RemovingWorksheetsUsingSheetIndex();

//Adding Page Breaks
void AddingPageBreaks();

//Enabling Page Break Preview
void EnablingPageBreakPreview();

//Zoom Factor
void ZoomFactor();

//Freeze Panes
void FreezePanes();

//Split Panes
void SplitPanes();

//Removing Panes
void RemovingPanes();

//Read and Manipulate Excel 2016 Charts
void ReadAndManipulateExcel2016Charts();

//Creating and Customizing Charts - Bubble Chart
void CreatingAndCustomizingCharts_BubbleChart();

//Creating and Customizing Charts - Custom Chart
void CreatingAndCustomizingCharts_CustomChart();

//Creating and Customizing Charts - Line Chart
void CreatingAndCustomizingCharts_LineChart();

//Creating and Customizing Charts - Pyramid Chart
void CreatingAndCustomizingCharts_PyramidChart();

//Extracting OLE Objects from Worksheet
void ExtractingOLEObjectsFromWorksheet();

//Inserting OLE Objects into Worksheet
void InsertingOLEObjectsIntoWorksheet();

//Convert Excel Workbook To PDF/A Complied Files
void ConvertExcelWorkbookToPDF_A_CompliedFiles();

//Convert Excel Workbook To PDF - Direct Conversion
void ConvertExcelWorkbookToPDF_DirectConversion();

//Convert Excel Workbook To PDF - Set PDF Creation Time
void ConvertExcelWorkbookToPDF_SetPDFCreationTime();

//Converting Worksheet To Image - PNG
void ConvertingWorksheetToImage_PNG();

//Converting Worksheet To Image - SVG
void ConvertingWorksheetToImage_SVG();

