#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

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
	class ASPOSE_CELLS_API IScenarioInputCellCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets <see cref="IScenarioInputCell" />
			///  by index in the list.
			/// </summary>
			/// <param name="index" >The specific index in the list</param>
			/// <returns>The <see cref="IScenarioInputCell" />
			///  object</returns>
			 virtual intrusive_ptr<Aspose::Cells::IScenarioInputCell> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Adds an input cell.
			/// </summary>
			/// <param name="row" >The row index of input cell.</param>
			/// <param name="column" >The column index of input cell.</param>
			/// <param name="value" >The value of input cell.</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column , intrusive_ptr<Aspose::Cells::Systems::String> value)=0;

	};
}
}
