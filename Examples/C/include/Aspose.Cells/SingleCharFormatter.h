#pragma once
#include "AbstractDateFormatter.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"
#include "System/DateTime.h"
#include "System/Double.h"
//#include "System/Int32.h"
#define STATIC_SINGLECHARFORMATTER() 

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
class FormattedInfo;
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class SingleCharFormatter : public Aspose::Cells::Internal::Format::AbstractDateFormatter
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Char m_Char;
	public:

			 SingleCharFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams , intrusive_ptr<Aspose::Cells::System::String> filteredPattern);
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt , Aspose::Cells::System::Double dv , bool round);
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 SingleCharFormatter();
		public:
			virtual ~SingleCharFormatter();
	};

}

}

}

}
