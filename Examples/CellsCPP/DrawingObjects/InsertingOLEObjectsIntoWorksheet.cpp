#include "../CellsExamples.h"

//Inserting OLE Objects Into Worksheet
void InsertingOLEObjectsIntoWorksheet()
{
	
	// Source directory path.
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	// Output directory path.
	U16String outDir = "..\\Data\\02_OutputDirectory\\";

	// Path of output Excel file.
	U16String outputInsertingOLEObjectsIntoWorksheet = outDir + "outputInsertingOLEObjectsIntoWorksheet.xlsx";

	// Instantiate a new workbook.
	Workbook workbook;

	// Get the first worksheet.
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Read Image for Ole Object into array of bytes.
	U16String imagePath = srcDir + "AsposeLogo.png";

	Vector<uint8_t> imageData = GetDataFromFile(imagePath);

	// Read Ole Object into array of bytes.
	U16String oleObjectPath = srcDir + "inputInsertOleObject.xlsx";
	Vector<uint8_t> oleObjectData = GetDataFromFile(oleObjectPath);

	// Add an Ole object into the worksheet with the image.
	int idx = worksheet.GetOleObjects().Add(2, 2, 200, 220, imageData);

	// Set the Ole object data.
	Aspose::Cells::Drawing::OleObject oleObj = worksheet.GetOleObjects().Get(idx);
	oleObj.SetObjectData(oleObjectData);

	// Save the workbook.
	workbook.Save(outputInsertingOLEObjectsIntoWorksheet);

	//Show successfull execution message on console
	ShowMessageOnConsole("InsertingOLEObjectsIntoWorksheet executed successfully.");

	
}


