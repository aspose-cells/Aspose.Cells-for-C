#include "../CellsExamples.h"

//Copy Theme from one Workbook to Another
void CopyThemeFromOneWorkbookToAnother()
{
	//Source directory path
	StringPtr dirPath = new String("..\\Data\\TechnicalArticles\\");

	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of input excel file
	StringPtr sampleData = dirPath->StringAppend(new String("sampleData.xlsx"));

	//Path of output excel file
	StringPtr outputData = outPath->StringAppend(new String("outputData.xlsx"));

	//Paths of source and output excel files
	StringPtr damaskPath = dirPath->StringAppend(new String("DamaskTheme.xlsx"));
	StringPtr sampleCopyThemeFromOneWorkbookToAnother = dirPath->StringAppend(new String("sampleCopyThemeFromOneWorkbookToAnother.xlsx"));
	StringPtr outputCopyThemeFromOneWorkbookToAnother = outPath->StringAppend(new String("outputCopyThemeFromOneWorkbookToAnother.xlsx"));

	//Read excel file that has Damask theme applied on it
	intrusive_ptr<IWorkbook> damask = Factory::CreateIWorkbook(damaskPath);

	//Read your sample excel file
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(sampleCopyThemeFromOneWorkbookToAnother);

	//Copy theme from source file
	wb->CopyITheme(damask);

	//Save the workbook in xlsx format
	wb->Save(outputCopyThemeFromOneWorkbookToAnother, SaveFormat_Xlsx);

	//Show successfull execution message on console
	ShowMessageOnConsole("CopyThemeFromOneWorkbookToAnother executed successfully.\r\n\r\n");
}