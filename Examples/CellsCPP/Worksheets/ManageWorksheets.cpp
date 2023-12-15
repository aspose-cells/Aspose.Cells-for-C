#include "../CellsExamples.h"

//Adding Worksheets to a New Excel File
void AddingWorksheetsToNewExcelFile()
{
	
	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of output excel file
	U16String outputManageWorksheets = outDir + "outputManageWorksheets.xlsx";

	//Create workbook
	Workbook  workbook;

	// Adding a new worksheet to the Workbook object
	int i = workbook.GetWorksheets().Add();

	// Obtaining the reference of the newly added worksheet by passing its sheet index
	Worksheet worksheet = workbook.GetWorksheets().Get(i);

	// Setting the name of the newly added worksheet
	worksheet.SetName("My Worksheet");

	// Save the Excel file.
	workbook.Save(outputManageWorksheets);
	
	std::cout << "New worksheet added successfully with in a workbook!" << std::endl;

	//Show successfull execution message on console
	ShowMessageOnConsole("AddingWorksheetsToNewExcelFile executed successfully.\r\n\r\n");

	
}

//Accessing Worksheets using Sheet Index
void AccessingWorksheetsUsingSheetIndex()
{
	
	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Path of input excel file
	U16String sampleManageWorksheets = srcDir + "sampleManageWorksheets.xlsx";

	//Load the sample Excel file
	Workbook workbook(sampleManageWorksheets);

	//Accessing a worksheet using its index
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	//Access the cell by its name.
	Cell cell = worksheet.GetCells().Get("F7");

	//Print the value of cell F7
	U16String val = cell.GetStringValue();

	//Print the value on console.
	std::cout << "Value of cell F7: " << val.ToUtf8() << std::endl;

	//Show successfull execution message on console
	ShowMessageOnConsole("AccessingWorksheetsUsingSheetIndex executed successfully.\r\n\r\n");

	
}

//Removing Worksheets using Sheet Index
void RemovingWorksheetsUsingSheetIndex()
{
	
	//Source directory path
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	//Output directory path
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleManageWorksheets = srcDir + "sampleManageWorksheets.xlsx";

	//Path of output excel file
	U16String outputManageWorksheets = outDir + "outputManageWorksheets.xlsx";
	
	//Load the sample Excel file
	Workbook workbook(sampleManageWorksheets);

	//Removing a worksheet using its sheet index
	workbook.GetWorksheets().RemoveAt(0);

	//Save the Excel file.
	workbook.Save(outputManageWorksheets);

	//Show successfull execution message on console
	ShowMessageOnConsole("RemovingWorksheetsUsingSheetIndex executed successfully.\r\n\r\n");

	
}
