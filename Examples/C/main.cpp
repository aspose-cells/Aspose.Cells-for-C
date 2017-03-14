/*The unique head file need to be included*/
#include "Aspose.Cells.h"
using namespace std;

static StringPtr sourcePath = new String("..\\Data\\");
static StringPtr dataDir_LoadingAndSaving = sourcePath->StringAppend(new String("Loading-and-Saving\\"));
static StringPtr dataDir_Worksheets = sourcePath->StringAppend(new String("Worksheets\\"));
static StringPtr dataDir_RowsAndColumns = sourcePath->StringAppend(new String("Rows-and-Columns\\"));
static StringPtr dataDir_Data = sourcePath->StringAppend(new String("Data\\"));
static StringPtr dataDir_Tables = sourcePath->StringAppend(new String("Tables\\"));
static StringPtr dataDir_CellsHelperClass = sourcePath->StringAppend(new String("CellsHelperClass\\"));

/*Check result*/
 #define EXPECT_TRUE(condition) \
		if (condition) printf("--%s,line:%d -> Ok --\n", __FUNCTION__, __LINE__); \
			 else  printf("--%s,line:%d->>>> Failed!!!! <<<<--\n", __FUNCTION__, __LINE__);

#pragma region "General"

void HelloWorld()
{
	// ExStart:HelloWorld
	// Create a new workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	// Get the first worksheet
	intrusive_ptr<IWorksheetCollection> wsc = wb->GetIWorksheets();
	intrusive_ptr<IWorksheet> ws = wsc->GetObjectByIndex(0);

	// Get cell(0,0)
	intrusive_ptr<ICells> cells = ws->GetICells();
	intrusive_ptr<ICell> cell = cells->GetObjectByIndex(0, 0);

	// Write "Hello World" to cell(0,0) of the first sheet
	intrusive_ptr<String> str = new String("Hello World£¡");
	cell->PutValue(str);

	// Save this workbook to resultFile folder*/
	wb->Save(sourcePath->StringAppend(new String("HelloWorld_out.xlsx")));
	// ExEnd:HelloWorld
}

void ChangeValue()
{
	// ExStart:ChangeValue
	// Open an existing Workbook from sourceFile folder
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(sourcePath->StringAppend(new String("book.xlsx")));

	// Get the first worsheet
	intrusive_ptr<IWorksheetCollection> wsc = wb->GetIWorksheets();
	intrusive_ptr<IWorksheet> ws = wsc->GetObjectByIndex(0);

	// Get cell(0,0)
	intrusive_ptr<ICells> cells = ws->GetICells();
	intrusive_ptr<ICell> cell = cells->GetObjectByIndex(0, 0);

	// Modify the value of the first cell from 100 to 200 *
	cell->PutValue(200);

	// Check value
	EXPECT_TRUE(cell->GetIntValue() == 200);

	// Save this workbook to resultFile folder
	wb->Save(sourcePath->StringAppend(new String("ChangeValue_out.xlsx")));
	// ExEnd:ChangeValue
}

void ValueType()
{
	// ExStart:ValueType
	// Create a new workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	// Get the first worksheet
	intrusive_ptr<IWorksheetCollection> wsc = wb->GetIWorksheets();
	intrusive_ptr<IWorksheet> ws = wsc->GetObjectByIndex(0);

	// Get cells
	intrusive_ptr<ICells> cells = ws->GetICells();

	// Get cell(0,0)
	intrusive_ptr<ICell> cell0 = cells->GetObjectByIndex(0, 0);

	// Set DatetTime value to cell(0,0)
	cell0->PutValue((DateTimePtr)new DateTime(2000, 1, 1));

	// Check value
	EXPECT_TRUE(cell0->GetDateTimeValue()->Equals((DateTimePtr)new DateTime(2000, 1, 1)));

	// Get cell(1,0)
	intrusive_ptr<ICell> cell1 = cells->GetObjectByIndex(1, 0);

	// Set string type value to cell(1,0)
	cell1->PutValue((StringPtr)new String("20000101"));

	// Check value
	EXPECT_TRUE(cell1->GetStringValue()->Equals((StringPtr)new String("20000101")));

	// Get cell(2,0)
	intrusive_ptr<ICell> cell2 = cells->GetObjectByIndex(2, 0);

	// Set double type value to cell(2,0)
	cell2->PutValue(20000101.01);

	// Check value
	EXPECT_TRUE(cell2->GetDoubleValue() == 20000101.01);

	// Get cell(3,0)
	intrusive_ptr<ICell> cell3 = cells->GetObjectByIndex(3, 0);

	// Set int type value to cell(3,0)
	cell3->PutValue(20000101);

	// Check value
	EXPECT_TRUE(cell3->GetIntValue() == 20000101);

	// Get cell(4,0)
	intrusive_ptr<ICell> cell4 = cells->GetObjectByIndex(4, 0);

	// Set bool type value to cell(4,0)
	cell4->PutValue(true);

	// Check value
	EXPECT_TRUE(cell4->GetBoolValue() == true);

	// Save this workbook to resultFile
	wb->Save(sourcePath->StringAppend(new String("ValueType_out.xlsx")));
	// ExEnd:ValueType
}

