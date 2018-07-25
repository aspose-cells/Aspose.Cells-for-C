#include "../CellsExamples.h"

//Convert Excel Workbook To PDF/A Complied Files
void ConvertExcelWorkbookToPDF_A_CompliedFiles()
{
	// Output directory path.
	StringPtr outDir = new String("..\\Data\\02_OutputDirectory\\");

	// Path of output Pdf file.
	StringPtr outputConvertExcelWorkbookToPDF = outDir->StringAppend(new String("outputConvertExcelWorkbookToPDF_PdfCompliance_PdfA1b.pdf"));

	// Create an empty workbook.
	intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();

	// Access first worksheet.
	intrusive_ptr<Aspose::Cells::IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Access cell A1.
	intrusive_ptr<Aspose::Cells::ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("A1"));

	// Add some text in cell.
	cell->PutValue((StringPtr)new String("Testing PDF/A"));

	// Create pdf save options object.
	intrusive_ptr<Aspose::Cells::IPdfSaveOptions> pdfSaveOptions = Factory::CreateIPdfSaveOptions();

	// Set the compliance to PDF/A-1b.
	pdfSaveOptions->SetCompliance(Aspose::Cells::Rendering::PdfCompliance_PdfA1b);

	// Save the Excel Document in PDF format
	workbook->Save(outputConvertExcelWorkbookToPDF, pdfSaveOptions);

	//Show successfull execution message on console
	ShowMessageOnConsole("ConvertExcelWorkbookToPDF_A_CompliedFiles executed successfully.");
}