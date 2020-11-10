#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IErrorCheckOption;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents all error check option.
			/// </summary>
	class ASPOSE_CELLS_API IErrorCheckOptionCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets <see cref="IErrorCheckOption" />
			///  object by the given index.
			/// </summary>
			/// <param name="index" >The index</param>
			/// <returns>Return <see cref="ErrorCheckOption" />
			///  object </returns>
			 virtual intrusive_ptr<Aspose::Cells::IErrorCheckOption> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Add an error check option.
			/// </summary>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Int32 Add()=0;

	};
}
}
