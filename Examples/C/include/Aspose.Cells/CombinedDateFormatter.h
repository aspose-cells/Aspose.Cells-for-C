#pragma once
#include "System/Text/StringBuilder.h"
#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Int16.h"
//#include "System/TypeCode.h"
#include "System/String.h"
//#include "System/Math.h"
#include "System/Char.h"
#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "NumberPatternType.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "AbstractDateFormatter.h"
#include "System/DateTime.h"
#include "System/Int32.h"
//#include "System/Globalization/DateTimeFormatInfo.h"
#define STATIC_COMBINEDDATEFORMATTER() 

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
class AbstractSpecialDateFormatter;
class FormatOptions;
class CellsFormatterParams;
class ICellsFormatter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CombinedDateFormatter : public Aspose::Cells::Internal::Format::AbstractDateFormatter
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Format::ICellsFormatter*>> m_Formatters;
			bool m_NeedNumber;
			bool m_NeedDateTime;
			Aspose::Cells::System::Int32 m_AddMilliSecond;
			intrusive_ptr<Aspose::Cells::System::DateTime> m_MaxRoundable;
			void Init(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			void AddSpecialFormatter(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> alFormatter , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , bool isSimpleFormatter , bool hasPlaceHolder , intrusive_ptr<Aspose::Cells::Internal::Format::AbstractSpecialDateFormatter> special);
			void AddPlaceHolder(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> alFormatter , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			intrusive_ptr<Aspose::Cells::System::String> ToPlainText(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	public:

			 CombinedDateFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams , intrusive_ptr<Aspose::Cells::System::String> filteredPattern);
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt , Aspose::Cells::System::Double dv , bool round);
			 virtual bool GetNeedNumber();
			 virtual bool GetNeedDateTime();
			 virtual Aspose::Cells::NumberPatternType GetNumberPatternType();
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 CombinedDateFormatter();
		public:
			virtual ~CombinedDateFormatter();
	};

}

}

}

}
