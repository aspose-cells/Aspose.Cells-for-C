#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Single.h"
#include "System/Char.h"
#include "System/Double.h"
#include "AbstractDigitsCalculator.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_CELLSDIGITCALCULATORDYNAMIC() 

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
namespace Internal {
namespace Format {
	class CellsDigitCalculatorDynamic : public Aspose::Cells::Internal::Format::AbstractDigitsCalculator
	{
	private:

			void Init_Vars();
			bool m_AbsoluteWidth;
	protected:

			intrusive_ptr<Aspose::Cells::Internal::Format::DigitCalculatorFont> m_DefaultFont;
			intrusive_ptr<Aspose::Cells::Internal::Format::DigitCalculatorFont> m_CurrentFont;
			Aspose::Cells::System::Double m_DefaultDigitWidth;
			Aspose::Cells::System::Double m_CurrentDigitWidth;
			 virtual void InitCurrentFont();
			 virtual void InitDefaultFont();
			 virtual bool IsDefaultFont();
			void UpdateDefaultFont();
			void UpdateCurrentFont();
			 virtual Aspose::Cells::System::Int32 GetMaxDigits(intrusive_ptr<Aspose::Cells::System::String> append);
	public:

			 CellsDigitCalculatorDynamic(bool absoluteWidth);
			 virtual Aspose::Cells::System::Double GetWidth();
			Aspose::Cells::System::Int32 GetStringWidth(intrusive_ptr<Aspose::Cells::System::String> content);
			 virtual Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , Aspose::Cells::System::Char c);
			 virtual Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , intrusive_ptr<Aspose::Cells::System::String> extend);
			 CellsDigitCalculatorDynamic();
		public:
			virtual ~CellsDigitCalculatorDynamic();
	};

}

}

}

}
