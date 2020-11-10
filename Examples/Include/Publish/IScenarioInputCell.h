#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents input cell for the scenario.
			/// </summary>
	class ASPOSE_CELLS_API IScenarioInputCell : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the row index of the input cell.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetRow()=0;
			/// <summary>
			/// Gets the column index of the input cell.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetColumn()=0;
			/// <summary>
			/// Gets the input cell address.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets value of the input cell.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetValue()=0;
			/// <summary>
			/// Sets value of the input cell.
			/// </summary>
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates whether input cell is deleted.
			/// </summary>
			 virtual bool IsDeleted()=0;
			/// <summary>
			/// Indicates whether input cell is deleted.
			/// </summary>
			 virtual void SetDeleted(bool value)=0;

	};
}
}
