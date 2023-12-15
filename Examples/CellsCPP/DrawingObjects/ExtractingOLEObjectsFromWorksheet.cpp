#include "../CellsExamples.h"

//Extracting OLE Objects From Worksheet
void ExtractingOLEObjectsFromWorksheet()
{
	

	// Source directory path.
	U16String srcDir = "..\\Data\\01_SourceDirectory\\";

	// Output directory path.
	U16String outDir ="..\\Data\\02_OutputDirectory\\";

	//Path of input excel file
	U16String sampleExtractingOLEObjectsFromWorksheet = srcDir + "sampleExtractingOLEObjectsFromWorksheet.xlsx";

	// Load sample Excel file containing OLE objects.
	Workbook workbook(sampleExtractingOLEObjectsFromWorksheet);

	// Get the first worksheet.
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Access the count of Ole objects.
	int oleCount = worksheet.GetOleObjects().GetCount();

	// Iterate all the Ole objects and save to disk with correct file format extension.
	for (int i = 0; i < oleCount; i++)
	{
		// Access Ole object.
		OleObject oleObj = worksheet.GetOleObjects().Get(i);

		// Access the Ole ProgID.
		U16String strProgId = oleObj.GetProgID();

		// Find the correct file extension.
		U16String fileExt;

		if (strProgId == "Document")
		{
			fileExt = ".docx";
		}
		else if (strProgId == "Presentation")
		{
			fileExt = ".pptx";
		}
		else if (strProgId == "Acrobat Document")
		{
			fileExt = ".pdf";
		}

		// Find the correct file name with file extension.
		U16String fileName = outDir + "outputExtractOleObject" + fileExt;

		SaveDataToFile(oleObj.GetObjectData(), fileName);
	}//for

	//Show successfull execution message on console
	ShowMessageOnConsole("ExtractingOLEObjectsFromWorksheet executed successfully.");

	
}


