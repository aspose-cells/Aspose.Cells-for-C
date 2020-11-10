#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum TrendlineType;
			class ITrendline;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents a collection of all the <see cref="ITrendline" />
			///  objects for the specified data series.
			/// </summary>
	class ASPOSE_CELLS_API ITrendlineCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a <seealso cref="ITrendline" />
			///  object to this collection with specified type.
			/// </summary>
			/// <param name="type" >Trendline type.</param>
			/// <returns><see cref="ITrendline" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Charts::TrendlineType type)=0;
			/// <summary>
			/// Adds a <seealso cref="ITrendline" />
			///  object to this collection with specified type and name.
			/// </summary>
			/// <param name="type" >Trendline type.</param>
			/// <param name="name" >Trendline name.</param>
			/// <returns><see cref="ITrendline" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Charts::TrendlineType type , intrusive_ptr<Aspose::Cells::Systems::String> name)=0;
			/// <summary>
			/// Gets a <seealso cref="ITrendline" />
			///  object by its index.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ITrendline> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
}
