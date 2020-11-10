#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum CheckValueType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a check box object in a worksheet.
			/// </summary>
	class ASPOSE_CELLS_API ICheckBox : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Indicates if the checkbox is checked or not.
			/// </summary>
			 virtual bool GetValue()=0;
			/// <summary>
			/// Indicates if the checkbox is checked or not.
			/// </summary>
			 virtual void SetValue(bool value)=0;
			/// <summary>
			/// Gets or set checkbox' value.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetCheckedValue.</remarks>
			 virtual Aspose::Cells::Drawing::CheckValueType GetCheckValue()=0;
			/// <summary>
			/// Gets or set checkbox' value.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetCheckedValue.</remarks>
			 virtual void SetCheckValue(Aspose::Cells::Drawing::CheckValueType value)=0;
			/// <summary>
			/// Gets or set checkbox' value.
			/// </summary>
			 virtual Aspose::Cells::Drawing::CheckValueType GetCheckedValue()=0;
			/// <summary>
			/// Gets or set checkbox' value.
			/// </summary>
			 virtual void SetCheckedValue(Aspose::Cells::Drawing::CheckValueType value)=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual void SetShadow(bool value)=0;

	};
}
}
}
