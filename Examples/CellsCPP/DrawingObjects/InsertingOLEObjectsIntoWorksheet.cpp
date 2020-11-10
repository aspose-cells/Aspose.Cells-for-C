#include "../CellsExamples.h"

//Inserting OLE Objects Into Worksheet
void InsertingOLEObjectsIntoWorksheet()
{
	// Source directory path.
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	// Output directory path.
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	// Path of output Excel file.
	StringPtr outputInsertingOLEObjectsIntoWorksheet = outDir->StringAppend(new String("outputInsertingOLEObjectsIntoWorksheet.xlsx"));

	// Instantiate a new workbook.
	intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();

	// Get the first worksheet.
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	//Create File object.
	intrusive_ptr<Aspose::Cells::Systems::IO::File> ioFile = new Aspose::Cells::Systems::IO::File();

	// Read Image for Ole Object into array of bytes.
	StringPtr imagePath = srcDir->StringAppend(new String("AsposeLogo.png"));
	intrusive_ptr<Array1D<Byte>> imageData = ioFile->ReadAllBytes(imagePath);

	// Read Ole Object into array of bytes.
	StringPtr oleObjectPath = srcDir->StringAppend(new String("inputInsertOleObject.xlsx"));
	intrusive_ptr<Array1D<Byte>> oleObjectData = ioFile->ReadAllBytes(oleObjectPath);

	// Add an Ole object into the worksheet with the image.
	Aspose::Cells::Systems::Int32 idx = worksheet->GetIOleObjects()->Add(2, 2, 200, 220, imageData);

	// Set the Ole object data.
	intrusive_ptr<Aspose::Cells::Drawing::IOleObject> oleObj = worksheet->GetIOleObjects()->GetObjectByIndex(idx);
	oleObj->SetObjectData(oleObjectData);

	// Save the workbook.
	workbook->Save(outputInsertingOLEObjectsIntoWorksheet);

	//Show successfull execution message on console
	ShowMessageOnConsole("InsertingOLEObjectsIntoWorksheet executed successfully.");
}
