#include "../CellsExamples.h"

//Create Named Range in a Workbook 
void CreateNamedRangeInWorkbook()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Path of output excel file
	StringPtr outputCreateNamedRange = dirPath->StringAppend(new String("outputCreateNamedRange.xlsx"));

	//Create a workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Access first worksheet
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Create a range
	intrusive_ptr<IRange> rng = ws->GetICells()->CreateIRange((intrusive_ptr<String>)new String("A5:C10"));

	//Set its name to make it named range
	rng->SetName((intrusive_ptr<String>)new String("MyNamedRange"));

	//Read the named range created above from names collection
	intrusive_ptr<IName> nm = wb->GetIWorksheets()->GetINames()->GetObjectByIndex(0);

	//Print its FullText and RefersTo memebers
	StringPtr fullTect = new String("Full Text : ");
	Console::WriteLine(fullTect->StringAppend(nm->GetFullText()));
	StringPtr referTo = new String("Refers To: ");
	Console::WriteLine(referTo->StringAppend(nm->GetRefersTo()));

	//Save the workbook in xlsx format
	wb->Save(outputCreateNamedRange, SaveFormat_Xlsx);

	//Show successfull execution message on console
	ShowMessageOnConsole("CreateNamedRangeInWorkbook executed successfully.\r\n\r\n");
}