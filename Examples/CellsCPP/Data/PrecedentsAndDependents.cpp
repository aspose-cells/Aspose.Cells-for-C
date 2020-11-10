#include "../CellsExamples.h"

//Tracing Precedents
void TracingPrecedents()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Path of input excel file
	StringPtr samplePrecedentsAndDependents = dirPath->StringAppend(new String("samplePrecedentsAndDependents.xlsx"));

	//Load source Excel file
	intrusive_ptr<IWorkbook>  workbook = Factory::CreateIWorkbook(samplePrecedentsAndDependents);

	//Calculate workbook formula
	workbook->CalculateFormula();
	
	//Access first worksheet
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Access cell F6
	intrusive_ptr<ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("F6"));

	//Get precedents of the cells and print them on console
	Console::Write(new String("Printing Precedents of Cell: "));
	Console::Write(cell->GetName());
	Console::WriteLine(new String(""));
	Console::WriteLine(new String("-------------------------------"));

	intrusive_ptr<IReferredAreaCollection> refac = cell->GetIPrecedents();
	
	int count = refac->GetCount();

	for (int i = 0; i < count; i++)
	{
		intrusive_ptr<IReferredArea> refa = refac->GetObjectByIndex(i);

		int row = refa->GetStartRow();
		int col = refa->GetStartColumn();

		cell = worksheet->GetICells()->GetICell(row,col);
		
		Console::WriteLine(cell->GetName());
	}

	Console::WriteLine(new String(""));

	//Show successfull execution message on console
	ShowMessageOnConsole("TracingPrecedents executed successfully.\r\n\r\n");
}

//Tracing Dependents
void TracingDependents()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Path of input excel file
	StringPtr samplePrecedentsAndDependents = dirPath->StringAppend(new String("samplePrecedentsAndDependents.xlsx"));

	//Load source Excel file
	intrusive_ptr<IWorkbook>  workbook = Factory::CreateIWorkbook(samplePrecedentsAndDependents);

	//Calculate workbook formula
	workbook->CalculateFormula();

	//Access first worksheet
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Access cell F6
	intrusive_ptr<ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("F6"));

	//Get dependents of the cells and print them on console
	Console::Write(new String("Printing Dependents of Cell: "));
	Console::Write(cell->GetName());
	Console::WriteLine(new String(""));
	Console::WriteLine(new String("-------------------------------"));

	//Parameter false means we do not want to search other sheets
	intrusive_ptr<Aspose::Cells::Systems::Array1D<ICell*>> depCells = cell->GetDependentICells(false);

	//Get the length of the array
	int len = depCells->Length();

	//Print the names of all the cells inside the array
	for (int i = 0; i < len; i++)
	{
		intrusive_ptr<ICell> dCell = depCells->At(i);
		Console::WriteLine(dCell->GetName());
	}

	Console::WriteLine(new String(""));

	//Show successfull execution message on console
	ShowMessageOnConsole("TracingDependents executed successfully.\r\n\r\n");
}