#include "../CellsExamples.h"

//Manipulate Pivot Table 
void ManipulatePivotTable()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\PivotTables\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleManipulatePivotTable = dirPath->StringAppend(new String("sampleManipulatePivotTable.xlsx"));

	//Path of output excel file
	StringPtr outputManipulatePivotTable = outPath->StringAppend(new String("outputManipulatePivotTable.xlsx"));

	//Load the sample excel file
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(sampleManipulatePivotTable);

	//Access first worksheet
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Change value of cell B3 which is inside the source data of pivot table
	intrusive_ptr<String> str = new String("Cup");
	ws->GetICells()->GetObjectByIndex(new String("B3"))->PutValue(str);

	//Get the value of cell H8 before refreshing pivot table
	intrusive_ptr<String> val = ws->GetICells()->GetObjectByIndex(new String("H8"))->GetStringValue();
	StringPtr str1 = new String(L"Before refreshing Pivot Table value of cell H8: ");
	Console::WriteLine(str1->StringAppend(val));

	//Access pivot table, refresh and calculate it
	intrusive_ptr<IPivotTable> pt = ws->GetIPivotTables()->GetObjectByIndex(0);
	pt->RefreshData();
	pt->CalculateData();

	//Get the value of cell H8 after refreshing pivot table
	val = ws->GetICells()->GetObjectByIndex(new String("H8"))->GetStringValue();
	StringPtr str2 = new String(L"After refreshing Pivot Table value of cell H8: ");
	Console::WriteLine(str2->StringAppend(val));

	//Save the output excel file
	wb->Save(outputManipulatePivotTable);

	//Show successfull execution message on console
	ShowMessageOnConsole("ManipulatePivotTable executed successfully.\r\n\r\n");
}