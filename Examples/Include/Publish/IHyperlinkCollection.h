#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IHyperlink;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="IHyperlink" />
			///  objects.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// 
			/// //Obtaining the reference of the newly added worksheet by passing its sheet index
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// 
			/// //Get Hyperlinks Collection
			/// intrusive_ptr<IHyperlinkCollection> hyperlinks = worksheet->GetIHyperlinks();
			/// 
			/// //Adding a hyperlink to a URL at "A1" cell
			/// hyperlinks->Add(new String("A1"), 1, 1, new String("http://www.aspose.com"));
			/// 
			/// //Saving the Excel file
			/// workbook->Save(new String("c:\\IHyperlinkCollectionTest.xls"));
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IHyperlinkCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a hyperlink to a specified cell or a range of cells.
			/// </summary>
			/// <param name="firstRow" >First row of the hyperlink range.</param>
			/// <param name="firstColumn" >First column of the hyperlink range.</param>
			/// <param name="totalRows" >Number of rows in this hyperlink range.</param>
			/// <param name="totalColumns" >Number of columns of this hyperlink range.</param>
			/// <param name="address" >Address of the hyperlink.</param>
			/// <returns><see cref="IHyperlink" />
			///  object index.</returns>
			/// <example><code>
			/// [C++]
			/// 
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// worksheet->GetIHyperlinks()->Add(new String("A4"), 1, 1, new String("http://www.aspose.com"));
			/// worksheet->GetIHyperlinks()->Add(new String("A5"), 1, 1, new String("c:\\IHyperlinkCollectionTest.xls"));
			/// workbook->Save(new String("c:\\IHyperlinkCollectionTest2.xls"));
			/// 
			/// </code>
			/// </example>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , intrusive_ptr<Aspose::Cells::System::String> address)=0;
			/// <summary>
			/// Adds a hyperlink to a specified cell or a range of cells.
			/// </summary>
			/// <param name="cellName" >Cell name.</param>
			/// <param name="totalRows" >Number of rows in this hyperlink range.</param>
			/// <param name="totalColumns" >Number of columns of this hyperlink range.</param>
			/// <param name="address" >Address of the hyperlink.</param>
			/// <returns><see cref="IHyperlink" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> cellName , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , intrusive_ptr<Aspose::Cells::System::String> address)=0;
			/// <summary>
			/// Adds a hyperlink to a specified cell or a range of cells.
			/// </summary>
			/// <param name="startCellName" >The top-left cell of the range.</param>
			/// <param name="endCellName" >The bottom-right cell of the range.</param>
			/// <param name="address" >Address of the hyperlink.</param>
			/// <param name="textToDisplay" >The text to be displayed for the specified hyperlink.</param>
			/// <param name="screenTip" >The screen tip text for the specified hyperlink.</param>
			/// <returns><see cref="IHyperlink" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> startCellName , intrusive_ptr<Aspose::Cells::System::String> endCellName , intrusive_ptr<Aspose::Cells::System::String> address , intrusive_ptr<Aspose::Cells::System::String> textToDisplay , intrusive_ptr<Aspose::Cells::System::String> screenTip)=0;
			/// <summary>
			///  Gets the <see cref="IHyperlink" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IHyperlink> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Remove the hyperlink at the specified index.
			/// </summary>
			/// <param name="index" >The zero based index of the element.</param>
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Clears all hyperlinks.
			/// </summary>
			 virtual void Clear()=0;

	};
}
}
