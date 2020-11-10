#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Properties {
			class IContentTypeProperty;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Properties{
			/// <summary>
			/// A collection of <see cref="IContentTypeProperty" />
			///  objects that represent additional information. 
			/// </summary>
	class ASPOSE_CELLS_API IContentTypePropertyCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds content type property information.
			/// </summary>
			/// <param name="name" >The name of the content type property.</param>
			/// <param name="value" >The value of the content type property.</param>
			 virtual Aspose::Cells::Systems::Int32 Add(intrusive_ptr<Aspose::Cells::Systems::String> name , intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Adds content type property information.
			/// </summary>
			/// <param name="name" >The name of the content type property.</param>
			/// <param name="value" >The value of the content type property.</param>
			/// <param name="type" >The type of the content type property.</param>
			 virtual Aspose::Cells::Systems::Int32 Add(intrusive_ptr<Aspose::Cells::Systems::String> name , intrusive_ptr<Aspose::Cells::Systems::String> value , intrusive_ptr<Aspose::Cells::Systems::String> type)=0;
			/// <summary>
			/// Gets the content type property by the specific index.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>The content type property</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IContentTypeProperty> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the content type property by the property name.
			/// </summary>
			/// <param name="name" >The property name.</param>
			/// <returns>The content type property</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::IContentTypeProperty> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::Systems::String> name)=0;

	};
}
}
}
