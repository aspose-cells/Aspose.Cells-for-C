#include "../CellsExamples.h"

//Copy Theme from one Workbook to Another
void CopyThemeFromOneWorkbookToAnother()
{
	

	//Source directory path
	U16String dirPath = "..\\Data\\TechnicalArticles\\";

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Paths of source and output excel files
	U16String damaskPath = dirPath + "DamaskTheme.xlsx";
	U16String sampleCopyThemeFromOneWorkbookToAnother = dirPath + "sampleCopyThemeFromOneWorkbookToAnother.xlsx";
	U16String outputCopyThemeFromOneWorkbookToAnother = outPath + "outputCopyThemeFromOneWorkbookToAnother.xlsx";

	//Read excel file that has Damask theme applied on it
	Workbook damask(damaskPath);

	//Read your sample excel file
	Workbook wb(sampleCopyThemeFromOneWorkbookToAnother);

	//Copy theme from source file
	wb.CopyTheme(damask);

	//Save the workbook in xlsx format
	wb.Save(outputCopyThemeFromOneWorkbookToAnother, SaveFormat::Xlsx);

	//Show successfull execution message on console
	ShowMessageOnConsole("CopyThemeFromOneWorkbookToAnother executed successfully.\r\n\r\n");

	
}