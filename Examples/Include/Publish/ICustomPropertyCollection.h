#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Properties {
			class ICustomProperty;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Properties{
			/// <summary>
			/// A collection of <see cref="ICustomProperty" />
			///  objects that represent additional information. 
			/// </summary>
	class ASPOSE_CELLS_API ICustomPropertyCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds custom property information.
			/// </summary>
			/// <param name="name" >The name of the custom property.</param>
			/// <param name="value" >The value of the custom property.</param>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the custom property by the specific index.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>The custom property</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::ICustomProperty> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the custom property by the property name.
			/// </summary>
			/// <param name="name" >The property name.</param>
			/// <returns>The custom property</returns>
			 virtual intrusive_ptr<Aspose::Cells::Properties::ICustomProperty> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> name)=0;

	};
}
}
}
