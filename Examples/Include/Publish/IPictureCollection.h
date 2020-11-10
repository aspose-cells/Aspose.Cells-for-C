#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IPicture;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates a collection of <see cref="IPicture" />
			///  objects.
			/// </summary>
	class ASPOSE_CELLS_API IPictureCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="lowerRightRow" >Lower right row index</param>
			/// <param name="lowerRightColumn" >Lower right column index</param>
			/// <param name="stream" >Stream object which contains the image data.</param>
			/// <returns><see cref="IPicture" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 lowerRightRow , Aspose::Cells::Systems::Int32 lowerRightColumn , intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream)=0;
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="lowerRightRow" >Lower right row index</param>
			/// <param name="lowerRightColumn" >Lower right column index</param>
			/// <param name="fileName" >Image filename.</param>
			/// <returns><see cref="IPicture" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , Aspose::Cells::Systems::Int32 lowerRightRow , Aspose::Cells::Systems::Int32 lowerRightColumn , intrusive_ptr<Aspose::Cells::Systems::String> fileName)=0;
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="stream" >Stream object which contains the image data.</param>
			/// <returns><see cref="IPicture" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream)=0;
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="fileName" >Image filename.</param>
			/// <returns><see cref="IPicture" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , intrusive_ptr<Aspose::Cells::Systems::String> fileName)=0;
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="stream" >Stream object which contains the image data.</param>
			/// <param name="widthScale" >Scale of image width, a percentage.</param>
			/// <param name="heightScale" >Scale of image height, a percentage.</param>
			/// <returns><see cref="IPicture" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , Aspose::Cells::Systems::Int32 widthScale , Aspose::Cells::Systems::Int32 heightScale)=0;
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="fileName" >Image filename.</param>
			/// <param name="widthScale" >Scale of image width, a percentage.</param>
			/// <param name="heightScale" >Scale of image height, a percentage.</param>
			/// <returns><see cref="IPicture" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 upperLeftRow , Aspose::Cells::Systems::Int32 upperLeftColumn , intrusive_ptr<Aspose::Cells::Systems::String> fileName , Aspose::Cells::Systems::Int32 widthScale , Aspose::Cells::Systems::Int32 heightScale)=0;
			/// <summary>
			///  Gets the <see cref="IPicture" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Clear all pictures.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			/// Remove shapes at the specific index
			/// </summary>
			 virtual void RemoveAt(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
}
