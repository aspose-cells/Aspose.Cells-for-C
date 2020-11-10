#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ITextBox;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates a collection of <see cref="ITextBox" />
			///  objects.
			/// </summary>
	class ASPOSE_CELLS_API ITextBoxCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			///  Gets the <see cref="ITextBox" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ITextBox> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			///  Gets the <see cref="ITextBox" />
			///  element by the name.
			///  </summary>
			/// <param name="name" >The name of the text box.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ITextBox> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::Systems::String> name)=0;
			/// <summary>
			/// Adds a textbox to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="height" >Height of textbox, in unit of pixel.</param>
			/// <param name="width" >Width of textbox, in unit of pixel.</param>
			/// <returns><see cref="ITextBox" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width)=0;
			/// <summary>
			/// Remove a text box from the file.
			/// </summary>
			/// <param name="index" >The text box index.</param>
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Clear all text boxes.
			/// </summary>
			 virtual void Clear()=0;

	};
}
}
}
