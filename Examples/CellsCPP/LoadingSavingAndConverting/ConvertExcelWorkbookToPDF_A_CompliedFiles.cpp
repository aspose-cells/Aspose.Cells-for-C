#include "../CellsExamples.h"

//Convert Excel Workbook To PDF/A Complied Files
void ConvertExcelWorkbookToPDF_A_CompliedFiles()
{
	

	// Output directory path.
	U16String outDir(u"..\\Data\\02_OutputDirectory\\");

	// Path of output Pdf file.
	U16String outputConvertExcelWorkbookToPDF = outDir + u"outputConvertExcelWorkbookToPDF_PdfCompliance_PdfA1b.pdf";

	// Create an empty workbook.
	Workbook workbook;

	// Access first worksheet.
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Access cell A1.
	Cell cell = worksheet.GetCells().Get(u"A1");

	// Add some text in cell.
	cell.PutValue(u"Testing PDF/A");

	// Create pdf save options object.
	PdfSaveOptions pdfSaveOptions;

	// Set the compliance to PDF/A-1b.
	pdfSaveOptions.SetCompliance(PdfCompliance::PdfA1b);

	// Save the Excel Document in PDF format
	workbook.Save(outputConvertExcelWorkbookToPDF, pdfSaveOptions);	

	//Show successfull execution message on console
	ShowMessageOnConsole("ConvertExcelWorkbookToPDF_A_CompliedFiles executed successfully.");

	
}