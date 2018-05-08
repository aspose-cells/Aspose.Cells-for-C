#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IScenarioInputCell;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the list of the scenario's input cells. 
			/// </summary>
	class ASPOSE_CELLS_API IScenarioInputCellCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets <see cref="IScenarioInputCell" />
			///  by index in the list.
			/// </summary>
			/// <param name="index" >The specific index in the list</param>
			/// <returns>The <see cref="IScenarioInputCell" />
			///  object</returns>
			 virtual intrusive_ptr<Aspose::Cells::IScenarioInputCell> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Adds an input cell.
			/// </summary>
			/// <param name="row" >The row index of input cell.</param>
			/// <param name="column" >The column index of input cell.</param>
			/// <param name="value" >The value of input cell.</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> value)=0;

	};
}
}
