#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			class ISparklineGroup;
			enum SparklineType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class ICellArea;
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates a collection of <see cref="ISparklineGroup" />
			///  objects.
			/// </summary>
	class ASPOSE_CELLS_API ISparklineGroupCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the <see cref="ISparklineGroup" />
			///  element at the specified index.
			/// </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ISparklineGroup> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Adds an <see cref="ISparklineGroup" />
			///  item to the collection.
			/// </summary>
			/// <param name="type" >Specifies the type of the Sparkline group.</param>
			/// <param name="dataRange" >Specifies the data range of the sparkline group.</param>
			/// <param name="isVertical" >Specifies whether to plot the sparklines from the data range by row or by column.</param>
			/// <param name="locationRange" >Specifies where the sparklines to be placed.</param>
			/// <returns><see cref="ISparklineGroup" />
			///  object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 		AddISparklineGroup(Aspose::Cells::Charts::SparklineType type , intrusive_ptr<Aspose::Cells::Systems::String> dataRange , bool isVertical , intrusive_ptr<Aspose::Cells::ICellArea> locationRange)=0;
			/// <summary>
			/// Clears the sparklines that is inside an area of cells.
			/// </summary>
			/// <param name="cellArea" >Specifies the area of cells</param>
			 virtual void 		ClearISparklines(intrusive_ptr<Aspose::Cells::ICellArea> cellArea)=0;
			/// <summary>
			/// Clears the sparkline groups that overlaps an area of cells.
			/// </summary>
			/// <param name="cellArea" >Specifies the area of cells</param>
			 virtual void 		ClearISparklineGroups(intrusive_ptr<Aspose::Cells::ICellArea> cellArea)=0;

	};
}
}
}
