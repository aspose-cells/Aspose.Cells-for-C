#include "../CellsExamples.h"

//Apply Custom Theme Colors of the Workbook using Array of Colors 
void ApplyCustomThemeColorsOfWorkbookUsingArrayOfColors()
{
	
	//Output directory path
	U16String outPath ="..\\Data\\Output\\";
	
	//Path of output excel file
	U16String outputApplyCustomThemeColorsOfWorkbookUsingArrayOfColors = outPath + "outputApplyCustomThemeColorsOfWorkbookUsingArrayOfColors.xlsx";

	//Create a workbook
	Workbook wb;

	//Create array of custom theme colors
	Vector<Color> clrs(12);
	//Background1
	clrs[0] = Color{0xff, 0xff, 0, 0};
	//Text1
	clrs[1] = Color{ 0xff, 0xff, 0, 0 };
	//Background2
	clrs[2] = Color{ 0xff, 0xff, 0, 0 };
	//Text2
	clrs[3] = Color{ 0xff, 0xff, 0, 0 };
	//Accent1
	clrs[4] = Color{ 0xff, 0xff, 0, 0 };

	//Accent2
	clrs[5] = Color{ 0xff, 0, 0xff, 0 };
	//Accent3
	clrs[6] = Color{ 0xff, 0, 0xff, 0 };
	//Accent4
	clrs[7] = Color{ 0xff, 0, 0xff, 0 };
	//Accent5
	clrs[8] = Color{ 0xff, 0, 0xff, 0 };

	//Accent6
	clrs[9] = Color{ 0xff, 0, 0, 0xff };
	//Hyperlink
	clrs[10] = Color{ 0xff, 0, 0, 0xff };
	//Followed Hyperlink
	clrs[11] = Color{ 0xff, 0, 0, 0xff };

	//Apply custom theme colors on workbook
	wb.CustomTheme("AnyTheme", clrs);

	//Save the workbook
	wb.Save(outputApplyCustomThemeColorsOfWorkbookUsingArrayOfColors);

	//Show successfull execution message on console
	ShowMessageOnConsole("ApplyCustomThemeColorsOfWorkbookUsingArrayOfColors executed successfully.\r\n\r\n");

	
}