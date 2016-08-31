#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Char.h"
#include "System/Int32.h"
#include "System/String.h"
#include "IDigitsCalculator.h"
#define STATIC_ABSTRACTDIGITSCALCULATOR() 

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
	class AbstractDigitsCalculator : public Aspose::Cells::Internal::Format::IDigitsCalculator
	{
	protected:

			 virtual Aspose::Cells::System::Int32 GetMaxDigits(intrusive_ptr<Aspose::Cells::System::String> append);
			 virtual Aspose::Cells::System::Double GetDigitWidth(intrusive_ptr<Aspose::Cells::Internal::Format::DigitCalculatorFont> calcFont);
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , Aspose::Cells::System::Char c);
			 virtual Aspose::Cells::System::Int32 GetMaxCount(intrusive_ptr<Aspose::Cells::System::String> append , intrusive_ptr<Aspose::Cells::System::String> extend);
			Aspose::Cells::System::Int32 GetMaxDigits(intrusive_ptr<Aspose::Cells::System::String> append , bool negative);
			 AbstractDigitsCalculator();
		public:
			virtual ~AbstractDigitsCalculator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
