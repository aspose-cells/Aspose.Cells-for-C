#include "../CellsExamples.h"

//Create Pivot Table
void  CreatePivotTable()
{
	

	//Output directory path
	U16String outPath(u"..\\Data\\Output\\");

	//Path of output excel file
	U16String outputCreatePivotTable = outPath + u"outputCreatePivotTable.xlsx";

	//Load the sample excel file
	Workbook wb;

	//Access first worksheet
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Add source data for pivot table
	U16String str(u"Fruit");
	ws.GetCells().Get(u"A1").PutValue(str);
	str = u"Quantity";
	ws.GetCells().Get(u"B1").PutValue(str);
	str = u"Price";
	ws.GetCells().Get(u"C1").PutValue(str);
	str = u"Apple";
	ws.GetCells().Get(u"A2").PutValue(str);
	str = u"Orange";
	ws.GetCells().Get(u"A3").PutValue(str);
	ws.GetCells().Get(u"B2").PutValue(3);
	ws.GetCells().Get(u"B3").PutValue(4);
	ws.GetCells().Get(u"C2").PutValue(2);
	ws.GetCells().Get(u"C3").PutValue(1);

	//Add pivot table
	int idx = ws.GetPivotTables().Add(u"A1:C3", u"E5", u"MyPivotTable");

	//Access created pivot table
	PivotTable pt = ws.GetPivotTables().Get(idx);

	//Manipulate pivot table rows, columns and data fields
	pt.AddFieldToArea(PivotFieldType::Row, pt.GetBaseFields().Get(0));
	pt.AddFieldToArea(PivotFieldType::Data, pt.GetBaseFields().Get(1));
	pt.AddFieldToArea(PivotFieldType::Data, pt.GetBaseFields().Get(2));
	pt.AddFieldToArea(PivotFieldType::Column, pt.GetDataField());

	//Set pivot table style
	pt.SetPivotTableStyleType(PivotTableStyleType::PivotTableStyleMedium9);

	//Save the output excel file
	wb.Save(outputCreatePivotTable);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreatePivotTable executed successfully.\r\n\r\n");

	
}