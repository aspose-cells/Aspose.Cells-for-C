#include "../CellsExamples.h"

//Convert Excel Workbook To PDF - Set PDF Creation Time
void ConvertExcelWorkbookToPDF_SetPDFCreationTime()
{
	// Output directory path.
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	// Path of output Pdf file.
	StringPtr outputConvertExcelWorkbookToPDF = outDir->StringAppend(new String("outputConvertExcelWorkbookToPDF_PDFCreationTime.pdf"));

	// Create an empty workbook.
	intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();

	// Access first worksheet.
	intrusive_ptr<Aspose::Cells::IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Access cell A1.
	intrusive_ptr<Aspose::Cells::ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("A1"));

	// Add some text in cell.
	cell->PutValue((StringPtr)new String("PDF Creation Time is 25-May-2017."));

	// Create pdf save options object.
	intrusive_ptr<Aspose::Cells::IPdfSaveOptions> pdfSaveOptions = Factory::CreateIPdfSaveOptions();

	// Set the created time for the PDF i.e. 25-May-2017
	pdfSaveOptions->SetCreatedTime(new Aspose::Cells::Systems::DateTime(2017, 5, 25));

	// Save the Excel Document in PDF format
	workbook->Save(outputConvertExcelWorkbookToPDF, pdfSaveOptions);

	//Show successfull execution message on console
	ShowMessageOnConsole("ConvertExcelWorkbookToPDF_SetPDFCreationTime executed successfully.");
}