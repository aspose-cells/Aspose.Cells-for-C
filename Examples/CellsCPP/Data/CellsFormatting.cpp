#include "../CellsExamples.h"

//Format Cell or Range of Cells
void FormatCellOrRangeOfCells()
{
	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of output excel file
	StringPtr outputFormatCellOrRangeOfCells = outPath->StringAppend(new String("outputFormatCellOrRangeOfCells.xlsx"));

	//Create a new workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Get first worksheet which is created by default
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Access cell C4 by cell name
	intrusive_ptr<ICell> cell = ws->GetICells()->GetObjectByIndex(new String("C4"));

	//Add some text in cell
	cell->PutValue((StringPtr)new String("This is sample data."));

	//Access the cell style
	intrusive_ptr<IStyle> st = cell->GetIStyle();

	//Fille the cell color to Yellow
	st->SetPattern(BackgroundType_Solid);
	st->SetForegroundColor(Systems::Drawing::Color::GetYellow());

	//Set the text to wrapp
	st->SetTextWrapped(true);

	//Set the left and right border to Red
	st->SetBorder(BorderType_LeftBorder, CellBorderType_Thick, Systems::Drawing::Color::GetRed());
	st->SetBorder(BorderType_RightBorder, CellBorderType_Thick, Systems::Drawing::Color::GetRed());

	//Set font color, font size, strike, bold, italic
	st->GetIFont()->SetColor(Systems::Drawing::Color::GetBlue());
	st->GetIFont()->SetSize(16);
	st->GetIFont()->SetStrikeType(TextStrikeType_Single);
	st->GetIFont()->SetBold(true);
	st->GetIFont()->SetItalic(true);

	//Set text horizontal and vertical alignment to center
	st->SetHorizontalAlignment(TextAlignmentType_Center);
	st->SetVerticalAlignment(TextAlignmentType_Center);

	//Set the cell style
	cell->SetIStyle(st);

	//Set the cell column width and row height
	ws->GetICells()->SetColumnWidth(cell->GetColumn(), 20);
	ws->GetICells()->SetRowHeight(cell->GetRow(), 70);

	//Save the output excel file
	wb->Save(outputFormatCellOrRangeOfCells);

	//Show successfull execution message on console
	ShowMessageOnConsole("FormatCellOrRangeOfCells executed successfully.\r\n\r\n");
}