void SetStyle()
{
	// ExStart:SetStyle
	// Create a new workbook and get the first worksheet
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();
	intrusive_ptr<IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

	// Get cells style
	intrusive_ptr<IStyle> style = ws->GetICells()->GetIStyle();

	// Set font color
	style->GetIFont()->SetColor(Color::GetGreen());

	// Set Background
	style->SetPattern(BackgroundType::BackgroundType_Gray12);
	style->SetBackgroundColor(Color::GetRed());

	// Set Border
	style->SetBorder((BorderType_LeftBorder), CellBorderType_Thin, Color::GetBlue());
	style->SetBorder((BorderType_RightBorder), CellBorderType_Double, Color::GetGold());

	// Set string value to cell 'A1'
	intrusive_ptr<ICells> cells = ws->GetICells();
	intrusive_ptr<ICell> cell = cells->GetObjectByIndex(new String("A1"));
	cell->PutValue((StringPtr)new String("Text"));

	// Apply style to cell 'A1'
	cell->SetIStyle(style);

	// Save this workbook to resultFile
	wb->Save(sourcePath->StringAppend(new String("SetStyle_out.xlsx")));
	// ExEnd:SetStyle
}

void SetFormula()
{
	// ExStart:SetFormula
	// Create a new workbook
	intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

	// Get the first worksheet
	intrusive_ptr<IWorksheetCollection> wsc = wb->GetIWorksheets();
	intrusive_ptr<IWorksheet> ws = wsc->GetObjectByIndex(0);

	// Get cells
	intrusive_ptr<ICells> cells = ws->GetICells();

	// Set value to cell(0,0) and cell(1,0)
	cells->GetObjectByIndex(0, 0)->PutValue(3);
	cells->GetObjectByIndex(1, 0)->PutValue(2);

	// Set Formula
	cells->GetObjectByIndex(0, 1)->SetFormula(new String("=SUM(A1,A2)"));

	// Save this workbook to resultFile
	wb->Save(sourcePath->StringAppend(new String("SetFormula_out.xlsx")));
	// ExEnd:SetFormula
}

void OpenSaveTest()
{
	// ExStart:OpenSaveTest
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(sourcePath->StringAppend(new String("SG-L-AllInd-Hd+Co-Rank32.xlsx")));
	workbook->Save(sourcePath->StringAppend(new String("SG-L-AllInd-Hd+Co-Rank32_out.xlsx")));
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
	EXPECT_TRUE(workbook&&worksheet);
	// ExEnd:OpenSaveTest
}
void AutofilterTest()
{
	// ExStart:AutofilterTest
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(sourcePath->StringAppend(new String("aa_filtre.xls")));
	intrusive_ptr<IWorksheet> sheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
	sheet->GetIAutoFilter()->SetRange(0, 0, 1);
	sheet->GetIAutoFilter()->Filter(1, new String("Nom2"));
	sheet->GetIAutoFilter()->Refresh();
	EXPECT_TRUE(workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICells()->GetRowHeight(3) == 0);
	EXPECT_TRUE(workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICells()->GetRowHeight(4) == 0);
	workbook->Save(sourcePath->StringAppend(new String("aa_filtre_out.xls")));
	// ExEnd:AutofilterTest
}
void PageSetupTest()
{
	// ExStart:PageSetupTest
	// Instantiate a Workbook object and open excel file
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(sourcePath->StringAppend(new String("pagesetup2.xls")));
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
	intrusive_ptr<IPageSetup> pagesetup = worksheet->GetIPageSetup();
	// Page
	EXPECT_TRUE(pagesetup->GetOrientation() == PageOrientationType_Portrait);
	EXPECT_TRUE(pagesetup->GetZoom() == 105);
	EXPECT_TRUE(pagesetup->GetPaperSize() == PaperSizeType_PaperA4);
	EXPECT_TRUE(pagesetup->GetFirstPageNumber() == 1);
	// Margins
	EXPECT_TRUE(pagesetup->GetCenterHorizontally());
	EXPECT_TRUE(pagesetup->GetCenterVertically());
	// Header/Footer
	EXPECT_TRUE(StringHelperPal::IsNullString(pagesetup->GetHeader(0)));// String("")
	EXPECT_TRUE(StringHelperPal::IsNullString(pagesetup->GetHeader(1)));
	EXPECT_TRUE(StringHelperPal::IsNullString(pagesetup->GetHeader(2)));
	EXPECT_TRUE(StringHelperPal::IsNullString(pagesetup->GetFooter(0)));
	EXPECT_TRUE(StringHelperPal::IsNullString(pagesetup->GetFooter(1)));
	EXPECT_TRUE(StringHelperPal::IsNullString(pagesetup->GetFooter(2)));
	// Sheet
	EXPECT_TRUE(pagesetup->GetPrintTitleRows()->Equals((StringPtr)new String("$1:$1")));
	EXPECT_TRUE(pagesetup->GetPrintGridlines());
	EXPECT_TRUE(!pagesetup->GetBlackAndWhite());
	EXPECT_TRUE(!pagesetup->GetPrintDraft());
	EXPECT_TRUE(pagesetup->GetPrintHeadings());
	EXPECT_TRUE(pagesetup->GetPrintComments() == PrintCommentsType_PrintSheetEnd);
	EXPECT_TRUE(pagesetup->GetPrintErrors() == PrintErrorsType_PrintErrorsNA);
	EXPECT_TRUE(pagesetup->GetOrder() == PrintOrderType_OverThenDown);
	// ExEnd:PageSetupTest
}
void ListObjectTest()
{
	// ExStart:ListObjectTest
	// Instantiate a Workbook object and open excel file
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(sourcePath->StringAppend(new String("CellsNet41046.xlsx")));
	intrusive_ptr<IListObject> listObject = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetIListObjects()->GetObjectByIndex(0);
	listObject->ApplyStyleToRange();
	intrusive_ptr<IStyle> style = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICells()->GetObjectByIndex(new String("A1"))->GetIStyle();
	EXPECT_TRUE((style->GetForegroundColor()->ToArgb() & 0xFFFFFF) == (Color::FromArgb(79, 129, 189)->ToArgb() & 0xFFFFFF));
	workbook->GetIWorksheets()->GetObjectByIndex(0)->GetIListObjects()->RemoveAt(0);
	workbook =Factory::CreateIWorkbook(sourcePath->StringAppend(new String("CellsNet41046.xlsx")));
	listObject = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetIListObjects()->GetObjectByIndex(0);
	listObject->ConvertToRange();
	style = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICells()->GetObjectByIndex(new String("A1"))->GetIStyle();
	EXPECT_TRUE((style->GetForegroundColor()->ToArgb() & 0xFFFFFF) == (Color::FromArgb(79, 129, 189)->ToArgb() & 0xFFFFFF));
	EXPECT_TRUE(workbook->GetIWorksheets()->GetObjectByIndex(0)->GetIListObjects()->GetCount() == 0);
	// ExEnd:ListObjectTest
}
#pragma endregion

