#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

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
	class ASPOSE_CELLS_API ITextBoxCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			///  Gets the <see cref="ITextBox" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ITextBox> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			///  Gets the <see cref="ITextBox" />
			///  element by the name.
			///  </summary>
			/// <param name="name" >The name of the text box.</param>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ITextBox> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> name)=0;
			/// <summary>
			/// Adds a textbox to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="height" >Height of textbox, in unit of pixel.</param>
			/// <param name="width" >Width of textbox, in unit of pixel.</param>
			/// <returns><see cref="ITextBox" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , Aspose::Cells::System::Int32 height , Aspose::Cells::System::Int32 width)=0;
			/// <summary>
			/// Remove a text box from the file.
			/// </summary>
			/// <param name="index" >The text box index.</param>
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Clear all text boxes.
			/// </summary>
			 virtual void Clear()=0;

	};
}
}
}
