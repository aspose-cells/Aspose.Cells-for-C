#pragma once
#include "System/Char.h"
#include "System/Object.h"
#define STATIC_FORMATOPTIONS() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class IDigitsCalculator;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class FormatOptions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Format::IDigitsCalculator> m_DigitsCalculator;
			Aspose::Cells::System::Char m_CharForUndisplayable;
			Aspose::Cells::System::Char m_CharForQuestionMark;
	public:

			intrusive_ptr<Aspose::Cells::Internal::Format::IDigitsCalculator> GetDigitsCalculator();
			void SetDigitsCalculator(intrusive_ptr<Aspose::Cells::Internal::Format::IDigitsCalculator> value);
			Aspose::Cells::System::Char GetCharForUndisplayable();
			void SetCharForUndisplayable(Aspose::Cells::System::Char value);
			Aspose::Cells::System::Char GetCharForQuestionMark();
			void SetCharForQuestionMark(Aspose::Cells::System::Char value);
			 FormatOptions();
		public:
			virtual ~FormatOptions();
	};

}

}

}

}