#pragma region "Loading and Saving"
void OpenFileUsingPath()
{
	// ExStart:OpenFileUsingPath
	// Instantiate a Workbook object and open an Excel file using its file path
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_LoadingAndSaving->StringAppend(new String("Book1.xlsx")));
	printf("\nWorkbook opened successfully using path!");
	// ExEnd:OpenFileUsingPath
}
void OpenFileUsingStream()
{
	// ExStart:OpenFileUsingStream
	// Create a Stream object
	intrusive_ptr<FileStream>  fstream = new FileStream(dataDir_LoadingAndSaving->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Creating a Workbook object, open the file from a Stream object
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(fstream);
	printf("\nWorkbook opened successfully using stream!");
	fstream->Close();
	// ExEnd:OpenFileUsingStream
}
void SavingToStream()
{
	// ExStart:SavingToStream
	// Instantiate a Workbook object and open an Excel file using its file path
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_LoadingAndSaving->StringAppend(new String("Book1.xlsx")));

	intrusive_ptr<FileStream> stream = new FileStream(dataDir_LoadingAndSaving->StringAppend(new String("SavingToStream_out.xlsx")), FileMode_CreateNew);

	workbook->Save(stream, SaveFormat_Xlsx);
	stream->Close();
	printf("\nFile saved successfully to a stream!");
	// ExEnd:SavingToStream
}
void SavingToSomeLocation()
{
	// ExStart:SavingToSomeLocation
	// Instantiate a Workbook object and open an Excel file using its file path
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_LoadingAndSaving->StringAppend(new String("Book1.xlsx")));

	// Save in Excel 97 � 2003 format
	workbook->Save(dataDir_LoadingAndSaving->StringAppend(new String("SavingToSomeLocation_out.xls")));
	// OR
	workbook->Save(dataDir_LoadingAndSaving->StringAppend(new String("SavingToSomeLocation_out.xls")), SaveFormat_Excel97To2003);

	// Save in Excel2007 xlsx format
	workbook->Save(dataDir_LoadingAndSaving->StringAppend(new String("SavingToSomeLocation_out.xlsx")), SaveFormat_Xlsx);	
	// ExEnd:SavingToSomeLocation
}
#pragma endregion

#pragma region "Rows and Columns"

void SetRowHeight()
{

	// ExStart:SetRowHeight
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Setting the height of the second row to 13
	worksheet->GetICells()->SetRowHeight(1, 13);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("SetRowHeight_out.xls")));

	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:SetRowHeight
}

