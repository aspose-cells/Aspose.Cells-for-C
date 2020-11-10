#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IReferredArea;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents all referred cells and areas.
			/// </summary>
	class ASPOSE_CELLS_API IReferredAreaCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// 
			/// </summary>
			/// <param name="index" />
			/// 
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IReferredArea> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
