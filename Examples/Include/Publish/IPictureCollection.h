#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/IO/Stream.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

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
	class ASPOSE_CELLS_API IPictureCollection : public Aspose::Cells::System::Collections::CollectionBase
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
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , Aspose::Cells::System::Int32 lowerRightRow , Aspose::Cells::System::Int32 lowerRightColumn , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream)=0;
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
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , Aspose::Cells::System::Int32 lowerRightRow , Aspose::Cells::System::Int32 lowerRightColumn , intrusive_ptr<Aspose::Cells::System::String> fileName)=0;
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="stream" >Stream object which contains the image data.</param>
			/// <returns><see cref="IPicture" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream)=0;
			/// <summary>
			/// Adds a picture to the collection.
			/// </summary>
			/// <param name="upperLeftRow" >Upper left row index.</param>
			/// <param name="upperLeftColumn" >Upper left column index.</param>
			/// <param name="fileName" >Image filename.</param>
			/// <returns><see cref="IPicture" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , intrusive_ptr<Aspose::Cells::System::String> fileName)=0;
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
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::System::Int32 widthScale , Aspose::Cells::System::Int32 heightScale)=0;
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
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 upperLeftRow , Aspose::Cells::System::Int32 upperLeftColumn , intrusive_ptr<Aspose::Cells::System::String> fileName , Aspose::Cells::System::Int32 widthScale , Aspose::Cells::System::Int32 heightScale)=0;
			/// <summary>
			///  Gets the <see cref="IPicture" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPicture> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Clear all pictures.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			/// Remove shapes at the specific index
			/// </summary>
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;

	};
}
}
}
