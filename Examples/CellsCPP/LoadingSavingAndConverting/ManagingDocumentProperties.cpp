#include "../CellsExamples.h"

//Managing Document Properties
void ManagingDocumentProperties()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Paths of source and output excel files
	StringPtr samplePath = dirPath->StringAppend(new String(L"sampleManagingDocumentProperties.xlsx"));
	StringPtr outputPath = outPath->StringAppend(new String(L"outputManagingDocumentProperties.xlsx"));

	//Load the sample excel file
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(samplePath);

	//Read built-in title and subject properties
	StringPtr strTitle = wb->GetIBuiltInDocumentProperties()->GetTitle();
	StringPtr strSubject = wb->GetIBuiltInDocumentProperties()->GetSubject();

	StringPtr title = new String("Title: ");
	Console::WriteLine(title->StringAppend(strTitle));
	StringPtr subject = new String("Subject: ");
	Console::WriteLine(subject->StringAppend(strSubject));

	//Modify built-in title and subject properties
	strTitle = new String("Aspose.Cells New Title");
	strSubject = new String("Aspose.Cells New Subject");
	wb->GetIBuiltInDocumentProperties()->SetTitle(strTitle);
	wb->GetIBuiltInDocumentProperties()->SetSubject(strSubject);

	//Read the custom property
	StringPtr strCustomPropName = new String("MyCustom1");
	StringPtr strCustomPropValue = wb->GetICustomDocumentProperties()->GetObjectByIndex(strCustomPropName)->ToString();
	StringPtr myCustom1 = new String("\r\nMyCustom1: ");
	Console::WriteLine(myCustom1->StringAppend(strCustomPropValue));

	//Add a new custom property
	strCustomPropName = new String("MyCustom5");
	strCustomPropValue = new String("This is my custom five.");
	wb->GetICustomDocumentProperties()->AddIDocumentProperty(strCustomPropName, strCustomPropValue);

	//Save the output excel file
	wb->Save(outputPath);

	//Show successfull execution message on console
	ShowMessageOnConsole("ManagingDocumentProperties executed successfully.\r\n\r\n");
}
