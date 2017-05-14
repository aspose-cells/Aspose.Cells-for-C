#include "../CellsExamples.h"

//Accessing Cells Using Cell Name
void AccessingCellsUsingCellName()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Path of input excel file
	StringPtr sampleData = dirPath->StringAppend(new String("sampleData.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleData);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Get cells from sheet
	intrusive_ptr<ICells> cells = worksheet->GetICells();

	//Accessing a cell using its name
	intrusive_ptr<ICell> cell = cells->GetObjectByIndex(new String("B3"));

	//Write string value of the cell on console
	Console::Write(new String("Value of cell B3: "));
	Console::WriteLine(cell->GetStringValue());

	//Show successfull execution message on console
	ShowMessageOnConsole("AccessingCellsUsingCellName executed successfully.\r\n\r\n");
}

//Accessing Cells Using Row & Column Index of the Cell
void AccessingCellsUsingRowAndColumnIndexOfTheCell()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Path of input excel file
	StringPtr sampleData = dirPath->StringAppend(new String("sampleData.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleData);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Get cells from sheet
	intrusive_ptr<ICells> cells = worksheet->GetICells();

	// Accessing a cell using its row and column index
	intrusive_ptr<ICell> cell = cells->GetObjectByIndex(2, 1);

	//Write string value of the cell on console
	Console::Write(new String("Value of cell B3: "));
	Console::WriteLine(cell->GetStringValue());

	//Show successfull execution message on console
	ShowMessageOnConsole("AccessingCellsUsingRowAndColumnIndexOfTheCell executed successfully.\r\n\r\n");
}

//Accessing Maximum Display Range of Worksheet
void AccessingMaximumDisplayRangeOfWorksheet()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Path of input excel file
	StringPtr sampleData = dirPath->StringAppend(new String("sampleData.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleData);

	//Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Get cells from sheet
	intrusive_ptr<ICells> cells = worksheet->GetICells();

	//Access the Maximum Display Range
	intrusive_ptr<IRange> range = cells->GetMaxDisplayIRange();

	//Print string value of the cell on console
	Console::Write(new String("Maximum Display Range of Worksheet: "));
	Console::WriteLine(range->GetRefersTo());

	//Show successfull execution message on console
	ShowMessageOnConsole("AccessingMaximumDisplayRangeOfWorksheet executed successfully.\r\n\r\n");
}