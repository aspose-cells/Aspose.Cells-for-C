#include "../CellsExamples.h"


//Adding Formulas & Calculating Results
void  AddingFormulasAndCalculatingResults()
{
	

	//For complete examples and data files, please go to https://github.com/aspose-cells/Aspose.Cells-for-C

	//Output directory path
	U16String outPath(u"..\\Data\\Output\\");

	//Path of output excel file
	U16String outputAddingFormulasAndCalculatingResults = outPath + u"outputAddingFormulasAndCalculatingResults.xlsx";

	//Create workbook
	Workbook wb;

	//Access first worksheet in the workbook
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Adding integer values to cells A1, A2 and A3
	ws.GetCells().Get(u"A1").PutValue(10);
	ws.GetCells().Get(u"A2").PutValue(20);
	ws.GetCells().Get(u"A3").PutValue(70);

	//Adding a SUM formula to "A4" cell
	ws.GetCells().Get(u"A4").SetFormula(u"=SUM(A1:A3)");

	//Calculating the results of formulas
	wb.CalculateFormula();

	//Get the calculated value of the cell
	U16String strVal = ws.GetCells().Get(u"A4").GetStringValue();

	//Print the calculated value on console
	std::cout << "Calculated Result: " << strVal.ToUtf8() << std::endl;

	//Saving the workbook
	wb.Save(outputAddingFormulasAndCalculatingResults);	

	//Show successfull execution message on console
	ShowMessageOnConsole("AddingFormulasAndCalculatingResults executed successfully.\r\n\r\n");

	
}

//Calculating Formulas Once Only
void CalculatingFormulasOnceOnly()
{
	

	//Source directory path
	U16String dirPath(u"..\\Data\\Formulas\\");

	//Path of input excel file
	U16String sampleCalculatingFormulasOnceOnly = dirPath + u"sampleCalculatingFormulasOnceOnly.xlsx";

	//Create workbook
	Workbook wb(sampleCalculatingFormulasOnceOnly);

	//Set the CreateCalcChain as false
	wb.GetSettings().GetFormulaSettings().SetEnableCalculationChain(false);

	//Get the time before formula calculationint
	auto startTime = std::chrono::system_clock::now();

	//Calculate the workbook formulas
	wb.CalculateFormula();

	//Get the time after formula calculation
	auto interval = std::chrono::system_clock::now() - startTime;
	long long time = std::chrono::duration_cast<std::chrono::milliseconds>(interval).count();
	std::cout << "Workbook Formula Calculation Elapsed Time in Milliseconds: " << time << std::endl;
		

	//Show successfull execution message on console
	ShowMessageOnConsole("CalculatingFormulasOnceOnly executed successfully.\r\n\r\n");

	
}