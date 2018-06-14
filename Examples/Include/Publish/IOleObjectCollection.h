#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IOleObject;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents embedded OLE objects.
			/// </summary>
	class ASPOSE_CELLS_API IOleObjectCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds an OleObject to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="height" >Height of oleObject, in unit of pixel.</param>
			/// <param name="width" >Width of oleObject, in unit of pixel.</param>
			/// <param name="imageData" > Image of ole object as byte array.</param>
			/// <returns><see cref="IOleObject" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , Aspose::Cells::System::Int32 height , Aspose::Cells::System::Int32 width , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageData)=0;
			/// <summary>
			/// Adds an linked OleObject to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="height" >Height of oleObject, in unit of pixel.</param>
			/// <param name="width" >Width of oleObject, in unit of pixel.</param>
			/// <param name="imageData" > Image of ole object as byte array.</param>
			/// <param name="linkedFile" />
			/// 
			/// <returns><see cref="IOleObject" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , Aspose::Cells::System::Int32 height , Aspose::Cells::System::Int32 width , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> imageData , intrusive_ptr<Aspose::Cells::System::String> linkedFile)=0;
			/// <summary>
			///  Gets the <see cref="IOleObject" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IOleObject> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Remove all embedded OLE objects.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			///  Removes the element at the specified index.
			/// </summary>
			/// <param name="index" >The specified index.</param>
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;

	};
}
}
}
