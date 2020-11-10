#include "../CellsExamples.h"

//Converting Worksheet To Image - TIFF
void ConvertingWorksheetToImage_TIFF()
{
	// Source directory path.
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	// Output directory path.
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	// Path of input Excel file.
	StringPtr sampleConvertingWorksheetToDifferentImageFormats = srcDir->StringAppend(new String("sampleConvertingWorksheetToDifferentImageFormats.xlsx"));

	// Create an empty workbook.
	intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook(sampleConvertingWorksheetToDifferentImageFormats);

	// Access first worksheet.
	intrusive_ptr<Aspose::Cells::IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Create image or print options object.
	intrusive_ptr<Aspose::Cells::Rendering::IImageOrPrintOptions> imgOptions = Factory::CreateIImageOrPrintOptions();

	// Specify the image format.
	imgOptions->SetImageFormat(Aspose::Cells::Systems::Drawing::Imaging::ImageFormat::GetTiff());

	// Specify horizontal and vertical resolution
	imgOptions->SetHorizontalResolution(200);
	imgOptions->SetVerticalResolution(200);

	// Render the sheet with respect to specified image or print options.
	intrusive_ptr<Aspose::Cells::Rendering::ISheetRender> sr = Factory::CreateISheetRender(worksheet, imgOptions);

	// Get the output image path.
	StringPtr outputTiff = outDir->Append((StringPtr)new String("outputConvertingWorksheetToImageTiff.tiff"));

	// Convert worksheet to tiff image.
	sr->ToTiff(outputTiff);

	//Show successfull execution message on console
	ShowMessageOnConsole("ConvertingWorksheetToImage_TIFF executed successfully.");
}
