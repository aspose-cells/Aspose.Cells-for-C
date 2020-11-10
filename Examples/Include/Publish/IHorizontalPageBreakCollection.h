#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IHorizontalPageBreak;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="IHorizontalPageBreak" />
			///  objects.
			/// </summary>
			/// <example><code>
			/// [C++]
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// //Add a page break at G5
			/// worksheet->GetIHorizontalPageBreaks()->Add(new String("G5"));
			/// worksheet->GetIVerticalPageBreaks()->Add(new String("G5"));
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IHorizontalPageBreakCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			///  Gets the <see cref="IHorizontalPageBreak" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IHorizontalPageBreak> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the <see cref="IHorizontalPageBreak" />
			///  element with the specified cell name.
			/// </summary>
			/// <param name="cellName" >Cell name.</param>
			/// <returns>The element with the specified cell name.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IHorizontalPageBreak> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::Systems::String> cellName)=0;
			/// <summary>
			/// Adds a horizontal page break to the collection.
			/// </summary>
			/// <param name="row" >Row index, zero based.</param>
			/// <param name="startColumn" >Start column index, zero based.</param>
			/// <param name="endColumn" >End column index, zero based.</param>
			/// <returns><see cref="IHorizontalPageBreak" />
			///  object index.</returns>
			/// <remarks>This method is used to add a horizontal page break within a print area.</remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 startColumn , Aspose::Cells::Systems::Int32 endColumn)=0;
			/// <summary>
			/// Adds a horizontal page break to the collection.
			/// </summary>
			/// <param name="row" >Cell row index, zero based.</param>
			/// <returns><see cref="IHorizontalPageBreak" />
			///  object index.</returns>
			/// <remarks>Page break is added in the top left of the cell.
			/// Please set a horizontal page break and a vertical page break concurrently.</remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 row)=0;
			/// <summary>
			/// Adds a horizontal page break to the collection.
			/// </summary>
			/// <param name="row" >Cell row index, zero based.</param>
			/// <param name="column" >Cell column index, zero based.</param>
			/// <returns><see cref="IHorizontalPageBreak" />
			///  object index.</returns>
			/// <remarks>Page break is added in the top left of the cell.
			/// Please set a horizontal page break and a vertical page break concurrently.</remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Adds a horizontal page break to the collection.
			/// </summary>
			/// <param name="cellName" >Cell name.</param>
			/// <returns><see cref="IHorizontalPageBreak" />
			///  object index.</returns>
			/// <remarks>Page break is added in the top left of the cell.
			/// Please set a horizontal page break and a vertical page break concurrently.</remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(intrusive_ptr<Aspose::Cells::Systems::String> cellName)=0;
			/// <summary>
			/// Removes the IHorizontalPageBreak element at a specified name.
			/// </summary>
			/// <param name="index" >Element index, zero based.</param>
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
