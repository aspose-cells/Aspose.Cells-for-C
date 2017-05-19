#include "../CellsExamples.h"

//Add Hyperlinks to the Cells
void AddHyperlinksToTheCells()
{
	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of output excel file
	StringPtr outputAddHyperlinksToTheCells = outPath->StringAppend(new String("outputAddHyperlinksToTheCells.xlsx"));

	//Create a new workbook
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();

	//Get the first worksheet
	intrusive_ptr<IWorksheetCollection> wsc = workbook->GetIWorksheets();
	intrusive_ptr<IWorksheet> ws = wsc->GetObjectByIndex(0);

	//Add hyperlink in cell C7 and make use of its various methods
	intrusive_ptr<IHyperlinkCollection> hypLnks = ws->GetIHyperlinks();
	int idx = hypLnks->Add(new String("C7"), 1, 1, new String("http://www.aspose.com/"));
	intrusive_ptr<IHyperlink> lnk = hypLnks->GetObjectByIndex(idx);
	lnk->SetTextToDisplay(new String("Aspose"));
	lnk->SetScreenTip(new String("Link to Aspose Website"));

	//Save the workbook
	workbook->Save(outputAddHyperlinksToTheCells);

	//Show successfull execution message on console
	ShowMessageOnConsole("AddHyperlinksToTheCells executed successfully.\r\n\r\n");
}