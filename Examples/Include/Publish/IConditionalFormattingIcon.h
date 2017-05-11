#pragma once
#include "System/Object.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		enum IconSetType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents  the custom  icon of conditional formatting rule.
			/// </summary>
	class ASPOSE_CELLS_API IConditionalFormattingIcon : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the icon set type.
			/// </summary>
			 virtual Aspose::Cells::IconSetType GetType()=0;
			/// <summary>
			/// Sets the icon set type.
			/// </summary>
			 virtual void SetType(Aspose::Cells::IconSetType value)=0;
			/// <summary>
			/// Gets the icon's index in the icon set.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetIndex()=0;
			/// <summary>
			/// Sets the icon's index in the icon set.
			/// </summary>
			 virtual void SetIndex(Aspose::Cells::System::Int32 value)=0;

	};
}
}
