#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Pivot {
			class IPivotItem;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents a collection of all the PivotItem objects in the PivotField's 
			/// </summary>
	class ASPOSE_CELLS_API IPivotItemCollection : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotItem> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// 
			/// </summary>
			/// <param name="itemValue" />
			/// 
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotItem> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::Systems::String> itemValue)=0;
			/// <summary>
			/// Gets the count of the pivot items.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCount()=0;
			/// <summary>
			/// Directly chanages the orders of the two items.
			/// </summary>
			/// <param name="sourceIndex" >The current index</param>
			/// <param name="destIndex" >The dest index</param>
			 virtual void ChangeitemsOrder(Aspose::Cells::Systems::Int32 sourceIndex , Aspose::Cells::Systems::Int32 destIndex)=0;

	};
}
}
}
