#pragma once
//#include "System/StringHelperPal.h"
#include "System/Char.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Drawing/FontStyle.h"
//#include "System/Single.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "AbstractDigitsCalculator.h"
#include "System/Array1D.h"
#define STATIC_CELLSDIGITCALCULATORCACHEDSTYLE() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class DigitCalculatorFont;
}
}
}
}
namespace Aspose {
namespace Cells {
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellsDigitCalculatorCachedStyle : public Aspose::Cells::Internal::Format::AbstractDigitsCalculator
	{
	protected:

			 virtual Aspose::Cells::System::Int32 GetMaxDigits(intrusive_ptr<Aspose::Cells::System::String> append);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Format::DigitCalculatorFont> m_CalcFontDefault;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Format::DigitCalculatorFont*>> m_CalcFontOfXF;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> m_DigitWidthOfXF;
			Aspose::Cells::System::Double m_StrWidthBase;
			Aspose::Cells::System::Double m_CurrentWidth;
			Aspose::Cells::System::Int32 m_CurrentXF;
	public:

			 CellsDigitCalculatorCachedStyle(intrusive_ptr<Aspose::Cells::Workbook> wb , bool absoluteWidth);
			Aspose::Cells::System::Int32 GetStringWidth(intrusive_ptr<Aspose::Cells::System::String> content);
			 virtual Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , Aspose::Cells::System::Char c);
			 virtual Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , intrusive_ptr<Aspose::Cells::System::String> extend);
			void SetXF(Aspose::Cells::System::Int32 xf);
			void SetWidth(Aspose::Cells::System::Double w);
			 CellsDigitCalculatorCachedStyle();
		public:
			virtual ~CellsDigitCalculatorCachedStyle();
	};

}

}

}

}
