#include "../CellsExamples.h"

//Calculate Workbook Formulas
void  CalculateWorkbookFormulas()
{
	//Create a new workbook
	Workbook wb;

	//Get first worksheet which is created by default
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Adding a value to "A1" cell
	Cell cell = ws.GetCells().Get("A1");
	cell.PutValue(5);

	//Adding a value to "A2" cell
	cell = ws.GetCells().Get("A2");
	cell.PutValue(15);

	//Adding a value to "A3" cell
	cell = ws.GetCells().Get("A3");
	cell.PutValue(25);

	//Adding SUM formula to "A4" cell
	cell = ws.GetCells().Get("A4");
	cell.SetFormula("=SUM(A1:A3)");

	//Calculating the results of formulas
	wb.CalculateFormula();

	//Get the calculated value of the cell "A4" and print it on console
	cell = ws.GetCells().Get("A4");
	U16String sCalcuInfo = "Calculated Value of Cell A4: ";
	std::cout << sCalcuInfo.ToUtf8() << cell.GetStringValue().ToUtf8() << std::endl;

	//Show successfull execution message on console
	ShowMessageOnConsole("CalculateWorkbookFormulas executed successfully.\r\n\r\n");

}