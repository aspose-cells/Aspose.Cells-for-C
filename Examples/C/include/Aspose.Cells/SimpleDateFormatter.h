#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/Globalization/KoreanCalendar.h"
#include "System/Object.h"
#include "System/Globalization/CultureInfo.h"
//#include "System/Int16.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Globalization/JapaneseCalendar.h"
#include "AbstractDateFormatter.h"
#include "System/DateTime.h"
#include "LangCode.h"
#include "System/Int32.h"
//#include "System/Globalization/DateTimeFormatInfo.h"
#define STATIC_SIMPLEDATEFORMATTER() 

namespace Aspose {
namespace Cells {
class FormattedInfo;
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
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
	class SimpleDateFormatter : public Aspose::Cells::Internal::Format::AbstractDateFormatter
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> m_Culture;
			intrusive_ptr<Aspose::Cells::System::String> m_ProgPattern;
			intrusive_ptr<Aspose::Cells::System::String> Init(intrusive_ptr<Aspose::Cells::System::String> filteredPattern , bool fix);
	public:
		
			 SimpleDateFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams , intrusive_ptr<Aspose::Cells::System::String> filteredPattern , bool fixPattern , Aspose::Cells::System::Int32 fields);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt , Aspose::Cells::System::Double dv , bool round);
			void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 SimpleDateFormatter();
		public:
			virtual ~SimpleDateFormatter();
	};

}

}

}

}
