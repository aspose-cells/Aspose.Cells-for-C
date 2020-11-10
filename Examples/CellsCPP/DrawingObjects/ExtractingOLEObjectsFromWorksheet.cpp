#include "../CellsExamples.h"

//Extracting OLE Objects From Worksheet
void ExtractingOLEObjectsFromWorksheet()
{
	// Source directory path.
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	// Output directory path.
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	//Path of input excel file
	StringPtr sampleExtractingOLEObjectsFromWorksheet = srcDir->StringAppend(new String("sampleExtractingOLEObjectsFromWorksheet.xlsx"));

	// Load sample Excel file containing OLE objects.
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook(sampleExtractingOLEObjectsFromWorksheet);

	// Get the first worksheet.
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Create File object.
	intrusive_ptr<Aspose::Cells::Systems::IO::File> ioFile = new Aspose::Cells::Systems::IO::File();

	// Access the count of Ole objects.
	Aspose::Cells::Systems::Int32 oleCount = worksheet->GetIOleObjects()->GetCount();

	// Iterate all the Ole objects and save to disk with correct file format extension.
	for (int i = 0; i < oleCount; i++)
	{
		// Access Ole object.
		intrusive_ptr<Aspose::Cells::Drawing::IOleObject> oleObj = worksheet->GetIOleObjects()->GetObjectByIndex(i);

		// Access the Ole ProgID.
		intrusive_ptr<Aspose::Cells::Systems::String> strProgId = oleObj->GetProgID();

		// Find the correct file extension.
		intrusive_ptr<Aspose::Cells::Systems::String> fileExt = NULL;

		if (strProgId->Equals(new String("Document")) == true)
		{
			fileExt = new Aspose::Cells::Systems::String(".docx");
		}
		else if (strProgId->Equals(new String("Presentation")) == true)
		{
			fileExt = new Aspose::Cells::Systems::String(".pptx");
		}
		else if (strProgId->Equals(new String("Acrobat Document")) == true)
		{
			fileExt = new Aspose::Cells::Systems::String(".pdf");
		}

		// Find the correct file name with file extension.
		intrusive_ptr<Aspose::Cells::Systems::String> fileName = outDir->StringAppend(new String("outputExtractOleObject"))->StringAppend(fileExt);

		// Write the Ole object data with correct file name.
		intrusive_ptr<Aspose::Cells::Systems::IO::FileStream> fout = new Aspose::Cells::Systems::IO::FileStream(fileName, FileMode::FileMode_OpenOrCreate, FileAccess::FileAccess_Write);
		fout->Write(oleObj->GetObjectData(), 0, oleObj->GetObjectData()->GetLength());
		fout->Close();
	}//for

	//Show successfull execution message on console
	ShowMessageOnConsole("ExtractingOLEObjectsFromWorksheet executed successfully.");
}
