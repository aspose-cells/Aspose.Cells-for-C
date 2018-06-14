#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Drawing/Color.h"
#include "System/Collections/CollectionBase.h"

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
	class ASPOSE_CELLS_API IGradientStopCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Add a gradient stop.
			/// </summary>
			/// <param name="position" >The position of the stop,in unit of percentage.</param>
			/// <param name="color" >The color of the stop.</param>
			/// <param name="alpha" >The alpha of the color.</param>
			 virtual void 		Add(Aspose::Cells::System::Double position , intrusive_ptr<Aspose::Cells::ICellsColor> color , Aspose::Cells::System::Int32 alpha)=0;
			/// <summary>
			/// Add a gradient stop.
			/// </summary>
			/// <param name="position" >The position of the stop,in unit of percentage.</param>
			/// <param name="color" >The color of the stop.</param>
			/// <param name="alpha" >The alpha of the color.</param>
			 virtual void Add(Aspose::Cells::System::Double position , intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Int32 alpha)=0;
			/// <summary>
			/// Gets the gradient stop by the index.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>The gradient stop.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGradientStop> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the gradient stop by the index.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>The gradient stop.</returns>
			 virtual void 		SetObjectByIndex(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Drawing::IGradientStop> value)=0;

	};
}
}
}
