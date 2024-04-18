#include "../CellsExamples.h"

//Accessing Cells Using Cell Name
void AccessingCellsUsingCellName()
{
	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Path of input excel file
	U16String sampleData = dirPath + "sampleData.xlsx";

	//Read input excel file
	Workbook workbook(sampleData);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Get cells from sheet
	Cells cells = worksheet.GetCells();

	//Accessing a cell using its name
	Cell cell = cells.Get("B3");

	//Write string value of the cell on console
	std::cout << "Value of cell B3: ";
	std::cout << cell.GetStringValue().ToUtf8() << std::endl;

	//Show successfull execution message on console
	ShowMessageOnConsole("AccessingCellsUsingCellName executed successfully.\r\n\r\n");
	
}

//Accessing Cells Using Row & Column Index of the Cell
void AccessingCellsUsingRowAndColumnIndexOfTheCell()
{
	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Path of input excel file
	U16String sampleData = dirPath + "sampleData.xlsx";

	//Read input excel file
	Workbook workbook(sampleData);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Get cells from sheet
	Cells cells = worksheet.GetCells();

	// Accessing a cell using its row and column index
	Cell cell = cells.Get(2, 1);

	//Write string value of the cell on console
	std::cout << "Value of cell B3: ";
	std::cout << cell.GetStringValue().ToUtf8() << std::endl;

	//Show successfull execution message on console
	ShowMessageOnConsole("AccessingCellsUsingRowAndColumnIndexOfTheCell executed successfully.\r\n\r\n");
	
}

//Accessing Maximum Display Range of Worksheet
void AccessingMaximumDisplayRangeOfWorksheet()
{

	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Path of input excel file
	U16String sampleData = dirPath + "sampleData.xlsx";

	//Read input excel file
	Workbook workbook(sampleData);

	//Accessing the first worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Get cells from sheet
	Cells cells = worksheet.GetCells();

	//Access the Maximum Display Range
	Range range = cells.GetMaxDisplayRange();

	//Print string value of the cell on console
	std::cout << "Maximum Display Range of Worksheet: ";
	std::cout << range.GetRefersTo().ToUtf8() << std::endl;

	//Show successfull execution message on console
	ShowMessageOnConsole("AccessingMaximumDisplayRangeOfWorksheet executed successfully.\r\n\r\n");
	
}