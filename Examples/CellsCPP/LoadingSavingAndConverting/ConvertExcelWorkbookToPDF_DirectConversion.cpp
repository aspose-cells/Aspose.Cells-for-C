#include "../CellsExamples.h"

//Convert Excel Workbook To PDF - Direct Conversion
void ConvertExcelWorkbookToPDF_DirectConversion()
{
	

	// Source directory path.
	U16String srcDir(u"..\\Data\\01_SourceDirectory\\");

	// Output directory path.
	U16String outDir(u"..\\Data\\02_OutputDirectory\\");

	// Path of input Excel file
	U16String sampleConvertExcelWorkbookToPDF = srcDir + u"sampleConvertExcelWorkbookToPDF.xlsx";

	// Path of output Pdf file
	U16String outputConvertExcelWorkbookToPDF = outDir + u"outputConvertExcelWorkbookToPDF_DirectConversion.pdf";

	// Load the sample Excel file.
	Workbook workbook(sampleConvertExcelWorkbookToPDF);

	// Save the Excel Document in PDF format
	workbook.Save(outputConvertExcelWorkbookToPDF, SaveFormat::Pdf);

	//Show successfull execution message on console
	ShowMessageOnConsole("ConvertExcelWorkbookToPDF_DirectConversion executed successfully.");

	
}