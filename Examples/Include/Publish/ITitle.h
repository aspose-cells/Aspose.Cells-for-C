#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#include "IChartTextFrame.h"

namespace Aspose {
	namespace Cells {
		class IFontSetting;
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the title of chart or axis.
			/// </summary>
	class ASPOSE_CELLS_API ITitle : virtual public Aspose::Cells::Charts::IChartTextFrame
	{
		public:
			/// <summary>
			/// Represents whether the title is visible.
			/// </summary>
			 virtual bool IsVisible()=0;
			/// <summary>
			/// Represents whether the title is visible.
			/// </summary>
			 virtual void SetVisible(bool value)=0;
			/// <summary>
			/// Gets the x coordinate of the upper left corne in units of 1/4000 of the chart area.
			/// </summary>
			  virtual Aspose::Cells::System::Int32 GetX()=0;
			/// <summary>
			/// Sets the x coordinate of the upper left corne in units of 1/4000 of the chart area.
			/// </summary>
			  virtual void SetX(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the y coordinate of the upper left corner in units of 1/4000 of the chart area.		
			/// </summary>
			  virtual Aspose::Cells::System::Int32 GetY()=0;
			/// <summary>
			/// Sets the y coordinate of the upper left corner in units of 1/4000 of the chart area.		
			/// </summary>
			  virtual void SetY(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents overlay centered title on chart without resising chart.
			/// </summary>
			 virtual bool GetOverLay()=0;
			/// <summary>
			/// Represents overlay centered title on chart without resising chart.
			/// </summary>
			 virtual void SetOverLay(bool value)=0;
			/// <summary>
			/// Gets rich text formatting of this Title.
			/// </summary>
			/// <returns>returns FontSetting array</returns>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::IFontSetting*>> 		GetCharacters()=0;

	};
}
}
}
