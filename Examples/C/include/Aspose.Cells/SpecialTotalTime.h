#pragma once
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/DateTime.h"
#include "AbstractSpecialDateFormatter.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
//#include "System/Math.h"
#define STATIC_SPECIALTOTALTIME() 

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
	class SpecialTotalTime : public Aspose::Cells::Internal::Format::AbstractSpecialDateFormatter
	{
	protected:

			 virtual void FormatValue(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Double m_MilliBase;
			Aspose::Cells::System::Double m_Base;
			Aspose::Cells::System::Int32 m_Length;
	public:

			 SpecialTotalTime(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParam , intrusive_ptr<Aspose::Cells::System::String> header , intrusive_ptr<Aspose::Cells::System::String> tail , Aspose::Cells::System::Int32 type , Aspose::Cells::System::Int32 length);
			 virtual bool GetNeedNumber();
			 virtual bool GetNeedDateTime();
			 SpecialTotalTime();
		public:
			virtual ~SpecialTotalTime();
	};

}

}

}

}
