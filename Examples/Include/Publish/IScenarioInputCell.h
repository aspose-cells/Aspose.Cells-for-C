#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents input cell for the scenario.
			/// </summary>
	class ASPOSE_CELLS_API IScenarioInputCell : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the row index of the input cell.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetRow()=0;
			/// <summary>
			/// Gets the column index of the input cell.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetColumn()=0;
			/// <summary>
			/// Gets the input cell address.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Gets value of the input cell.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetValue()=0;
			/// <summary>
			/// Sets value of the input cell.
			/// </summary>
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether input cell is deleted.
			/// </summary>
			 virtual bool IsDeleted()=0;
			/// <summary>
			/// Indicates whether input cell is deleted.
			/// </summary>
			 virtual void SetIsDeleted(bool value)=0;

	};
}
}
