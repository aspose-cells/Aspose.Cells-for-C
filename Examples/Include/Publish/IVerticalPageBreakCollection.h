#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IVerticalPageBreak;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="IVerticalPageBreak" />
			///  objects.
			/// </summary>
	class ASPOSE_CELLS_API IVerticalPageBreakCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			///  Gets the <see cref="IVerticalPageBreak" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IVerticalPageBreak> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the <see cref="IVerticalPageBreak" />
			///  element with the specified cell name.
			/// </summary>
			/// <param name="cellName" >Cell name.</param>
			/// <returns>The element with the specified cell name.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IVerticalPageBreak> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::Systems::String> cellName)=0;
			/// <summary>
			/// Adds a vertical page break to the collection.
			/// </summary>
			/// <param name="startRow" >Start row index, zero based.</param>
			/// <param name="endRow" >End row index, zero based.</param>
			/// <param name="column" >Column index, zero based.</param>
			/// <returns><see cref="IVerticalPageBreak" />
			///  object index.</returns>
			/// <remarks>This method is used to add an IVerticalPageBreak object within a print area.</remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 startRow , Aspose::Cells::Systems::Int32 endRow , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Adds a vertical page break to the collection.
			/// </summary>
			/// <param name="column" >Cell column index, zero based.</param>
			/// <returns><see cref="IVerticalPageBreak" />
			///  object index.</returns>
			/// <remarks>Page break is added in the top left of the cell.
			/// Please set a horizontal page break and a vertical page break concurrently.</remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Adds a vertical page break to the collection.
			/// </summary>
			/// <param name="row" >Cell row index, zero based.</param>
			/// <param name="column" >Cell column index, zero based.</param>
			/// <returns><see cref="IVerticalPageBreak" />
			///  object index.</returns>
			/// <remarks>Page break is added in the top left of the cell.
			/// Please set a horizontal page break and a vertical page break concurrently.</remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Adds a vertical page break to the collection.
			/// </summary>
			/// <param name="cellName" >Cell name.</param>
			/// <returns><see cref="IVerticalPageBreak" />
			///  object index.</returns>
			/// <remarks>Page break is added in the top left of the cell.
			/// Please set a horizontal page break and a vertical page break concurrently.</remarks>
			 virtual Aspose::Cells::Systems::Int32 Add(intrusive_ptr<Aspose::Cells::Systems::String> cellName)=0;
			/// <summary>
			/// Removes the IVerticalPageBreak element at a specified name.
			/// </summary>
			/// <param name="index" >Element index, zero based.</param>
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
