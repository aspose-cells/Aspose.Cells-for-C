#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IRange;
		class INameCollection;
		class IWorksheet;
		enum SheetType;
		class IExternalLinkCollection;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Properties {
			class IBuiltInDocumentPropertyCollection;
			class ICustomDocumentPropertyCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="IWorksheet" />
			///  objects.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// 
			/// intrusive_ptr<Aspose::Cells::IWorksheetCollection> sheets = workbook->GetIWorksheets();
			/// 
			/// //Add a worksheet
			/// sheets->Add();
			/// 
			/// //Change the name of a worksheet
			/// sheets->GetObjectByIndex(0)->SetName(new Aspose::Cells::Systems::String("First Sheet"));
			/// 
			/// //Set the active sheet to the second worksheet
			/// sheets->SetActiveSheetIndex(1);
			/// 
			/// 	
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
	class ASPOSE_CELLS_API IWorksheetCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Indicates whether refresh all connections on opening file in MS Excel.
			/// </summary>
			/// 
			/// 
			 virtual bool IsRefreshAllConnections()=0;
			 
			/// <summary>
			/// Indicates whether refresh all connections on opening file in MS Excel.
			/// </summary>
			/// 
			/// 
			 virtual void SetRefreshAllConnections(bool value)=0;
			/// <summary>
			///  Creates a <see cref="IRange" />
			///  object from an address of the range.
			/// </summary>
			/// <param name="address" >The address of the range.</param>
			/// <param name="sheetIndex" >The sheet index.</param>
			/// <returns>A <see cref="IRange" />
			///  object</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		CreateIRange(intrusive_ptr<Aspose::Cells::Systems::String> address , Aspose::Cells::Systems::Int32 sheetIndex)=0;
			/// <summary>
			/// Gets the collection of all the Name objects in the spreadsheet. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::INameCollection> 		GetINames()=0;
			/// <summary>
			///  Gets the <see cref="IWorksheet" />
			///  element at the specified index.
			///  </summary>
			/// 
			/// <param name="index" >The zero based index of the element.</param>
			/// 
			/// <returns>The element at the specified index.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			 
			/// <summary>
			/// Gets the <see cref="IWorksheet" />
			///  element with the specified name.
			/// </summary>
			/// 
			/// <param name="sheetName" >Worksheet name</param>
			/// 
			/// <returns>The element with the specified name.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::Systems::String> sheetName)=0;
			 
			/// <summary>
			/// Gets the worksheet by the code name.
			/// </summary>
			/// 
			/// <param name="codeName" >Worksheet code name.</param>
			/// 
			/// <returns>The element with the specified code name.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetISheetByCodeName(intrusive_ptr<Aspose::Cells::Systems::String> codeName)=0;
			 
			/// <summary>
			/// Represents the index of active worksheet when the spreadsheet is opened.
			/// </summary>
			/// 
			/// <remarks>Sheet index is zero based.</remarks>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetActiveSheetIndex()=0;
			 
			/// <summary>
			/// Represents the index of active worksheet when the spreadsheet is opened.
			/// </summary>
			/// 
			/// <remarks>Sheet index is zero based.</remarks>
			/// 
			/// 
			 virtual void SetActiveSheetIndex(Aspose::Cells::Systems::Int32 value)=0;
			 
			/// <summary>
			/// Sorts defined names.
			/// </summary>
			/// 
			/// <remarks>If you create a large amount of named ranges in the Excel file, 
			/// please call this method after all named ranges are created and before saving </remarks>
			/// 
			/// 
			 virtual void SortNames()=0;
			 
			/// <summary>
			/// Insert a worksheet.
			/// </summary>
			/// 
			/// <param name="index" >The sheet index</param>
			/// 
			/// <param name="sheetType" >The sheet type.</param>
			/// 
			/// <returns>Returns an inserted worksheet.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		InsertIWorksheet(Aspose::Cells::Systems::Int32 index , Aspose::Cells::SheetType sheetType)=0;
			 
			/// <summary>
			/// Insert a worksheet.
			/// </summary>
			/// 
			/// <param name="index" >The sheet index</param>
			/// 
			/// <param name="sheetType" >The sheet type.</param>
			/// 
			/// <param name="sheetName" >The sheet name.</param>
			/// 
			/// <returns>Returns an inserted worksheet.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		InsertIWorksheet(Aspose::Cells::Systems::Int32 index , Aspose::Cells::SheetType sheetType , intrusive_ptr<Aspose::Cells::Systems::String> sheetName)=0;
			 
			/// <summary>
			///  Adds a worksheet to the collection.
			///  </summary>
			/// 
			/// <param name="type" >Worksheet type.</param>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object index.</returns>
			/// 
			/// <example>
			///  <code>
			///  [C++]
			///
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			///  workbook->GetIWorksheets()->Add(Aspose::Cells::SheetType_Chart);
			///  intrusive_ptr<Aspose::Cells::ICells> cells = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICells();
			///  cells->GetObjectByIndex(new String("c2"))->PutValue(5000);
			///  cells->GetObjectByIndex(new String("c3"))->PutValue(3000);
			///  cells->GetObjectByIndex(new String("c4"))->PutValue(4000);
			///  cells->GetObjectByIndex(new String("c5"))->PutValue(5000);
			///  cells->GetObjectByIndex(new String("c6"))->PutValue(6000);
			/// 	
			///  </code>
			/// 
			///  </example>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::SheetType type)=0;
			 
			/// <summary>
			/// Swaps the two sheets.
			/// </summary>
			/// 
			/// <param name="sheetIndex1" >The first worksheet.</param>
			/// 
			/// <param name="sheetIndex2" >The second worksheet.</param>
			/// 
			/// 
			 virtual void SwapSheet(Aspose::Cells::Systems::Int32 sheetIndex1 , Aspose::Cells::Systems::Int32 sheetIndex2)=0;
			 
			/// <summary>
			/// Adds a worksheet to the collection.
			/// </summary>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object index.</returns>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 Add()=0;
			 
			/// <summary>
			/// Adds a worksheet to the collection.
			/// </summary>
			/// 
			/// <param name="sheetName" >Worksheet name</param>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		AddIWorksheet(intrusive_ptr<Aspose::Cells::Systems::String> sheetName)=0;
			 
			/// <summary>
			/// Removes the element at a specified name.
			/// </summary>
			/// 
			/// <param name="name" >The name of the element to remove.</param>
			/// 
			/// 
			 virtual void RemoveAt(intrusive_ptr<Aspose::Cells::Systems::String> name)=0;
			 
			/// <summary>
			/// Removes the element at a specified index.
			/// </summary>
			/// 
			/// <param name="index" >The index value of the element to remove.</param>
			/// 
			/// 
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;
			 
			/// <summary>
			/// Clear all worksheets.
			/// </summary>
			/// 
			/// <remarks>
			/// A workbook must contains a worksheet.
			/// </remarks>
			/// 
			/// 
			 virtual void Clear()=0;
			 
			/// <summary>
			/// Adds a worksheet to the collection and copies data from an existed worksheet.
			/// </summary>
			/// 
			/// <param name="sheetName" >Name of source worksheet.</param>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object index.</returns>
			/// 
			/// <exception cref="ICellsException" >Specifies an invalid worksheet name.</exception>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 AddCopy(intrusive_ptr<Aspose::Cells::Systems::String> sheetName)=0;
			 
			/// <summary>
			/// Adds a worksheet to the collection and copies data from an existed worksheet.
			/// </summary>
			/// 
			/// <param name="sheetIndex" >Index of source worksheet.</param>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object index.</returns>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 AddCopy(Aspose::Cells::Systems::Int32 sheetIndex)=0;
			 
			/// <summary>
			/// Gets Range object by pre-defined name.
			/// </summary>
			/// 
			/// <param name="rangeName" >Name of range.</param>
			/// 
			/// <returns>Range object.<p/>
			/// Returns null if the named range does not exist.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetIRangeByName(intrusive_ptr<Aspose::Cells::Systems::String> rangeName)=0;
			 
			/// <summary>
			/// Gets all pre-defined named ranges in the spreadsheet.
			/// </summary>
			/// 
			/// <returns>An array of Range objects.<p/>
			/// Returns null if the named range does not exist.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IRange*>> 		GetNamedIRanges()=0;
			 
			/// <summary>
			/// Gets all pre-defined named ranges in the spreadsheet.
			/// </summary>
			/// 
			/// <returns>An array of Range objects.<p/>
			/// Returns null if the named range does not exist.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IRange*>> 		GetNamedIRangesAndTables()=0;
			/// <summary>
			/// Returns an IDocumentProperty collection that represents all the built-in document properties of the spreadsheet. 
			/// </summary>
			/// <remarks>A new property cannot be added to built-in document properties list. You can only get a built-in property and change its value.
			/// The following is the built-in properties name list:
			/// <p>Title</p>
			/// <p>Subject</p>
			/// <p>Author</p>
			/// <p>Keywords</p>
			/// <p>Comments</p>
			/// <p>Template</p>
			/// <p>Last Author</p>
			/// <p>Revision Number</p>
			/// <p>Application Name</p>
			/// <p>Last Print Date</p>
			/// <p>Creation Date</p>
			/// <p>Last Save Time</p>
			/// <p>Total Editing Time</p>
			/// <p>Number of Pages</p>
			/// <p>Number of Words</p>
			/// <p>Number of Characters</p>
			/// <p>Security</p>
			/// <p>Category</p>
			/// <p>Format</p>
			/// <p>Manager</p>
			/// <p>Company</p>
			/// <p>Number of Bytes</p>
			/// <p>Number of Lines</p>
			/// <p>Number of Paragraphs</p>
			/// <p>Number of Slides</p>
			/// <p>Number of Notes</p>
			/// <p>Number of Hidden Slides</p>
			/// <p>Number of Multimedia Clips</p>
			/// </remarks>
			/// <example><code>
			/// [C++]
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<Aspose::Cells::Properties::IDocumentProperty> doc = 
			/// workbook->GetIWorksheets()->GetIBuiltInDocumentProperties()->GetObjectByIndex(new String("Author"));
			/// doc->SetValue(new String("John Smith"));
			/// 
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IBuiltInDocumentPropertyCollection> 		GetIBuiltInDocumentProperties()=0;
			/// <summary>
			/// Returns an ICustomDocumentPropertyCollection that represents all the custom document properties of the spreadsheet. 
			/// </summary>
			/// <example><code>
			/// [C++]
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<Aspose::Cells::Properties::ICustomDocumentPropertyCollection> doc =
			/// 	workbook->GetIWorksheets()->GetICustomDocumentProperties();
			/// doc->AddLinkToContentProperty(new String("Checked by"), new String("Jane"));
			/// 
			/// </code>
			/// </example>
			 virtual intrusive_ptr<Aspose::Cells::Properties::ICustomDocumentPropertyCollection> 		GetICustomDocumentProperties()=0;
			/// <summary>
			/// Gets and Sets displayed size when Workbook file is used as an Ole object.
			/// </summary>
			/// 
			/// <remarks>
			/// Null means no ole size setting.
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetOleSize()=0;
			 
			/// <summary>
			/// Gets and Sets displayed size when Workbook file is used as an Ole object.
			/// </summary>
			/// 
			/// <remarks>
			/// Null means no ole size setting.
			/// </remarks>
			/// 
			/// 
			 virtual void SetOleSize(intrusive_ptr<Aspose::Cells::Systems::Object> value)=0;
			 
			/// <summary>
			/// Sets displayed size when Workbook file is used as an Ole object.
			/// </summary>
			/// 
			/// <param name="startRow" >Start row index.</param>
			/// 
			/// <param name="endRow" >End row index.</param>
			/// 
			/// <param name="startColumn" >Start column index.</param>
			/// 
			/// <param name="endColumn" >End column index.</param>
			/// 
			/// <remarks>This method is generally used to adjust display size in ppt file or doc file.</remarks>
			/// 
			/// 
			 virtual void SetOleSize(Aspose::Cells::Systems::Int32 startRow , Aspose::Cells::Systems::Int32 endRow , Aspose::Cells::Systems::Int32 startColumn , Aspose::Cells::Systems::Int32 endColumn)=0;
			/// <summary>
			/// Represents external links in a workbook.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IExternalLinkCollection> 		GetIExternalLinks()=0;
			/// <summary>
			/// Clears pivot tables from the spreadsheet.
			/// </summary>
			  virtual void ClearPivottables()=0;

	};
}
}
