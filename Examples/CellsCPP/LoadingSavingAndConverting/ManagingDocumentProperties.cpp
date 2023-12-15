#include "../CellsExamples.h"

//Managing Document Properties
void ManagingDocumentProperties()
{
	

	//Source directory path
	U16String dirPath(u"..\\Data\\LoadingSavingAndConverting\\");

	//Output directory path
	U16String outPath(u"..\\Data\\Output\\");

	//Paths of source and output excel files
	U16String samplePath(dirPath + u"sampleManagingDocumentProperties.xlsx");
	U16String outputPath(outPath + u"outputManagingDocumentProperties.xlsx");

	//Load the sample excel file
	Workbook wb(samplePath);

	//Read built-in title and subject properties
	U16String strTitle = wb.GetBuiltInDocumentProperties().GetTitle();
	U16String strSubject = wb.GetBuiltInDocumentProperties().GetSubject();

	U16String title(u"Title: ");
	std::cout << title.ToUtf8() << strTitle.ToUtf8() << std::endl;
	U16String subject(u"Subject: ");
	std::cout << subject.ToUtf8() << strSubject.ToUtf8() << std::endl;

	//Modify built-in title and subject properties
	strTitle = u"Aspose.Cells New Title";
	strSubject = u"Aspose.Cells New Subject";
	wb.GetBuiltInDocumentProperties().SetTitle(strTitle);
	wb.GetBuiltInDocumentProperties().SetSubject(strSubject);

	//Read the custom property
	U16String strCustomPropName(u"MyCustom1");
	U16String strCustomPropValue = wb.GetCustomDocumentProperties().Get(strCustomPropName).ToString();
	U16String myCustom1(u"\r\nMyCustom1: ");
	std::cout << myCustom1.ToUtf8() << strCustomPropValue.ToUtf8() << std::endl;

	//Add a new custom property
	strCustomPropName = u"MyCustom5";
	strCustomPropValue = u"This is my custom five.";
	wb.GetCustomDocumentProperties().Add(strCustomPropName, strCustomPropValue);

	//Save the output excel file
	wb.Save(outputPath);	

	//Show successfull execution message on console
	ShowMessageOnConsole("ManagingDocumentProperties executed successfully.\r\n\r\n");

	
}
