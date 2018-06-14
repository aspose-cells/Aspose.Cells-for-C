#pragma once
#include "System/Object.h"
#include "System/String.h"

namespace Aspose{
namespace Cells{
namespace Properties{
			/// <summary>
			/// Represents identifier information.
			/// </summary>
	class ASPOSE_CELLS_API IContentTypeProperty : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Returns or sets the name of the object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Returns or sets the name of the object.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Returns or sets the value of the content type property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetValue()=0;
			/// <summary>
			/// Returns or sets the value of the content type property.
			/// </summary>
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets and sets the type of the property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetType()=0;
			/// <summary>
			/// Gets and sets the type of the property.
			/// </summary>
			 virtual void SetType(intrusive_ptr<Aspose::Cells::System::String> value)=0;

	};
}
}
}