void SettingAllRowsHeight()
{

	// ExStart:SettingAllRowsHeight
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Setting the height of all rows in the worksheet to 15
	worksheet->GetICells()->SetStandardHeight(15);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("SettingAllRowsHeight_out.xls")));

	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:SettingAllRowsHeight
}
void SettingColumWidth()
{

	// ExStart:SettingColumWidth
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Setting the width of the second column to 17.5
	worksheet->GetICells()->SetColumnWidth(1, 17.5);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("SettingColumWidth_out.xls")));

	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:SettingColumWidth
}
void SettingWidthOfAllColumns()
{

	// ExStart:SettingWidthOfAllColumns
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Setting the width of all columns in the worksheet to 20.5
	worksheet->GetICells()->SetStandardWidth(20.5);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("SettingWidthOfAllColumns_out.xls")));

	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:SettingWidthOfAllColumns
}
void CopyRows()
{
	// ExStart:CopyRows
	// Instantiating a Workbook object and opening the Excel file through the path
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Copy the second row with data, formattings, images and drawing objects to the 16th row in the worksheet.
	worksheet->GetICells()->CopyRow(worksheet->GetICells(), 1, 15);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("CopyRows_out.xls")));
	// ExEnd:CopyRows
}
void CopyColumns()
{
	// ExStart:CopyColumns
	// Instantiating a Workbook object and opening the Excel file through the path
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Copy the first column from the first worksheet of the first workbook into the first worksheet of the second workbook.
	worksheet->GetICells()->CopyColumn(worksheet->GetICells(), 0, 2);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("CopyColumns_out.xls")));
	// ExEnd:CopyColumns
}
void GroupRowsColumns()
{
	// ExStart:GroupRowsColumns
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Grouping first six rows and first three columns
	worksheet->GetICells()->GroupRows(0, 5, true);
	worksheet->GetICells()->GroupColumns(0, 2, true);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("GroupRowsColumns_out.xls")));

	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:GroupRowsColumns
}
void UngroupRowsAndColumns()
{
	// ExStart:UngroupRowsAndColumns  
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// UnGrouping first six rows and first three columns
	worksheet->GetICells()->UngroupRows(0, 5);
	worksheet->GetICells()->UngroupColumns(0, 2);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("UngroupRowsAndColumns_out.xls")));
	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:UngroupRowsAndColumns  
}
void InsertRow()
{
	// ExStart:InsertRow  
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Inserting a row into the worksheet at 3rd position
	worksheet->GetICells()->InsertRow(2);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("InsertRow_out.xls")));
	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:InsertRow  
}
void InsertMultipleRows()
{
	// ExStart:InsertMultipleRows  
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Inserting 10 rows into the worksheet starting from 3rd row
	worksheet->GetICells()->InsertRows(2, 10);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("InsertMultipleRows_out.xls")));
	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:InsertMultipleRows  
}
void DeleteMultipleRows()
{
	// ExStart:DeleteMultipleRows  
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_OpenOrCreate);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Deleting 10 rows from the worksheet starting from 3rd row
	worksheet->GetICells()->DeleteRows(2, 10);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("DeleteMultipleRows_out.xls")));
	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:DeleteMultipleRows  
}
void InsertColumn()
{
	// ExStart:InsertColumn  
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Inserting a column into the worksheet at 2nd position
	worksheet->GetICells()->InsertColumn(1);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("InsertColumn_out.xls")));
	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:InsertColumn  
}
void DeleteColumn()
{
	// ExStart:DeleteColumn  
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_RowsAndColumns->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Deleting a column from the worksheet at 2nd position
	worksheet->GetICells()->DeleteColumn(4);

	// Save the Excel file.
	workbook->Save(dataDir_RowsAndColumns->StringAppend(new String("DeleteColumn_out.xls")));
	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:DeleteColumn  
}
#pragma endregion

#pragma region "Worksheets"
void CopyWorksheetsWithinWorkbook()
{

	// ExStart:CopyWorksheetsWithinWorkbook
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Worksheets->StringAppend(new String("Book1.xlsx")));

	// Create a Worksheets object with reference to the sheets of the Workbook.
	intrusive_ptr<IWorksheetCollection> sheets = workbook->GetIWorksheets();

	// Copy data to a new sheet from an existing sheet within the Workbook.
	sheets->AddCopy(new String("Sheet1"));

	// Save the Excel file.
	workbook->Save(dataDir_Worksheets->StringAppend(new String("CopyWorksheetsWithinWorkbook_out.xls")));
	printf("\nWorksheet copied successfully with in a workbook!");
	// ExEnd:CopyWorksheetsWithinWorkbook
}
void MoveWorksheetsWithinWorkbook()
{
	// ExStart:MoveWorksheetsWithinWorkbook
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Worksheets->StringAppend(new String("Book1.xlsx")));

	// Create a Worksheets object with reference to the sheets of the Workbook and get the first worksheet.
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Move the first sheet to the third position in the workbook.
	worksheet->MoveTo(2);

	// Save the Excel file.
	workbook->Save(dataDir_Worksheets->StringAppend(new String("MoveWorksheetsWithinWorkbook_out.xls")));
	printf("\nWorksheet moved successfully with in a workbook!");
	// ExEnd:MoveWorksheetsWithinWorkbook
}
void AddingWorksheetsToNewExcelFile()
{
	// ExStart:AddingWorksheetsToNewExcelFile
	// Instantiate a Workbook object
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook();

	// Adding a new worksheet to the Workbook object
	int i = workbook->GetIWorksheets()->Add();

	// Obtaining the reference of the newly added worksheet by passing its sheet index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(i);

	// Setting the name of the newly added worksheet
	worksheet->SetName(new String("My Worksheet"));

	// Save the Excel file.
	workbook->Save(dataDir_Worksheets->StringAppend(new String("AddingWorksheetsToNewExcelFile_out.xls")));
	printf("\nWorksheet moved successfully with in a workbook!");
	// ExEnd:AddingWorksheetsToNewExcelFile
}

