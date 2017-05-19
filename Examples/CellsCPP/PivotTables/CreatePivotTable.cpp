#include "../CellsExamples.h"

//Create Pivot Table
void  CreatePivotTable()
{
	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of output excel file
	StringPtr outputCreatePivotTable = outPath->StringAppend(new String("outputCreatePivotTable.xlsx"));
	
	//Load the sample excel file
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Access first worksheet
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Add source data for pivot table
	intrusive_ptr<String> str = new String("Fruit");
	ws->GetICells()->GetObjectByIndex(new String("A1"))->PutValue(str);
	str = new String("Quantity");
	ws->GetICells()->GetObjectByIndex(new String("B1"))->PutValue(str);
	str = new String("Price");
	ws->GetICells()->GetObjectByIndex(new String("C1"))->PutValue(str);
	str = new String("Apple");
	ws->GetICells()->GetObjectByIndex(new String("A2"))->PutValue(str);
	str = new String("Orange");
	ws->GetICells()->GetObjectByIndex(new String("A3"))->PutValue(str);
	ws->GetICells()->GetObjectByIndex(new String("B2"))->PutValue(3);
	ws->GetICells()->GetObjectByIndex(new String("B3"))->PutValue(4);
	ws->GetICells()->GetObjectByIndex(new String("C2"))->PutValue(2);
	ws->GetICells()->GetObjectByIndex(new String("C3"))->PutValue(1);

	//Add pivot table
	int idx = ws->GetIPivotTables()->Add(new String("A1:C3"), new String("E5"), new String("MyPivotTable"));

	//Access created pivot table
	intrusive_ptr<IPivotTable> pt = ws->GetIPivotTables()->GetObjectByIndex(idx);

	//Manipulate pivot table rows, columns and data fields
	pt->AddFieldToArea(PivotFieldType_Row, pt->GetIBaseFields()->GetObjectByIndex(0));
	pt->AddFieldToArea(PivotFieldType_Data, pt->GetIBaseFields()->GetObjectByIndex(1));
	pt->AddFieldToArea(PivotFieldType_Data, pt->GetIBaseFields()->GetObjectByIndex(2));
	pt->AddFieldToArea(PivotFieldType_Column, pt->GetIDataField());

	//Set pivot table style
	pt->SetPivotTableStyleType(PivotTableStyleType_PivotTableStyleMedium9);

	//Save the output excel file
	wb->Save(outputCreatePivotTable);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreatePivotTable executed successfully.\r\n\r\n");
}