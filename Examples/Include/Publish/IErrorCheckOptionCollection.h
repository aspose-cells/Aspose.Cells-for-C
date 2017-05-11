#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"

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
	class ASPOSE_CELLS_API IErrorCheckOptionCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets <see cref="IErrorCheckOption" />
			///  object by the given index.
			/// </summary>
			/// <param name="index" >The index</param>
			/// <returns>Return <see cref="ErrorCheckOption" />
			///  object </returns>
			 virtual intrusive_ptr<Aspose::Cells::IErrorCheckOption> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Add an error check option.
			/// </summary>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::System::Int32 Add()=0;

	};
}
}