void AccessingWorksheetsUsingIndex()
{
	// ExStart:AccessingWorksheetsUsingIndex
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_Worksheets->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing a worksheet using its index and Get cell by name from worksheet cells collection
	intrusive_ptr<ICell> cell = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICells()->GetObjectByIndex(new String("A1"));
	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:AccessingWorksheetsUsingIndex
}
void RemoveWorksheetsUsingIndex()
{
	// ExStart:RemoveWorksheetsUsingIndex
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_Worksheets->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Removing a worksheet using its sheet index
	workbook->GetIWorksheets()->RemoveAt(0);

	// Save the Excel file.
	workbook->Save(dataDir_Worksheets->StringAppend(new String("RemoveWorksheetsUsingIndex_out.xls")));
	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:RemoveWorksheetsUsingIndex
}
void AddPageBreaks()
{
	// ExStart:AddPageBreaks
	// Instantiating a Workbook object
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook();

	// Add a page break at cell Y30
	workbook->GetIWorksheets()->GetObjectByIndex(0)->AddPageBreaks(new String("Y30"));	

	// Save the Excel file.
	workbook->Save(dataDir_Worksheets->StringAppend(new String("AddPageBreaks_out.xls")));
	// ExEnd:AddPageBreaks
}
void EnableNormalView()
{
	// ExStart:EnableNormalView
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_Worksheets->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Displaying the worksheet in page break preview
	worksheet->SetIsPageBreakPreview(true);

	// Saving the modified Excel file
	workbook->Save(dataDir_Worksheets->StringAppend(new String("EnableNormalView_out.xls")));

	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:EnableNormalView
}
void SetZoomFactor()
{
	// ExStart:SetZoomFactor
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_Worksheets->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Setting the zoom factor of the worksheet to 75
	worksheet->SetZoom(75);

	// Saving the modified Excel file
	workbook->Save(dataDir_Worksheets->StringAppend(new String("SetZoomFactor_out.xls")));

	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:SetZoomFactor
}
void FreezePanes()
{
	// ExStart:FreezePanes
	// Creating a file stream containing the Excel file to be opened
	intrusive_ptr<FileStream> fstream = new FileStream(dataDir_Worksheets->StringAppend(new String("Book1.xlsx")), FileMode_Open);

	// Instantiating a Workbook object and opening the Excel file through the file stream
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(fstream);

	// Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Applying freeze panes settings
	worksheet->FreezePanes(3, 2, 3, 2);

	// Saving the modified Excel file
	workbook->Save(dataDir_Worksheets->StringAppend(new String("FreezePanes_out.xls")));

	// Closing the file stream to free all resources
	fstream->Close();
	// ExEnd:FreezePanes
}
void SplitPanes()
{
	// ExStart:SplitPanes
	// Instantiating a Workbook object and opening the Excel file through the path
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(dataDir_Worksheets->StringAppend(new String("Book1.xlsx")));

	// Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Set the active cell
	worksheet->SetActiveCell(new String("A20"));

	// Split the worksheet window
	worksheet->Split();

	// Saving the modified Excel file
	workbook->Save(dataDir_Worksheets->StringAppend(new String("FreezePanes_out.xls")));
	// ExEnd:SplitPanes
}
void RemovingPanes()
{
	// ExStart:RemovingPanes
	// Instantiating a Workbook object and opening the Excel file through the path
	intrusive_ptr<IWorkbook> workbook =Factory::CreateIWorkbook(dataDir_Worksheets->StringAppend(new String("Book1.xlsx")));

	// Accessing a worksheet using its index
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Set the active cell
	worksheet->SetActiveCell(new String("A20"));

	// Split the worksheet window
	worksheet->RemoveSplit();

	// Saving the modified Excel file
	workbook->Save(dataDir_Worksheets->StringAppend(new String("RemovingPanes_out.xls")));
	// ExEnd:RemovingPanes
}
#pragma endregion

