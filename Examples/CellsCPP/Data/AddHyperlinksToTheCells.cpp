#include "../CellsExamples.h"

//Add Hyperlinks to the Cells
void AddHyperlinksToTheCells()
{
	
	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of output excel file
	U16String outputAddHyperlinksToTheCells = outPath + "outputAddHyperlinksToTheCells.xlsx";

	//Create a new workbook
	Workbook workbook;

	//Get the first worksheet
	WorksheetCollection wsc = workbook.GetWorksheets();
	Worksheet ws = wsc.Get(0);

	//Add hyperlink in cell C7 and make use of its various methods
	HyperlinkCollection hypLnks = ws.GetHyperlinks();
	int idx = hypLnks.Add("C7", 1, 1, "http://www.aspose.com/");
	Hyperlink lnk = hypLnks.Get(idx);
	lnk.SetTextToDisplay("Aspose");
	lnk.SetScreenTip("Link to Aspose Website");

	//Save the workbook
	workbook.Save(outputAddHyperlinksToTheCells);

	//Show successfull execution message on console
	ShowMessageOnConsole("AddHyperlinksToTheCells executed successfully.\r\n\r\n");

	
}