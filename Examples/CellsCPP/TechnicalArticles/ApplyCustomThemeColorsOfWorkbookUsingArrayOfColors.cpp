#include "../CellsExamples.h"

//Apply Custom Theme Colors of the Workbook using Array of Colors 
void ApplyCustomThemeColorsOfWorkbookUsingArrayOfColors()
{
	//Output directory path
	StringPtr outPath = new String("..\\Data\\Output\\");
	
	//Path of output excel file
	StringPtr outputApplyCustomThemeColorsOfWorkbookUsingArrayOfColors = outPath->StringAppend(new String("outputApplyCustomThemeColorsOfWorkbookUsingArrayOfColors.xlsx"));

	//Create a workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	//Create array of custom theme colors
	intrusive_ptr<Array1D<Systems::Drawing::Color*>> clrs = new Array1D<Systems::Drawing::Color*>(12);
	//Background1
	clrs->SetValue(Systems::Drawing::Color::GetRed(), 0);
	//Text1
	clrs->SetValue(Systems::Drawing::Color::GetRed(), 1);
	//Background2
	clrs->SetValue(Systems::Drawing::Color::GetRed(), 2);
	//Text2
	clrs->SetValue(Systems::Drawing::Color::GetRed(), 3);
	//Accent1
	clrs->SetValue(Systems::Drawing::Color::GetRed(), 4);
	//Accent2
	clrs->SetValue(Systems::Drawing::Color::GetGreen(), 5);
	//Accent3
	clrs->SetValue(Systems::Drawing::Color::GetGreen(), 6);
	//Accent4
	clrs->SetValue(Systems::Drawing::Color::GetGreen(), 7);
	//Accent5
	clrs->SetValue(Systems::Drawing::Color::GetGreen(), 8);
	//Accent6
	clrs->SetValue(Systems::Drawing::Color::GetBlue(), 9);
	//Hyperlink
	clrs->SetValue(Systems::Drawing::Color::GetBlue(), 10);
	//Followed Hyperlink
	clrs->SetValue(Systems::Drawing::Color::GetBlue(), 11);

	//Apply custom theme colors on workbook
	wb->CustomTheme(new String("AnyTheme"), clrs);

	//Save the workbook
	wb->Save(outputApplyCustomThemeColorsOfWorkbookUsingArrayOfColors);

	//Show successfull execution message on console
	ShowMessageOnConsole("ApplyCustomThemeColorsOfWorkbookUsingArrayOfColors executed successfully.\r\n\r\n");
}