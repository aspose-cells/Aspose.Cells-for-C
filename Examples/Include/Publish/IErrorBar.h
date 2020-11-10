#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/String.h"
#include "ILine.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum ErrorBarType;
			enum ErrorBarDisplayType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			///  Represents error bar of data series.
			///  </summary>
	class ASPOSE_CELLS_API IErrorBar : virtual public Aspose::Cells::Drawing::ILine
	{
		public:
			/// <summary>
			/// Represents error bar amount type.
			/// </summary>
			 virtual Aspose::Cells::Charts::ErrorBarType GetType()=0;
			/// <summary>
			/// Represents error bar amount type.
			/// </summary>
			 virtual void SetType(Aspose::Cells::Charts::ErrorBarType value)=0;
			/// <summary>
			/// Represents error bar display type.
			/// </summary>
			 virtual Aspose::Cells::Charts::ErrorBarDisplayType GetDisplayType()=0;
			/// <summary>
			/// Represents error bar display type.
			/// </summary>
			 virtual void SetDisplayType(Aspose::Cells::Charts::ErrorBarDisplayType value)=0;
			/// <summary>
			/// Represents amount of error bar.
			/// <remarks> The amount must be greater than and equal to zero.</remarks>
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetAmount()=0;
			/// <summary>
			/// Represents amount of error bar.
			/// <remarks> The amount must be greater than and equal to zero.</remarks>
			/// </summary>
			 virtual void SetAmount(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Indicates if formatting error bars with a T-top.
			/// </summary>
			 virtual bool GetShowMarkerTTop()=0;
			/// <summary>
			/// Indicates if formatting error bars with a T-top.
			/// </summary>
			 virtual void SetShowMarkerTTop(bool value)=0;
			/// <summary>
			/// Represents positive error amount when error bar type is InnerCustom.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPlusValue()=0;
			/// <summary>
			/// Represents positive error amount when error bar type is InnerCustom.
			/// </summary>
			 virtual void SetPlusValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents negative error amount when error bar type is InnerCustom.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetMinusValue()=0;
			/// <summary>
			/// Represents negative error amount when error bar type is InnerCustom.
			/// </summary>
			 virtual void SetMinusValue(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;

	};
}
}
}
