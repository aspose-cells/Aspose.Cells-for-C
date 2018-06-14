#pragma once
#include "System/Object.h"
#include "System/Drawing/Color.h"
#include "System/Double.h"
#include "IFill.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum FillPattern;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class ICellsColor;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents pattern fill format
			/// </summary>
	class ASPOSE_CELLS_API IPatternFill : virtual public Aspose::Cells::Drawing::IFill
	{
		public:
			/// <summary>
			/// Gets the fill pattern type
			/// </summary>
			 virtual Aspose::Cells::Drawing::FillPattern GetPattern()=0;
			/// <summary>
			/// Sets the fill pattern type
			/// </summary>
			 virtual void SetPattern(Aspose::Cells::Drawing::FillPattern value)=0;
			/// <summary>
			/// Gets the background <see cref="Color" />
			///  of the <see cref="Area" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetBackgroundColor()=0;
			/// <summary>
			/// Sets the background <see cref="Color" />
			///  of the <see cref="Area" />
			/// .
			/// </summary>
			 virtual void SetBackgroundColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the foreground <see cref="ICellsColor" />
			///  oject.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetBackgroundICellsColor()=0;
			/// <summary>
			/// Sets the foreground <see cref="ICellsColor" />
			///  oject.
			/// </summary>
			 virtual void 		SetBackgroundICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Gets the foreground <see cref="System.Drawing.Color" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetForegroundColor()=0;
			/// <summary>
			/// Sets the foreground <see cref="System.Drawing.Color" />
			/// .
			/// </summary>
			 virtual void SetForegroundColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the foreground <see cref="ICellsColor" />
			///  oject.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetForegroundICellsColor()=0;
			/// <summary>
			/// Sets the foreground <see cref="ICellsColor" />
			///  oject.
			/// </summary>
			 virtual void 		SetForegroundICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Gets the transparency of foreground color.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetForeTransparency()=0;
			/// <summary>
			/// Sets the transparency of foreground color.
			/// </summary>
			 virtual void SetForeTransparency(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the transparency of background color.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetBackTransparency()=0;
			/// <summary>
			/// Sets the transparency of background color.
			/// </summary>
			 virtual void SetBackTransparency(Aspose::Cells::System::Double value)=0;

	};
}
}
}
