#pragma once
#include "AbstractDateFormatter.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/DateTime.h"
#include "System/Double.h"
#include "System/Text/StringBuilder.h"
#define STATIC_ABSTRACTSPECIALDATEFORMATTER() 

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
	class AbstractSpecialDateFormatter : public Aspose::Cells::Internal::Format::AbstractDateFormatter
	{
	protected:

			 virtual void FormatValue(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> value , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_Header;
			intrusive_ptr<Aspose::Cells::System::String> m_Tail;
	public:

			 AbstractSpecialDateFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParam , intrusive_ptr<Aspose::Cells::System::String> header , intrusive_ptr<Aspose::Cells::System::String> tail);
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt , Aspose::Cells::System::Double dv , bool round);
			intrusive_ptr<Aspose::Cells::System::String> GetHeader();
			void SetHeader(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::System::String> GetTail();
			void SetTail(intrusive_ptr<Aspose::Cells::System::String> value);
			void Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 AbstractSpecialDateFormatter();
		public:
			virtual ~AbstractSpecialDateFormatter();
	};

}

}

}

}
