#include "../CellsExamples.h"

//Tracing Precedents
void TracingPrecedents()
{
	

	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Path of input excel file
	U16String samplePrecedentsAndDependents = dirPath + "samplePrecedentsAndDependents.xlsx";

	//Load source Excel file
	Workbook  workbook(samplePrecedentsAndDependents);

	//Calculate workbook formula
	workbook.CalculateFormula();
	
	//Access first worksheet
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Access cell F6
	Cell cell = worksheet.GetCells().Get("F6");

	//Get precedents of the cells and print them on console
	std::cout << "Printing Precedents of Cell: ";
	std::cout << cell.GetName().ToUtf8() << std::endl;
	std::cout << "" << std::endl;
	std::cout << "-------------------------------" << std::endl;

	ReferredAreaCollection refac = cell.GetPrecedents();
	
	int count = refac.GetCount();

	for (int i = 0; i < count; i++)
	{
		ReferredArea refa = refac.Get(i);

		int row = refa.GetStartRow();
		int col = refa.GetStartColumn();

		cell = worksheet.GetCells().Get(row, col);
		std::cout << cell.GetName().ToUtf8() << std::endl;
	}

	std::cout << std::endl;

	//Show successfull execution message on console
	ShowMessageOnConsole("TracingPrecedents executed successfully.\r\n\r\n");

	
}

//Tracing Dependents
void TracingDependents()
{
	

	//Source directory path
	U16String dirPath = "..\\Data\\Data\\";

	//Path of input excel file
	U16String samplePrecedentsAndDependents = dirPath + "samplePrecedentsAndDependents.xlsx";

	//Load source Excel file
	Workbook  workbook(samplePrecedentsAndDependents);

	//Calculate workbook formula
	workbook.CalculateFormula();

	//Access first worksheet
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Access cell F6
	Cell cell = worksheet.GetCells().Get("F6");

	//Get dependents of the cells and print them on console
	std::cout << "Printing Dependents of Cell: ";
	std::cout << cell.GetName().ToUtf8() << std::endl;
	std::cout << "" << std::endl;
	std::cout << "-------------------------------" << std::endl;

	//Parameter false means we do not want to search other sheets
	Vector<Cell> depCells = cell.GetDependents(false);

	//Get the length of the array
	int len = depCells.GetLength();

	//Print the names of all the cells inside the array
	for (int i = 0; i < len; i++)
	{
		Cell dCell = depCells[i];
		std::cout << dCell.GetName().ToUtf8() << std::endl;
	}

	std::cout << "" << std::endl;

	//Show successfull execution message on console
	ShowMessageOnConsole("TracingDependents executed successfully.\r\n\r\n");

	
}