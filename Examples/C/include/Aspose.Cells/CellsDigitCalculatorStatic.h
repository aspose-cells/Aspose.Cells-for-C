#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Char.h"
#include "System/Int32.h"
#include "System/String.h"
#include "IDigitsCalculator.h"
#define STATIC_CELLSDIGITCALCULATORSTATIC() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellsDigitCalculatorStatic : public Aspose::Cells::Internal::Format::IDigitsCalculator
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_MaxDigits;
			bool m_SignInclusive;
	public:

			 CellsDigitCalculatorStatic(Aspose::Cells::System::Int32 maxDigits , bool signInclusive);
			Aspose::Cells::System::Int32 GetMaxDigits(intrusive_ptr<Aspose::Cells::System::String> append , bool negative);
			Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , Aspose::Cells::System::Char c);
			Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , intrusive_ptr<Aspose::Cells::System::String> extend);
			 CellsDigitCalculatorStatic();
		public:
			virtual ~CellsDigitCalculatorStatic();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
