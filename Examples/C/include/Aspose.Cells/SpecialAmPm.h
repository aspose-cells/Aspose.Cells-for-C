#pragma once
#include "System/DateTime.h"
//#include "System/StringHelperPal.h"
#include "System/Text/StringBuilder.h"
#include "System/Double.h"
#include "System/String.h"
#include "AbstractSpecialDateFormatter.h"
#include "System/Object.h"
#define STATIC_SPECIALAMPM() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class CellsFormatterParams;
class FormatOptions;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class SpecialAmPm : public Aspose::Cells::Internal::Format::AbstractSpecialDateFormatter
	{
	protected:

			 virtual void FormatValue(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_Am;
			intrusive_ptr<Aspose::Cells::System::String> m_Pm;
	public:

			 SpecialAmPm(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParam , intrusive_ptr<Aspose::Cells::System::String> header , intrusive_ptr<Aspose::Cells::System::String> tail , intrusive_ptr<Aspose::Cells::System::String> am , intrusive_ptr<Aspose::Cells::System::String> pm);
			 SpecialAmPm();
		public:
			virtual ~SpecialAmPm();
	};

}

}

}

}
