#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Pivot {
			class IPivotFilter;
			enum PivotFilterType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents a collection of all the PivotFilter objects 
			/// </summary>
	class ASPOSE_CELLS_API IPivotFilterCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the pivotfilter object at the specific index.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFilter> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Adds a PivotFilter Object to the specific type 
			/// </summary>
			/// <param name="fieldIndex" >the PivotField index </param>
			/// <param name="type" >the PivotFilter type </param>
			/// <returns>the index of  the PivotFilter Object in this PivotFilterCollection.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Systems::Int32 fieldIndex , Aspose::Cells::Pivot::PivotFilterType type)=0;
			/// <summary>
			/// Clear PivotFilter from the specific PivotField 
			/// </summary>
			/// <param name="fieldIndex" >the PivotField index </param>
			 virtual void ClearFilter(Aspose::Cells::Systems::Int32 fieldIndex)=0;

	};
}
}
}
