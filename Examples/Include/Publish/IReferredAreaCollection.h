#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"

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
	class ASPOSE_CELLS_API IReferredAreaCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// 
			/// </summary>
			/// <param name="index" />
			/// 
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IReferredArea> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;

	};
}
}
