#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		class ICell;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the control form ComboBox.
			/// </summary>
	class ASPOSE_CELLS_API IComboBox : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Gets the index number of the currently selected item in a list box or combo box.
			/// Zero-based.
			/// </summary>
			/// <remarks>-1 presents no item is selected.</remarks>
			 virtual Aspose::Cells::Systems::Int32 GetSelectedIndex()=0;
			/// <summary>
			/// Sets the index number of the currently selected item in a list box or combo box.
			/// Zero-based.
			/// </summary>
			/// <remarks>-1 presents no item is selected.</remarks>
			 virtual void SetSelectedIndex(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the selected value of the combox box.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSelectedValue()=0;
			/// <summary>
			/// Gets the selected cell in the input range of the combo box.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetSelectedICell()=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// Indicates whether the combobox has 3-D shading.
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// Gets the number of list lines displayed in the drop-down portion of a combo box. 
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetDropDownLines()=0;
			/// <summary>
			/// Sets the number of list lines displayed in the drop-down portion of a combo box. 
			/// </summary>
			 virtual void SetDropDownLines(Aspose::Cells::Systems::Int32 value)=0;

	};
}
}
}
