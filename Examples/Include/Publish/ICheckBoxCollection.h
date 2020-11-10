#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ICheckBox;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a collection of <see cref="CheckBox" />
			///  objects in a worksheet.
			/// </summary>
	class ASPOSE_CELLS_API ICheckBoxCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a checkBox to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="height" >Height of checkBox, in unit of pixel.</param>
			/// <param name="width" >Width of checkBox, in unit of pixel.</param>
			/// <returns><see cref="ICheckBox" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			///  Gets the <see cref="ICheckBox" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ICheckBox> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index) = 0;

	};
}
}
}
