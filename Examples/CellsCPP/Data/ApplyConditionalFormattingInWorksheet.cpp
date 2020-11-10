#include "../CellsExamples.h"

//Apply Conditional Formatting in Worksheet
void ApplyConditionalFormattingInWorksheet()
{
	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");

	//Path of output excel file
	StringPtr outputApplyConditionalFormattingInWorksheet = outPath->StringAppend(new String("outputApplyConditionalFormattingInWorksheet.xlsx"));

	//Create an empty workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Access first worksheet
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	//Adds an empty conditional formatting
	int idx = ws->GetIConditionalFormattings()->Add();
	intrusive_ptr<IFormatConditionCollection> fcs = ws->GetIConditionalFormattings()->GetObjectByIndex(idx);

	//Set the conditional format range
	intrusive_ptr<ICellArea> ca = ICellArea::CreateICellArea(new String("A1"), new String("A1"));
	fcs->AddArea(ca);
	ca = ICellArea::CreateICellArea(new String("B2"), new String("B2"));
	fcs->AddArea(ca);

	//Add condition and set the background color
	idx = fcs->AddCondition(FormatConditionType_CellValue, OperatorType_Between, new String("=A2"), new String("100"));
	intrusive_ptr<IFormatCondition> fc = fcs->GetObjectByIndex(idx);
	fc->GetIStyle()->SetBackgroundColor(Systems::Drawing::Color::GetRed());

	//User friendly message to test the output excel file.
	StringPtr msgStr = new String("Red color in cells A1 and B2 is because of Conditional Formatting. Put 101 or any value >100 in cell A2 and B2, you will see Red background color will be gone.");
	ws->GetICells()->GetObjectByIndex(new String("A10"))->PutValue(msgStr);

	//Save the output excel file
	wb->Save(outputApplyConditionalFormattingInWorksheet);

	//Show successfull execution message on console
	ShowMessageOnConsole("ApplyConditionalFormattingInWorksheet executed successfully.\r\n\r\n");
}