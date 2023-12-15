#include "../CellsExamples.h"

//Convert Excel Workbook To PDF - Set PDF Creation Time
void ConvertExcelWorkbookToPDF_SetPDFCreationTime()
{
	
	// Output directory path.
	U16String outDir(u"..\\Data\\02_OutputDirectory\\");

	// Path of output Pdf file.
	U16String outputConvertExcelWorkbookToPDF = outDir + u"outputConvertExcelWorkbookToPDF_PDFCreationTime.pdf";

	// Create an empty workbook.
	Workbook workbook;

	// Access first worksheet.
	Worksheet worksheet = workbook.GetWorksheets().Get(0);

	// Access cell A1.
	Cell cell = worksheet.GetCells().Get(u"A1");

	// Add some text in cell.
	cell.PutValue(u"PDF Creation Time is 25-May-2017.");

	// Create pdf save options object.
	PdfSaveOptions pdfSaveOptions;

	// Set the created time for the PDF i.e. 25-May-2017
	pdfSaveOptions.SetCreatedTime(Date{ 2017, 5, 25 });

	// Save the Excel Document in PDF format
	workbook.Save(outputConvertExcelWorkbookToPDF, pdfSaveOptions);	

	//Show successfull execution message on console
	ShowMessageOnConsole("ConvertExcelWorkbookToPDF_SetPDFCreationTime executed successfully.");

	
}