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

	//Uncomment the one you want to try out

	// Charts
	//CreatingAndCustomizingCharts_BubbleChart();
	//CreatingAndCustomizingCharts_CustomChart();
	//CreatingAndCustomizingCharts_LineChart();
	//CreatingAndCustomizingCharts_PyramidChart();
	//ReadAndManipulateExcel2016Charts();

	// Data
	//AccessingCellsUsingCellName();
	//AccessingCellsUsingRowAndColumnIndexOfTheCell();
	//AccessingMaximumDisplayRangeOfWorksheet();
	//AddingDataToCells();
	//RetrievingDataFromCells();
	//AddHyperlinksToTheCells();
	//ApplyConditionalFormattingInWorksheet();
	//FormatCellOrRangeOfCells();
	//CreateNamedRangeInWorkbook();
	//CreatingSubtotals();
	//FindOrSearchData();
	//ManipulateNamedRangeInWorkbook();
	//TracingPrecedents();
	//TracingDependents();

	// DrawingObjects
	//ExtractingOLEObjectsFromWorksheet();
	//InsertingOLEObjectsIntoWorksheet();

	// Formulas
	//CalculateWorkbookFormulas();
	//UsingICustomFunctionFeature();
	//AddingFormulasAndCalculatingResults();
	//DirectCalculationOfFormula();
	//CalculatingFormulasOnceOnly();

	// LoadingSavingAndConverting
	//ConvertExcelWorkbookToPDF_A_CompliedFiles();
	//ConvertExcelWorkbookToPDF_DirectConversion();
	//ConvertExcelWorkbookToPDF_SetPDFCreationTime();
	//ConvertingWorksheetToImage_PNG();
	//ConvertingWorksheetToImage_SVG();
	//ConvertingWorksheetToImage_TIFF();
	//ManagingDocumentProperties();
	//OpeningExcelFileUsingPath();
	//OpeningExcelFileUsingStream();
	//ReadAndWriteCSVFileFormat();
	//ReadAndWriteTabDelimitedFileFormat();
	//ReadAndWriteXLSBFileFormat();
	//ReadAndWriteXLSMFileFormat();
	//SavingFiletoSomeLocation();
	//SavingFiletoStream();

	// PivotTables
	//CreatePivotTable();
	//ManipulatePivotTable();

	// RowsAndColumns
	//SettingHeightOfRow();
	//SettingHeightOfAllRowsInWorksheet();
	//SettingWidthOfColumn();
	//SettingWidthOfAllColumnsInWorksheet();
	//CopyingRows();
	//CopyingColumns();
	//GroupingRowsColumns();
	//UnGroupingRowsColumns();
	//InsertRow();
	//InsertingMultipleRows();
	//DeletingMultipleRows();
	//InsertColumn();
	//DeleteColumn();

	// TechnicalArticles
	//ApplyCustomThemeColorsOfWorkbookUsingArrayOfColors();
	//CopyThemeFromOneWorkbookToAnother();
	//CreateAndManipulateExcelTable();
	//GroupRowsAndColumnsOfWorksheet();

	// Worksheets
	//CopyWorksheetsWithinWorkbook();
	//MoveWorksheetsWithinWorkbook();
	//AddingWorksheetsToNewExcelFile();
	//AccessingWorksheetsUsingSheetIndex();
	//RemovingWorksheetsUsingSheetIndex();
	//AddingPageBreaks();
	//EnablingPageBreakPreview();
	//ZoomFactor();
	//FreezePanes();
	//SplitPanes();
	//RemovingPanes();

	//Stop before exiting
	printf("\nProgram Finished. Press Enter to Exit....");
	getchar();
}
