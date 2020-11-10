#include "../CellsExamples.h"

//Adding Data to Cells
void AddingDataToCells()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleData = dirPath->StringAppend(new String("sampleData.xlsx"));

	//Path of output excel file
	StringPtr outputData = outPath->StringAppend(new String("outputData.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleData);

	//Accessing the second worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(1);

	//Adding a string value to the cell
	worksheet->GetICells()->GetObjectByIndex(new String("A1"))->PutValue("Hello World");

	//Adding a double value to the cell
	worksheet->GetICells()->GetObjectByIndex(new String("A2"))->PutValue(20.5);

	//Adding an integer value to the cell
	worksheet->GetICells()->GetObjectByIndex(new String("A3"))->PutValue(15);

	//Adding a boolean value to the cell
	worksheet->GetICells()->GetObjectByIndex(new String("A4"))->PutValue(true);

	//Setting the display format of the date
	intrusive_ptr<ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("A5"));
	intrusive_ptr<IStyle> style = cell->GetIStyle();
	style->SetNumber(15);
	cell->SetIStyle(style);

	//Save the workbook
	workbook->Save(outputData);

	//Show successfull execution message on console
	ShowMessageOnConsole("AddingDataToCells executed successfully.\r\n\r\n");
}

//Retrieving Data from Cells
void RetrievingDataFromCells()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Path of input excel file
	StringPtr sampleData = dirPath->StringAppend(new String("sampleData.xlsx"));

	//Read input excel file
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleData);

	//Accessing the third worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(2);

	//Get cells from sheet
	intrusive_ptr<ICells> cells = worksheet->GetICells();

	//Variable declarations
	intrusive_ptr<String> strVal;
	intrusive_ptr<Aspose::Cells::Systems::DateTime> dateVal;
	Aspose::Cells::Systems::Double dblVal;
	Aspose::Cells::Systems::Boolean boolVal;

	for (int i = 0; i < cells->GetCount(); i++)
	{
		intrusive_ptr<ICell> cell = cells->GetObjectByIndex(i);

		switch (cell->GetType())
		{
			//Evaluating the data type of the cell data for string value
		case CellValueType_IsString:
			Console::WriteLine(new String("Cell Value Type Is String."));
			strVal = cell->GetStringValue();
			break;
			//Evaluating the data type of the cell data for double value
		case CellValueType_IsNumeric:
			Console::WriteLine(new String("Cell Value Type Is Numeric."));
			dblVal = cell->GetDoubleValue();
			break;
			//Evaluating the data type of the cell data for boolean value
		case CellValueType_IsBool:
			Console::WriteLine(new String("Cell Value Type Is Bool."));
			boolVal = cell->GetBoolValue();
			break;
			//Evaluating the data type of the cell data for date/time value
		case CellValueType_IsDateTime:
			Console::WriteLine(new String("Cell Value Type Is DateTime."));
			dateVal = cell->GetDateTimeValue();
			break;
			//Evaluating the unknown data type of the cell data
		case CellValueType_IsUnknown:
			cell->GetStringValue();
			break;
		default:
			break;
		}
	}

	//Show successfull execution message on console
	ShowMessageOnConsole("RetrievingDataFromCells executed successfully.\r\n\r\n");
}