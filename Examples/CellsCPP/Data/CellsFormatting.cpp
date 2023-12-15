#include "../CellsExamples.h"

//Format Cell or Range of Cells
void FormatCellOrRangeOfCells()
{
	

	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of output excel file
	U16String outputFormatCellOrRangeOfCells = outPath + "outputFormatCellOrRangeOfCells.xlsx";

	//Create a new workbook
	Workbook wb;

	//Get first worksheet which is created by default
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Access cell C4 by cell name
	Cell cell = ws.GetCells().Get("C4");

	//Add some text in cell
	cell.PutValue("This is sample data.");

	//Access the cell style
	Style st = cell.GetStyle();

	//Fille the cell color to Yellow
	st.SetPattern(BackgroundType::Solid);
	st.SetForegroundColor(Color{0xff, 0xff, 0xff, 0});

	//Set the text to wrapp
	st.SetIsTextWrapped(true);

	//Set the left and right border to Red
	st.SetBorder(BorderType::LeftBorder, CellBorderType::Thick, Color{0xff, 0xff, 0, 0});
	st.SetBorder(BorderType::RightBorder, CellBorderType::Thick, Color{0xff, 0xff, 0, 0});

	//Set font color, font size, strike, bold, italic
	st.GetFont().SetColor(Color{0xff, 0, 0, 0xff});
	st.GetFont().SetSize(16);
	st.GetFont().SetStrikeType(TextStrikeType::Single);
	st.GetFont().SetIsBold(true);
	st.GetFont().SetIsItalic(true);

	//Set text horizontal and vertical alignment to center
	st.SetHorizontalAlignment(TextAlignmentType::Center);
	st.SetVerticalAlignment(TextAlignmentType::Center);

	//Set the cell style
	cell.SetStyle(st);

	//Set the cell column width and row height
	ws.GetCells().SetColumnWidth(cell.GetColumn(), 20);
	ws.GetCells().SetRowHeight(cell.GetRow(), 70);

	//Save the output excel file
	wb.Save(outputFormatCellOrRangeOfCells);

	//Show successfull execution message on console
	ShowMessageOnConsole("FormatCellOrRangeOfCells executed successfully.\r\n\r\n");

	
}