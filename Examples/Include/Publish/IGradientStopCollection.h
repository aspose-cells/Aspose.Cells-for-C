#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class ICellsColor;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IGradientStop;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the gradient stop collection.
			/// </summary>
	class ASPOSE_CELLS_API IGradientStopCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Add a gradient stop.
			/// </summary>
			/// <param name="position" >The position of the stop,in unit of percentage.</param>
			/// <param name="color" >The color of the stop.</param>
			/// <param name="alpha" >The alpha of the color.</param>
			 virtual void 		Add(Aspose::Cells::Systems::Double position , intrusive_ptr<Aspose::Cells::ICellsColor> color , Aspose::Cells::Systems::Int32 alpha)=0;
			/// <summary>
			/// Add a gradient stop.
			/// </summary>
			/// <param name="position" >The position of the stop,in unit of percentage.</param>
			/// <param name="color" >The color of the stop.</param>
			/// <param name="alpha" >The alpha of the color.</param>
			 virtual void Add(Aspose::Cells::Systems::Double position , intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color , Aspose::Cells::Systems::Int32 alpha)=0;
			/// <summary>
			/// Gets the gradient stop by the index.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>The gradient stop.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGradientStop> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the gradient stop by the index.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>The gradient stop.</returns>
			 virtual void 		SetObjectByIndex(Aspose::Cells::Systems::Int32 index , intrusive_ptr<Aspose::Cells::Drawing::IGradientStop> value)=0;

	};
}
}
}
