#include "../CellsExamples.h"

//Manipulate Named Range in a Workbook
void  ManipulateNamedRangeInWorkbook()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\Data\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleManipulateNamedRangeInWorkbook = dirPath->StringAppend(new String("sampleManipulateNamedRangeInWorkbook.xlsx"));

	//Path of output excel file
	StringPtr outputManipulateNamedRangeInWorkbook = outPath->StringAppend(new String("outputManipulateNamedRangeInWorkbook.xlsx"));

	//Create a workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(sampleManipulateNamedRangeInWorkbook);

	//Read the named range created above from names collection
	intrusive_ptr<IName> nm = wb->GetIWorksheets()->GetINames()->GetObjectByIndex(0);

	//Print its FullText and RefersTo members
	StringPtr fullTect = new String("Full Text : ");
	Console::WriteLine(fullTect->StringAppend(nm->GetFullText()));
	StringPtr referTo = new String("Refers To : ");
	Console::WriteLine(referTo->StringAppend(nm->GetRefersTo()));

	//Manipulate the RefersTo property of NamedRange
	nm->SetRefersTo((intrusive_ptr<String>)new String("=Sheet1!$D$5:$J$10"));

	//Save the workbook in xlsx format
	wb->Save(outputManipulateNamedRangeInWorkbook, SaveFormat_Xlsx);
	
	//Show successfull execution message on console
	ShowMessageOnConsole("ManipulateNamedRangeInWorkbook executed successfully.\r\n\r\n");

}