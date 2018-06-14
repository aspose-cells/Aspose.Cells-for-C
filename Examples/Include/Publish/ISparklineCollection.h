#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			class ISparkline;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates a collection of <see cref="ISparkline" />
			///  objects.
			/// </summary>
	class ASPOSE_CELLS_API ISparklineCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the <see cref="ISparkline" />
			///  element at the specified index.
			/// </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ISparkline> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Add a sparkline.
			/// </summary>
			/// <param name="dataRange" >Specifies the new data range of the sparkline.</param>
			/// <param name="row" >The row index of the location.</param>
			/// <param name="column" >The column index of the location.</param>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> dataRange , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Removes the sparkline
			/// </summary>
			/// <param name="o" />
			/// 
			 virtual void Remove(intrusive_ptr<Aspose::Cells::System::Object> o)=0;

	};
}
}
}
