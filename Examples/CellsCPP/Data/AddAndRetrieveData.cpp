#include "../CellsExamples.h"

//Adding Data to Cells
void AddingDataToCells()
{
	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of input excel file
	U16String sampleData = dirPath + "sampleData.xlsx";

	//Path of output excel file
	U16String outputData = outPath + "outputData.xlsx";

	//Read input excel file
	Workbook workbook(sampleData);

	//Accessing the second worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(1);

	//Adding a string value to the cell
	worksheet.GetCells().Get("A1").PutValue("Hello World");

	//Adding a double value to the cell
	worksheet.GetCells().Get("A2").PutValue(20.5);

	//Adding an integer value to the cell
	worksheet.GetCells().Get("A3").PutValue(15);

	//Adding a boolean value to the cell
	worksheet.GetCells().Get("A4").PutValue(true);

	//Setting the display format of the date
	Cell cell = worksheet.GetCells().Get("A5");
	Style style = cell.GetStyle();
	style.SetNumber(15);
	cell.SetStyle(style);

	//Save the workbook
	workbook.Save(outputData);

	//Show successfull execution message on console
	ShowMessageOnConsole("AddingDataToCells executed successfully.\r\n\r\n");

}

//Retrieving Data from Cells
void RetrievingDataFromCells()
{
	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Path of input excel file
	U16String sampleData = dirPath + "sampleData.xlsx";

	//Read input excel file
	Workbook workbook(sampleData);

	//Accessing the third worksheet in the Excel file
	Worksheet worksheet = workbook.GetWorksheets().Get(2);

	//Get cells from sheet
	Cells cells = worksheet.GetCells();

	//Variable declarations
	U16String strVal;
	Date dateVal;
	double dblVal;
	bool boolVal;

	Enumerator<Cell> enCell = cells.GetEnumerator();
	while (enCell.MoveNext())
	{
		Cell cell = enCell.GetCurrent();
		switch (cell.GetType())
		{
			//Evaluating the data type of the cell data for string value
		case CellValueType::IsString:
			std::cout << "Cell Value Type Is String." << std::endl;
			strVal = cell.GetStringValue();
			break;
			//Evaluating the data type of the cell data for double value
		case CellValueType::IsNumeric:
			std::cout << "Cell Value Type Is Numeric." << std::endl;
			dblVal = cell.GetDoubleValue();
			break;
			//Evaluating the data type of the cell data for boolean value
		case CellValueType::IsBool:
			std::cout << "Cell Value Type Is Bool." << std::endl;
			boolVal = cell.GetBoolValue();
			break;
			//Evaluating the data type of the cell data for date/time value
		case CellValueType::IsDateTime:
			std::cout << "Cell Value Type Is DateTime." << std::endl;
			dateVal = cell.GetDateTimeValue();
			break;
			//Evaluating the unknown data type of the cell data
		case CellValueType::IsUnknown:
			cell.GetStringValue();
			break;
		default:
			break;
		}
	}

	//Show successfull execution message on console
	ShowMessageOnConsole("RetrievingDataFromCells executed successfully.\r\n\r\n");

}