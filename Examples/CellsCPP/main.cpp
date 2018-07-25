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

	//Uncomment the one you want to try out
	
	//Aspose.Cells for C++ v18.4
	//ReadAndManipulateExcel2016Charts();
	//CreatingAndCustomizingCharts_BubbleChart();
	//CreatingAndCustomizingCharts_CustomChart();
	//CreatingAndCustomizingCharts_LineChart();
	//CreatingAndCustomizingCharts_PyramidChart();
	//ExtractingOLEObjectsFromWorksheet();
	//InsertingOLEObjectsIntoWorksheet();

	ConvertExcelWorkbookToPDF_A_CompliedFiles();
	ConvertExcelWorkbookToPDF_DirectConversion();
	ConvertExcelWorkbookToPDF_SetPDFCreationTime();
	//ConvertingWorksheetToImage_PNG();
	//ConvertingWorksheetToImage_SVG();
	//ConvertingWorksheetToImage_TIFF();

	//Stop before exiting
	printf("\nProgram Finished. Press any key to exit....");
	getchar();
}
