#pragma once
#include "System/Object.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace Tables {
			enum TotalsCalculation;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IRange;
	}
}
namespace Aspose{
namespace Cells{
namespace Tables{
			/// <summary>
			/// Represents a column in a list.
			/// </summary>
	class ASPOSE_CELLS_API IListColumn : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the name of the column.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Sets the name of the column.
			/// </summary>
			/// <remarks>
			/// If sets the name of the column, the according cell' value will be changed too.
			/// </remarks>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the type of calculation in the Totals row of the list column.
			/// </summary>
			 virtual Aspose::Cells::Tables::TotalsCalculation GetTotalsCalculation()=0;
			/// <summary>
			/// Sets the type of calculation in the Totals row of the list column.
			/// </summary>
			 virtual void SetTotalsCalculation(Aspose::Cells::Tables::TotalsCalculation value)=0;
			/// <summary>
			/// Gets the range of this list column.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetIRange()=0;
			/// <summary>
			/// Gets and sets the formula of the list column.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetFormula()=0;
			/// <summary>
			/// Gets and sets the formula of the list column.
			/// </summary>
			 virtual void SetFormula(intrusive_ptr<Aspose::Cells::System::String> value)=0;

	};
}
}
}