#pragma region "Data"
void UsingCellName()
{
	// ExStart:UsingCellName
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Data->StringAppend(new String("Book1.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Get cells from sheet
	intrusive_ptr<ICells> cells = worksheet->GetICells();

	// Accessing a cell using its name
	intrusive_ptr<ICell> cell = cells->GetObjectByIndex(new String("A1"));
	// ExEnd:UsingCellName
}
void UsingRowAndColumnIndex()
{
	// ExStart:UsingRowAndColumnIndex
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Data->StringAppend(new String("Book1.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Get cells from sheet
	intrusive_ptr<ICells> cells = worksheet->GetICells();

	// Accessing a cell using its index
	intrusive_ptr<ICell> cell = cells->GetObjectByIndex(0);
	// ExEnd:UsingRowAndColumnIndex
}
void MaximumDisplayRange()
{

	// ExStart:MaximumDisplayRange
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Data->StringAppend(new String("Book1.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Get cells from sheet
	intrusive_ptr<ICells> cells = worksheet->GetICells();

	// Access the Maximum Display Range
	intrusive_ptr<IRange> range = cells->GetMaxDisplayIRange();
	// ExEnd:MaximumDisplayRange
}
void AddingDataToCells()
{
	// ExStart:AddingDataToCells
	// Instantiate a Workbook object
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook();

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Adding a string value to the cell
	worksheet->GetICells()->GetObjectByIndex(new String("A1"))->PutValue("Hello World");

	// Adding a double value to the cell
	worksheet->GetICells()->GetObjectByIndex(new String("A2"))->PutValue(20.5);

	// Adding an integer  value to the cell
	worksheet->GetICells()->GetObjectByIndex(new String("A3"))->PutValue(15);

	// Adding a boolean value to the cell
	worksheet->GetICells()->GetObjectByIndex(new String("A4"))->PutValue(true);

	// Setting the display format of the date
	intrusive_ptr<IStyle> style = worksheet->GetICells()->GetObjectByIndex(new String("A5"))->GetIStyle();
	style->SetNumber(15);

	worksheet->GetICells()->GetObjectByIndex(new String("A5"))->SetIStyle(style);

	workbook->Save(dataDir_Data->StringAppend(new String("AddingDataToCells_out.xlsx")));
	// ExEnd:AddingDataToCells
}
void RetrievingDataFromCells()
{
	// ExStart:RetrievingDataFromCells
	// Instantiate a Workbook object and load excel file from path
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Data->StringAppend(new String("Book1.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Get cells from sheet
	intrusive_ptr<ICells> cells = worksheet->GetICells();

	for (int i = 0; i < cells->GetCount(); i++)
	{

		intrusive_ptr<ICell> cell = cells->GetObjectByIndex(i);

		switch (cell->GetType())
		{
			// Evaluating the data type of the cell data for string value
		case CellValueType_IsString:
			cell->GetStringValue();
			break;
			// Evaluating the data type of the cell data for double value
		case CellValueType_IsNumeric:
			cell->GetDoubleValue();
			break;
			// Evaluating the data type of the cell data for boolean value
		case CellValueType_IsBool:
			cell->GetBoolValue();
			break;
			// Evaluating the data type of the cell data for date/time value
		case CellValueType_IsDateTime:
			cell->GetDateTimeValue();
			break;
			// Evaluating the unknown data type of the cell data
		case CellValueType_IsUnknown:
			cell->GetStringValue();
			break;
		default:
			break;
		}
	}
	// ExEnd:RetrievingDataFromCells
}
void TracingPrecedents()
{
	// ExStart:TracingPrecedents
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Data->StringAppend(new String("Book1.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Get cell by name from sheet cells collection
	intrusive_ptr<ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("B4"));

	intrusive_ptr<IReferredArea> area;

	area->GetSheetName();
	area->GetStartRow();
	area->GetStartColumn();
	area->GetEndRow();
	area->GetEndColumn();
	// ExEnd:TracingPrecedents
}
void TracingDependents()
{
	// ExStart:TracingDependents
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Data->StringAppend(new String("Book1.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Get cell by name from sheet cells collection
	intrusive_ptr<ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("B2"));

	cell->GetDependentICells(true);
	// ExEnd:TracingDependents
}
#pragma endregion

#pragma region "Tables"
void CreatingListObjects()
{
	// ExStart:CreatingListObjects
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Tables->StringAppend(new String("book1.xls")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Get the List objects collection in the first worksheet.
	intrusive_ptr<IListObjectCollection> listObjects = worksheet->GetIListObjects();

	// Add a List based on the data source range with headers on.
	listObjects->Add(1, 1, 7, 5, true);

	// Show the total row for the List.
	listObjects->GetObjectByIndex(0)->SetShowTotals(true);	

	// Saving the Excel file
	workbook->Save(dataDir_Tables->StringAppend(new String("CreatingListObjects_out.xls")));
	// ExEnd:CreatingListObjects
}
void FormatTable()
{
	// ExStart:FormatTable
	// Instantiate a Workbook object
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook();

	// Obtaining the reference of the default(first) worksheet
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Obtaining Worksheet's cells collection
	intrusive_ptr<ICells> cells = worksheet->GetICells();

	// Setting the value to the cells
	cells->GetObjectByIndex(new String("A1"))->PutValue("Employee");
	cells->GetObjectByIndex(new String("B1"))->PutValue("Quarter");
	cells->GetObjectByIndex(new String("C1"))->PutValue("Product");
	cells->GetObjectByIndex(new String("D1"))->PutValue("Continent");
	cells->GetObjectByIndex(new String("E1"))->PutValue("Country");
	cells->GetObjectByIndex(new String("F1"))->PutValue("Sale");

	cells->GetObjectByIndex(new String("A2"))->PutValue("David");
	cells->GetObjectByIndex(new String("A3"))->PutValue("David");
	cells->GetObjectByIndex(new String("A4"))->PutValue("David");
	cells->GetObjectByIndex(new String("A5"))->PutValue("David");
	cells->GetObjectByIndex(new String("A6"))->PutValue("James");
	cells->GetObjectByIndex(new String("A7"))->PutValue("James");
	cells->GetObjectByIndex(new String("A8"))->PutValue("James");
	cells->GetObjectByIndex(new String("A9"))->PutValue("James");
	cells->GetObjectByIndex(new String("A10"))->PutValue("James");
	cells->GetObjectByIndex(new String("A11"))->PutValue("Miya");
	cells->GetObjectByIndex(new String("A12"))->PutValue("Miya");
	cells->GetObjectByIndex(new String("A13"))->PutValue("Miya");
	cells->GetObjectByIndex(new String("A14"))->PutValue("Miya");
	cells->GetObjectByIndex(new String("A15"))->PutValue("Miya");

	cells->GetObjectByIndex(new String("B2"))->PutValue(1);
	cells->GetObjectByIndex(new String("B3"))->PutValue(2);
	cells->GetObjectByIndex(new String("B4"))->PutValue(3);
	cells->GetObjectByIndex(new String("B5"))->PutValue(4);
	cells->GetObjectByIndex(new String("B6"))->PutValue(1);
	cells->GetObjectByIndex(new String("B7"))->PutValue(2);
	cells->GetObjectByIndex(new String("B8"))->PutValue(3);
	cells->GetObjectByIndex(new String("B9"))->PutValue(4);
	cells->GetObjectByIndex(new String("B10"))->PutValue(4);
	cells->GetObjectByIndex(new String("B11"))->PutValue(1);
	cells->GetObjectByIndex(new String("B12"))->PutValue(1);
	cells->GetObjectByIndex(new String("B13"))->PutValue(2);
	cells->GetObjectByIndex(new String("B14"))->PutValue(2);
	cells->GetObjectByIndex(new String("B15"))->PutValue(2);

	cells->GetObjectByIndex(new String("C2"))->PutValue("Maxilaku");
	cells->GetObjectByIndex(new String("C3"))->PutValue("Maxilaku");
	cells->GetObjectByIndex(new String("C4"))->PutValue("Chai");
	cells->GetObjectByIndex(new String("C5"))->PutValue("Maxilaku");
	cells->GetObjectByIndex(new String("C6"))->PutValue("Chang");
	cells->GetObjectByIndex(new String("C7"))->PutValue("Chang");
	cells->GetObjectByIndex(new String("C8"))->PutValue("Chang");
	cells->GetObjectByIndex(new String("C9"))->PutValue("Chang");
	cells->GetObjectByIndex(new String("C10"))->PutValue("Chang");
	cells->GetObjectByIndex(new String("C11"))->PutValue("Geitost");
	cells->GetObjectByIndex(new String("C12"))->PutValue("Chai");
	cells->GetObjectByIndex(new String("C13"))->PutValue("Geitost");
	cells->GetObjectByIndex(new String("C14"))->PutValue("Geitost");
	cells->GetObjectByIndex(new String("C15"))->PutValue("Geitost");

	cells->GetObjectByIndex(new String("D2"))->PutValue("Asia");
	cells->GetObjectByIndex(new String("D3"))->PutValue("Asia");
	cells->GetObjectByIndex(new String("D4"))->PutValue("Asia");
	cells->GetObjectByIndex(new String("D5"))->PutValue("Asia");
	cells->GetObjectByIndex(new String("D6"))->PutValue("Europe");
	cells->GetObjectByIndex(new String("D7"))->PutValue("Europe");
	cells->GetObjectByIndex(new String("D8"))->PutValue("Europe");
	cells->GetObjectByIndex(new String("D9"))->PutValue("Europe");
	cells->GetObjectByIndex(new String("D10"))->PutValue("Europe");
	cells->GetObjectByIndex(new String("D11"))->PutValue("America");
	cells->GetObjectByIndex(new String("D12"))->PutValue("America");
	cells->GetObjectByIndex(new String("D13"))->PutValue("America");
	cells->GetObjectByIndex(new String("D14"))->PutValue("America");
	cells->GetObjectByIndex(new String("D15"))->PutValue("America");

	cells->GetObjectByIndex(new String("E2"))->PutValue("China");
	cells->GetObjectByIndex(new String("E3"))->PutValue("India");
	cells->GetObjectByIndex(new String("E4"))->PutValue("Korea");
	cells->GetObjectByIndex(new String("E5"))->PutValue("India");
	cells->GetObjectByIndex(new String("E6"))->PutValue("France");
	cells->GetObjectByIndex(new String("E7"))->PutValue("France");
	cells->GetObjectByIndex(new String("E8"))->PutValue("Germany");
	cells->GetObjectByIndex(new String("E9"))->PutValue("Italy");
	cells->GetObjectByIndex(new String("E10"))->PutValue("France");
	cells->GetObjectByIndex(new String("E11"))->PutValue("U.S.");
	cells->GetObjectByIndex(new String("E12"))->PutValue("U.S.");
	cells->GetObjectByIndex(new String("E13"))->PutValue("Brazil");
	cells->GetObjectByIndex(new String("E14"))->PutValue("U.S.");
	cells->GetObjectByIndex(new String("E15"))->PutValue("U.S.");

	cells->GetObjectByIndex(new String("F2"))->PutValue(2000);
	cells->GetObjectByIndex(new String("F3"))->PutValue(500);
	cells->GetObjectByIndex(new String("F4"))->PutValue(1200);
	cells->GetObjectByIndex(new String("F5"))->PutValue(1500);
	cells->GetObjectByIndex(new String("F6"))->PutValue(500);
	cells->GetObjectByIndex(new String("F7"))->PutValue(1500);
	cells->GetObjectByIndex(new String("F8"))->PutValue(800);
	cells->GetObjectByIndex(new String("F9"))->PutValue(900);
	cells->GetObjectByIndex(new String("F10"))->PutValue(500);
	cells->GetObjectByIndex(new String("F11"))->PutValue(1600);
	cells->GetObjectByIndex(new String("F12"))->PutValue(600);
	cells->GetObjectByIndex(new String("F13"))->PutValue(2000);
	cells->GetObjectByIndex(new String("F14"))->PutValue(500);
	cells->GetObjectByIndex(new String("F15"))->PutValue(900);


	// Adding a new List Object to the worksheet
	worksheet->GetIListObjects()->Add(new String("A1"), new String("F15"), true);
	intrusive_ptr<IListObject> listObject = worksheet->GetIListObjects()->GetObjectByIndex(0);

	// Adding Default Style to the table
	listObject->SetTableStyleType(TableStyleType_TableStyleMedium10);

	// Show Total
	listObject->SetShowTotals(true);	

	// Saving the Excel file
	workbook->Save(dataDir_Tables->StringAppend(new String("FormatTable_out.xlsx")));
	// ExEnd:FormatTable
}
void SetCommentOfTableOrListObject()
{
	// ExStart:SetCommentOfTableOrListObject
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Tables->StringAppend(new String("source.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Get the List objects collection in the first worksheet.
	intrusive_ptr<IListObjectCollection> listObjects = worksheet->GetIListObjects();

	// Set the comment of the first list object
	listObjects->GetObjectByIndex(0)->SetComment(new String("This is Aspose.Cells comment."));

	// Saving the Excel file
	workbook->Save(dataDir_Tables->StringAppend(new String("SetCommentOfTableOrListObject_out.xlsx")), SaveFormat_Xlsx);
	// ExEnd:SetCommentOfTableOrListObject
}
void ConvertTableToRange()
{
	// ExStart:ConvertTableToRange
	// Instantiate a Workbook object and open an Excel file
	intrusive_ptr<IWorkbook>  workbook =Factory::CreateIWorkbook(dataDir_Tables->StringAppend(new String("sample.xlsx")));

	// Accessing the first worksheet in the Excel file
	intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);

	// Get the List objects collection in the first worksheet.
	intrusive_ptr<IListObjectCollection> listObjects = worksheet->GetIListObjects();

	// Convert the first table/list object (from the first worksheet) to normal range
	listObjects->GetObjectByIndex(0)->ConvertToRange();

	// Saving the Excel file
	workbook->Save(dataDir_Tables->StringAppend(new String("ConvertTableToRange_out.xls")));
	// ExEnd:ConvertTableToRange
}
#pragma endregion

#pragma region "Cells Helper"
void GetCellNameFromRowAndColumn()
{
	// ExStart:GetCellNameFromRowAndColumn	
	intrusive_ptr<ICellsHelper> cellsHelper = new ICellsHelper();
	String name = cellsHelper->CellIndexToName(3, 5);
	// ExEnd:GetCellNameFromRowAndColumn
}

void GetRowAndColumnFromCellName()
{
	// ExStart:GetRowAndColumnFromCellName	
	int row;
	int column;
	intrusive_ptr<ICellsHelper> cellsHelper = new ICellsHelper();
	cellsHelper->CellNameToIndex(new String("C4"), row, column);
	// ExEnd:GetRowAndColumnFromCellName
}
#pragma endregion

void ShowCellsVersion()
{
	printf("Aspose.Cells for C++ Version: %s\n\n", ICellsHelper::GetVersion()->charValue());
}

int main(int argc, char** argv)
{

	printf("Open main.cpp. \nIn main() method uncomment the example that you want to run.\n");
	printf("=====================================================\n");

	//Show Aspose.Cells for C++ Version
	ShowCellsVersion();

	//// =====================================================
	//// =====================================================
	//// General
	//// =====================================================
	//// =====================================================

	HelloWorld();
	ChangeValue();
	//ValueType();
	//SetStyle();
	//SetFormula();	
	//AutofilterTest();	
	//PageSetupTest();	
	//ListObjectTest();	

	//// =====================================================
	//// =====================================================
	//// Loading and Saving
	//// =====================================================
	//// =====================================================

	//OpenFileUsingPath();
	//OpenFileUsingStream();	
	//SavingToStream();
	//SavingToSomeLocation();

	//// =====================================================
	//// =====================================================
	//// Worksheets
	//// =====================================================
	//// =====================================================

	//CopyWorksheetsWithinWorkbook();
	//MoveWorksheetsWithinWorkbook();
	//AddingWorksheetsToNewExcelFile();
	//AccessingWorksheetsUsingIndex();	
	//RemoveWorksheetsUsingIndex();
	//AddPageBreaks();	
	//EnableNormalView();
	//SetZoomFactor();	
	//FreezePanes();
	//SplitPanes();
	//RemovingPanes();

	//// =====================================================
	//// =====================================================
	//// Rows and Columns
	//// =====================================================
	//// =====================================================

	//SetRowHeight();
	//SettingAllRowsHeight();
	//SettingColumWidth();
	//SettingWidthOfAllColumns();
	//CopyRows();
	//CopyColumns();
	//GroupRowsColumns();	
	//InsertRow();
	//InsertMultipleRows();
	//DeleteMultipleRows();
	//InsertColumn();
	//DeleteColumn();

	//// =====================================================
	//// =====================================================
	//// Data
	//// =====================================================
	//// =====================================================

	//UsingCellName();
	//UsingRowAndColumnIndex();
	//MaximumDisplayRange();
	//AddingDataToCells();
	//RetrievingDataFromCells();		
	//TracingDependents();	

	//// =====================================================
	//// =====================================================
	//// Tables
	//// =====================================================
	//// =====================================================

	//CreatingListObjects();
	//FormatTable();
	//SetCommentOfTableOrListObject();
	//ConvertTableToRange();

	//// =====================================================
	//// =====================================================
	//// Cells Helper
	//// =====================================================
	//// =====================================================

	//GetCellNameFromRowAndColumn();
	//GetRowAndColumnFromCellName();

	// Stop before exiting
	printf("\n\nProgram Finished. Press any key to exit....");
	getchar();
}
