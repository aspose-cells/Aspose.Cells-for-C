#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose{
namespace Cells{
namespace Properties{
			/// <summary>
			/// Represents identifier information.
			/// </summary>
	class ASPOSE_CELLS_API ICustomProperty : public Aspose::Cells::Systems::Object
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
			/// Returns or sets the value of the custom property.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use CustomProperty.Value property. 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetStringValue()=0;
			/// <summary>
			/// Returns or sets the value of the custom property.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use CustomProperty.Value property. 
			/// This property will be removed 12 months later since June 2010. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual void SetStringValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Returns or sets the value of the custom property.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetValue()=0;
			/// <summary>
			/// Returns or sets the value of the custom property.
			/// </summary>
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;

	};
}
}
}
