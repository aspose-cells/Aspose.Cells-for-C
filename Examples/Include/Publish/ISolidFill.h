#pragma once
#include "System/Object.h"
#include "System/Drawing/Color.h"
#include "System/Double.h"
#include "IFill.h"

namespace Aspose {
	namespace Cells {
		class ICellsColor;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents solid fill format
			/// </summary>
	class ASPOSE_CELLS_API ISolidFill : virtual public Aspose::Cells::Drawing::IFill
	{
		public:
			/// <summary>
			/// Gets the <see cref="Color" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Sets the <see cref="Color" />
			/// .
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the <see cref="ICellsColor" />
			///  oject.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetICellsColor()=0;
			/// <summary>
			/// Sets the <see cref="ICellsColor" />
			///  oject.
			/// </summary>
			 virtual void 		SetICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::System::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::System::Double value)=0;

	};
}
}
}
