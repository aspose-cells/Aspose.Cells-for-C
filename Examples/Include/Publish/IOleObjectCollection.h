#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

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
	class ASPOSE_CELLS_API IOleObjectCollection : public Aspose::Cells::Systems::Collections::CollectionBase
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
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> imageData)=0;
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
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 height , Aspose::Cells::Systems::Int32 width , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> imageData , intrusive_ptr<Aspose::Cells::Systems::String> linkedFile)=0;
			/// <summary>
			///  Gets the <see cref="IOleObject" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IOleObject> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Remove all embedded OLE objects.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			///  Removes the element at the specified index.
			/// </summary>
			/// <param name="index" >The specified index.</param>
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
}
