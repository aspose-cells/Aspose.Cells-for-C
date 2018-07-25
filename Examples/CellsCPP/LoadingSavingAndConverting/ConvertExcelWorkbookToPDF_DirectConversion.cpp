#include "../CellsExamples.h"

//Convert Excel Workbook To PDF - Direct Conversion
void ConvertExcelWorkbookToPDF_DirectConversion()
{
	// Source directory path.
	StringPtr srcDir = new String("..\\Data\\01_SourceDirectory\\");

	// Output directory path.
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	// Path of input Excel file
	StringPtr sampleConvertExcelWorkbookToPDF = srcDir->StringAppend(new String("sampleConvertExcelWorkbookToPDF.xlsx"));

	// Path of output Pdf file
	StringPtr outputConvertExcelWorkbookToPDF = outDir->StringAppend(new String("outputConvertExcelWorkbookToPDF_DirectConversion.pdf"));

	// Load the sample Excel file.
	intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook(sampleConvertExcelWorkbookToPDF);

	// Save the Excel Document in PDF format
	workbook->Save(outputConvertExcelWorkbookToPDF, SaveFormat_Pdf);

	//Show successfull execution message on console
	ShowMessageOnConsole("ConvertExcelWorkbookToPDF_DirectConversion executed successfully.");
}