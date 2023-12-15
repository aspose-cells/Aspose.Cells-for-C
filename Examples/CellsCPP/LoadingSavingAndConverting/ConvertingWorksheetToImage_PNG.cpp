#include "../CellsExamples.h"

//Converting Worksheet To Image - PNG
void ConvertingWorksheetToImage_PNG()
{
	

	// For complete examples and data files, please go to https://github.com/aspose-cells/Aspose.Cells-for-C

	// Source directory path.
	U16String srcDir(u"..\\Data\\01_SourceDirectory\\");

	// Output directory path.
	U16String outDir(u"..\\Data\\02_OutputDirectory\\");

	// Path of input Excel file.
	U16String sampleConvertingWorksheetToDifferentImageFormats = srcDir + u"sampleConvertingWorksheetToDifferentImageFormats.xlsx";

	// Create an empty workbook.
	Workbook workbook(sampleConvertingWorksheetToDifferentImageFormats);

	// Access first worksheet.
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Create image or print options object.
	ImageOrPrintOptions imgOptions;

	// Specify the image format.
	imgOptions.SetImageType(ImageType::Png);

	// Specify horizontal and vertical resolution
	imgOptions.SetHorizontalResolution(200);
	imgOptions.SetVerticalResolution(200);

	// Render the sheet with respect to specified image or print options.
	SheetRender sr(worksheet, imgOptions);

	// Get page count.
	int pageCount = sr.GetPageCount();

	// Create string builder object for string concatenations.
	std::string sb;

	// Render each page to png image one by one.
	for (int i = 0; i < pageCount; i++)
	{
		// Clear string builder and create output image path with string concatenations.
		sb = "";
		sb += outDir.ToUtf8();
		sb += "outputConvertingWorksheetToImagePNG_";
		sb += std::to_string(i);
		sb += ".png";

		// Get the output image path.
		U16String outputPNG(sb.c_str());

		// Convert worksheet to png image.
		sr.ToImage(i, outputPNG);
	}

	//Show successfull execution message on console
	ShowMessageOnConsole("ConvertingWorksheetToImage_PNG executed successfully.");

	
}