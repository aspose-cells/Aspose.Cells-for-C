/*The unique head file need to be included*/
#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <io.h>

#include <Windows.h>
#include "Aspose.Cells.h"
#include "CellsExamples.h"

using namespace Aspose::Cells;
using namespace std;

/// <summary>
/// Get file content.
/// </summary>
/// <param name="file">source file</param>
/// <returns>Returns a Vector<uint8_t> object.</returns>
Vector<uint8_t> GetDataFromFile(const U16String& file)
{
	std::string f = file.ToUtf8();
	// open a file 
	std::ifstream fileStream(f, std::ios::binary);

	if (!fileStream.is_open()) {
		std::cerr << "Failed to open the file." << std::endl;
		return 1;
	}

	// Get file size
	fileStream.seekg(0, std::ios::end);
	std::streampos fileSize = fileStream.tellg();
	fileStream.seekg(0, std::ios::beg);

	// Read file contents into uint8_t array
	uint8_t* buffer = new uint8_t[fileSize];
	fileStream.read(reinterpret_cast<char*>(buffer), fileSize);
	fileStream.close();

	Vector<uint8_t>data(buffer, fileSize);
	delete[] buffer;

	return data;
}

void SaveDataToFile(const Vector<uint8_t>& data, const U16String& file)
{
	std::string f = file.ToUtf8();
	// open a file 
	std::ofstream fileStream(f, std::ios::binary);

	if (!fileStream.is_open()) {
		std::cerr << "Failed to open the file." << std::endl;
		return;
	}
	fileStream.write(reinterpret_cast<char*>(data.GetData()), data.GetLength());
	fileStream.close();
}

void SaveDataToFile(const Vector<uint8_t>& data, const char16_t* file)
{
	const U16String f(file);
	SaveDataToFile(data, f);
}

void ShowMessageOnConsole(const char* msg)
{
	std::cout << msg << std::endl;
}

void ShowCellsVersion()
{
	std::cout << "Aspose.Cells for C++ Version: ";
	std::cout << CellsHelper::GetVersion().ToUtf8() << std::endl;
	std::cout << "\n\n";

}


int main(int argc, char** argv)
{
	Aspose::Cells::Startup();

	//Show Aspose.Cells for C++ Version
	ShowCellsVersion();
		

	//Uncomment the one you want to try out

	// Charts
	CreatingAndCustomizingCharts_BubbleChart();//error
	CreatingAndCustomizingCharts_CustomChart();
	CreatingAndCustomizingCharts_LineChart();
	CreatingAndCustomizingCharts_PyramidChart();
	ReadAndManipulateExcel2016Charts();

	// Data
	AccessingCellsUsingCellName();
	AccessingCellsUsingRowAndColumnIndexOfTheCell();
	AccessingMaximumDisplayRangeOfWorksheet();
	AddingDataToCells();
	RetrievingDataFromCells();
	AddHyperlinksToTheCells();
	ApplyConditionalFormattingInWorksheet();
	FormatCellOrRangeOfCells();
	CreateNamedRangeInWorkbook();
	CreatingSubtotals();
	FindOrSearchData();
	ManipulateNamedRangeInWorkbook();
	TracingPrecedents();
	TracingDependents();

	// DrawingObjects
	ExtractingOLEObjectsFromWorksheet();
	InsertingOLEObjectsIntoWorksheet();

	// Formulas
	CalculateWorkbookFormulas();
	AddingFormulasAndCalculatingResults();
	CalculatingFormulasOnceOnly();

	// LoadingSavingAndConverting
	ConvertExcelWorkbookToPDF_A_CompliedFiles();
	ConvertExcelWorkbookToPDF_DirectConversion();
	ConvertExcelWorkbookToPDF_SetPDFCreationTime();
	ConvertingWorksheetToImage_PNG();
	ConvertingWorksheetToImage_SVG();
	ManagingDocumentProperties();
	OpeningExcelFileUsingPath();
	OpeningExcelFileUsingStream();
	ReadAndWriteCSVFileFormat();
	ReadAndWriteTabDelimitedFileFormat();
	ReadAndWriteXLSBFileFormat();
	ReadAndWriteXLSMFileFormat();
	SavingFiletoSomeLocation();
	SavingFiletoStream();

	// PivotTables
	CreatePivotTable();
	ManipulatePivotTable();

	// RowsAndColumns
	SettingHeightOfRow();
	SettingHeightOfAllRowsInWorksheet();
	SettingWidthOfColumn();
	SettingWidthOfAllColumnsInWorksheet();
	CopyingRows();
	CopyingColumns();
	GroupingRowsColumns();
	UnGroupingRowsColumns();
	InsertRow();
	InsertingMultipleRows();
	DeletingMultipleRows();
	InsertColumn();
	DeleteColumn();

	// TechnicalArticles
	ApplyCustomThemeColorsOfWorkbookUsingArrayOfColors();
	CopyThemeFromOneWorkbookToAnother();
	CreateAndManipulateExcelTable();
	GroupRowsAndColumnsOfWorksheet();

	// Worksheets
	CopyWorksheetsWithinWorkbook();
	MoveWorksheetsWithinWorkbook();
	AddingWorksheetsToNewExcelFile();
	AccessingWorksheetsUsingSheetIndex();
	RemovingWorksheetsUsingSheetIndex();
	AddingPageBreaks();
	EnablingPageBreakPreview();
	ZoomFactor();
	FreezePanes();
	SplitPanes();
	RemovingPanes();

	//Stop before exiting
	printf("\nProgram Finished. Press Enter to Exit....");

	Aspose::Cells::Cleanup();
}
