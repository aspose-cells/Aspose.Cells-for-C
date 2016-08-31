#pragma once
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/DateTime.h"
#include "AbstractSpecialDateFormatter.h"
#include "System/Double.h"
//#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_SPECIALMMMMM() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class SimpleDateFormatter;
class FormatOptions;
class CellsFormatterParams;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class SpecialMMMMM : public Aspose::Cells::Internal::Format::AbstractSpecialDateFormatter
	{
	protected:

			 virtual void FormatValue(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> value , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Format::SimpleDateFormatter> m_Formatter;
	public:

			 SpecialMMMMM(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParam , intrusive_ptr<Aspose::Cells::System::String> header , intrusive_ptr<Aspose::Cells::System::String> tail);
			 SpecialMMMMM();
		public:
			virtual ~SpecialMMMMM();
	};

}

}

}

}
