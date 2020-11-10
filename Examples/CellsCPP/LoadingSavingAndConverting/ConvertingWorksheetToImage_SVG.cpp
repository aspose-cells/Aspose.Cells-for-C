#include "../CellsExamples.h"

//Converting Worksheet To Image - SVG
void ConvertingWorksheetToImage_SVG()
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

	// Specify horizontal and vertical resolution
	imgOptions->SetHorizontalResolution(200);
	imgOptions->SetVerticalResolution(200);

	// Specify the save format.
	imgOptions->SetSaveFormat(Aspose::Cells::SaveFormat::SaveFormat_SVG);

	// Render the sheet with respect to specified image or print options.
	intrusive_ptr<Aspose::Cells::Rendering::ISheetRender> sr = Factory::CreateISheetRender(worksheet, imgOptions);

	// Get page count.
	Aspose::Cells::Systems::Int32 pageCount = sr->GetPageCount();

	// Create string builder object for string concatenations.
	intrusive_ptr<Aspose::Cells::Systems::Text::StringBuilder> sb = new Aspose::Cells::Systems::Text::StringBuilder();

	// Render each page to png image one by one.
	for (int i = 0; i < pageCount; i++)
	{
		// Clear string builder and create output image path with string concatenations.
		sb->Clear();
		sb->Append(outDir);
		sb->Append((StringPtr)new String("outputConvertingWorksheetToImageSVG_"));
		sb->Append(i);
		sb->Append((StringPtr)new String(".svg"));

		// Get the output image path.
		StringPtr outputSVG = sb->ToString();

		// Convert worksheet to tiff image.
		sr->ToImage(i, outputSVG);
	}

	//Show successfull execution message on console
	ShowMessageOnConsole("ConvertingWorksheetToImage_SVG executed successfully.");
}
