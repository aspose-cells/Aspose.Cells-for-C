#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents the pivot page field items 
			/// if the pivot table data source is consolidation ranges.
			/// It only can contain up to 4 fields.
			/// </summary>
	class ASPOSE_CELLS_API IPivotPageFields : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Adds a page field.
			/// </summary>
			/// <param name="pageItems" >Page field item label</param>
			 virtual void AddPageField(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::String*>> pageItems)=0;
			/// <summary>
			/// Gets the number of page fields.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetPageFieldCount()=0;
			/// <summary>
			/// Sets which item label in each page field to use to identify the data range.
			/// The pageItemIndex.Length must be equal to PageFieldCount, so please add the page field first.
			/// </summary>
			/// <param name="rangeIndex" >The consolidation data range index.</param>
			/// <param name="pageItemIndex" >The page item index in the each page field.
			/// pageItemIndex[2] = 1 means the seconde item in the third field to use to identify this range.
			/// pageItemIndex[1] = -1 means no item in the second field to use to identify this range 
			/// and MS will auto create "blank" item in the second field  to identify this range.
			/// </param>
			 virtual void AddIdentify(Aspose::Cells::Systems::Int32 rangeIndex , intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Int32>> pageItemIndex)=0;

	};
}
}
}
