/*The unique head file need to be included*/
#include "Aspose.Cells.h"
#include "CellsExamples.h"

using namespace std;

void ShowMessageOnConsole(char* msg)
{
	StringPtr msgConsole = new String(msg);
	Console::WriteLine(msgConsole);
}

void ShowCellsVersion()
{
	printf("Aspose.Cells for C++ Version: %s\n\n", ICellsHelper::GetVersion()->charValue());
}

int main(int argc, char** argv)
{
	//Show Aspose.Cells for C++ Version
	ShowCellsVersion();

	ReadAndManipulateExcel2016Charts();
	CreatingAndCustomizingCharts_BubbleChart();
	CreatingAndCustomizingCharts_CustomChart();
	CreatingAndCustomizingCharts_LineChart();
	CreatingAndCustomizingCharts_PyramidChart();
	ExtractingOLEObjectsFromWorksheet();
	InsertingOLEObjectsIntoWorksheet();

	//Stop before exiting
	printf("\nProgram Finished. Press any key to exit....");
	getchar();
}
