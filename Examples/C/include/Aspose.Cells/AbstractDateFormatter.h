#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Int64.h"
//#include "System/DateTimeKind.h"
#include "YMDOrder.h"
//#include "System/Boxing.h"
#include "System/TypeCode.h"
#include "System/Char.h"
#include "NumberCategoryType.h"
#include "System/Double.h"
#include "DateTimeFieldType.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/DateTime.h"
//#include "System/String.h"
#include "NumberPatternType.h"
#include "AbstractCellsFormatter.h"
#include "System/Int32.h"
#define STATIC_ABSTRACTDATEFORMATTER() 

namespace Aspose {
namespace Cells {
class FormattedInfo;
}
}
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
	class AbstractDateFormatter : public Aspose::Cells::Internal::Format::AbstractCellsFormatter
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 DATE;
			 static const Aspose::Cells::System::Int32 TEXT_MONTH;
			intrusive_ptr<Aspose::Cells::FormattedInfo> FormatDateTime(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt);
			intrusive_ptr<Aspose::Cells::FormattedInfo> FormatDouble(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv);
			void OnMonth();
			void OnYear();
	protected:

			static intrusive_ptr<Aspose::Cells::System::DateTime> MAX_ROUNDABLE_DATETIME;
			Aspose::Cells::System::Int32 m_Fields;
			intrusive_ptr<Aspose::Cells::FormattedInfo> FormatOutOfRange(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt);
			void FixPattern(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			void FixCommonPattern(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			 virtual Aspose::Cells::System::Int32 KeepPatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			 virtual Aspose::Cells::System::Int32 ProcessPatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	public:

			 AbstractDateFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams);
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt , Aspose::Cells::System::Double dv , bool round);
			void SetHasField(Aspose::Cells::DateTimeFieldType field);
			bool HasField(Aspose::Cells::DateTimeFieldType field);
			bool HasTextMonth();
			Aspose::Cells::Internal::Format::YMDOrder GetYMDOrder();
			 virtual bool GetNeedNumber();
			 virtual bool GetNeedDateTime();
			 virtual Aspose::Cells::NumberPatternType GetNumberPatternType();
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType();
			 AbstractDateFormatter();
		public:
			virtual ~AbstractDateFormatter();
	};

}

}

}

}
