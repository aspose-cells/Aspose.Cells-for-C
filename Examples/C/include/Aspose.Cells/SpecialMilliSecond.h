#pragma once
//#include "System/Single.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Char.h"
#include "System/DateTime.h"
#include "AbstractSpecialDateFormatter.h"
#include "System/Double.h"
//#include "System/Globalization/NumberFormatInfo.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#define STATIC_SPECIALMILLISECOND() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
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
	class SpecialMilliSecond : public Aspose::Cells::Internal::Format::AbstractSpecialDateFormatter
	{
	protected:

			 virtual void FormatValue(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 m_Length;
	public:

			 SpecialMilliSecond(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParam , intrusive_ptr<Aspose::Cells::System::String> header , intrusive_ptr<Aspose::Cells::System::String> tail , Aspose::Cells::System::Int32 length);
			 SpecialMilliSecond();
		public:
			virtual ~SpecialMilliSecond();
	};

}

}

}

}
