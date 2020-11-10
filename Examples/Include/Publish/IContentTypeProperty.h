#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose{
namespace Cells{
namespace Properties{
			/// <summary>
			/// Represents identifier information.
			/// </summary>
	class ASPOSE_CELLS_API IContentTypeProperty : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Returns or sets the name of the object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Returns or sets the name of the object.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Returns or sets the value of the content type property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetValue()=0;
			/// <summary>
			/// Returns or sets the value of the content type property.
			/// </summary>
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets and sets the type of the property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetType()=0;
			/// <summary>
			/// Gets and sets the type of the property.
			/// </summary>
			 virtual void SetType(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;

	};
}
}
}
