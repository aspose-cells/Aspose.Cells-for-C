#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Tables {
			class IListColumn;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Tables{
			/// <summary>
			/// Represents a collection of all the <see cref="IListColumn" />
			///  objects in the specified IListObject object. 
			/// </summary>
	class ASPOSE_CELLS_API IListColumnCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the IListColumn by the index.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>the IListColumn object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Tables::IListColumn> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the IListColumn by the name.
			/// </summary>
			/// <param name="name" >The name of the ListColumn</param>
			/// <returns>The IListColumn object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Tables::IListColumn> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> name)=0;

	};
}
}
}
