#include "../CellsExamples.h"

//Apply Conditional Formatting in Worksheet
void ApplyConditionalFormattingInWorksheet()
{
	
	//Output directory path
	U16String outPath = "..\\Data\\Output\\";

	//Path of output excel file
	U16String outputApplyConditionalFormattingInWorksheet = outPath + "outputApplyConditionalFormattingInWorksheet.xlsx";

	//Create an empty workbook
	Workbook wb;

	//Access first worksheet
	Worksheet ws = wb.GetWorksheets().Get(0);

	//Adds an empty conditional formatting
	int idx = ws.GetConditionalFormattings().Add();
	FormatConditionCollection fcs = ws.GetConditionalFormattings().Get(idx);

	//Set the conditional format range
	CellArea ca = CellArea::CreateCellArea(u"A1", u"A1");
	fcs.AddArea(ca);
	ca = CellArea::CreateCellArea(u"B2", u"B2");
	fcs.AddArea(ca);

	//Add condition and set the background color
	idx = fcs.AddCondition(FormatConditionType::CellValue, OperatorType::Between, "=A2", "100");
	FormatCondition fc = fcs.Get(idx);	
	fc.GetStyle().SetBackgroundColor(Color{0xff, 0xff, 0, 0});

	//User friendly message to test the output excel file.
	U16String msgStr ="Red color in cells A1 and B2 is because of Conditional Formatting. Put 101 or any value >100 in cell A2 and B2, you will see Red background color will be gone.";
	ws.GetCells().Get("A10").PutValue(msgStr);

	//Save the output excel file
	wb.Save(outputApplyConditionalFormattingInWorksheet);

	//Show successfull execution message on console
	ShowMessageOnConsole("ApplyConditionalFormattingInWorksheet executed successfully.\r\n\r\n");

	
}