#include "../CellsExamples.h"

//Manipulate Pivot Table 
void ManipulatePivotTable()
{
	

	//Source directory path
	U16String dirPath(u"..\\Data\\PivotTables\\");

	//Output directory path
	U16String outPath(u"..\\Data\\Output\\");

	//Path of input excel file
	U16String sampleManipulatePivotTable = dirPath + u"sampleManipulatePivotTable.xlsx";

	//Path of output excel file
	U16String outputManipulatePivotTable = outPath + u"outputManipulatePivotTable.xlsx";

	//Load the sample excel file
	Workbook wb(sampleManipulatePivotTable);

	//Access first worksheet
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Change value of cell B3 which is inside the source data of pivot table
	ws.GetCells().Get(u"B3").PutValue(u"Cup");

	//Get the value of cell H8 before refreshing pivot table
	U16String val = ws.GetCells().Get(u"H8").GetStringValue();
	std::cout << "Before refreshing Pivot Table value of cell H8: " << val.ToUtf8() << std::endl;

	//Access pivot table, refresh and calculate it
	PivotTable pt = ws.GetPivotTables().Get(0);
	pt.RefreshData();
	pt.CalculateData();

	//Get the value of cell H8 after refreshing pivot table
	val = ws.GetCells().Get(u"H8").GetStringValue();
	std::cout << "After refreshing Pivot Table value of cell H8: " << val.ToUtf8() << std::endl;

	//Save the output excel file
	wb.Save(outputManipulatePivotTable);

	//Show successfull execution message on console
	ShowMessageOnConsole("ManipulatePivotTable executed successfully.\r\n\r\n");

	
}