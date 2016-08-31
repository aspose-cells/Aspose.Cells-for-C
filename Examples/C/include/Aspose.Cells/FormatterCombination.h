#pragma once
//#include "System/Boxing.h"
#include "System/TypeCode.h"
//#include "System/Type.h"
#include "NumberCategoryType.h"
#include "System/Double.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/DateTime.h"
//#include "System/String.h"
#include "NumberPatternType.h"
#include "AbstractCellsFormatter.h"
//#include "System/Int32.h"
#define STATIC_FORMATTERCOMBINATION() 

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
class FormatSpecifiedCondition;
class ICellsFormatter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class FormatterCombination : public Aspose::Cells::Internal::Format::AbstractCellsFormatter
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Format::ICellsFormatter*>> m_FormattersWithCond;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Format::FormatSpecifiedCondition*>> m_Conds;
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> m_FormatterDefault;
			intrusive_ptr<Aspose::Cells::FormattedInfo> FormatWithFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> formatter , intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::FormattedInfo> FormatDateTime(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt);
			intrusive_ptr<Aspose::Cells::FormattedInfo> FormatDouble(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv);
			intrusive_ptr<Aspose::Cells::FormattedInfo> FormatNoMatched();
	public:

			 FormatterCombination(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Format::ICellsFormatter*>> formattersWithCond , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Format::FormatSpecifiedCondition*>> conds , intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> formatterDefault);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Format::FormatSpecifiedCondition*>> GetConditions();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Internal::Format::ICellsFormatter*>> GetFormatters();
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetDefaultFormatter();
			 virtual Aspose::Cells::System::Double PrecisionAsDisplayed(Aspose::Cells::System::Double dv);
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetFormatter(intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::DateTime> dt);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::NumberCategoryType GetNumberCategoryType(intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::NumberCategoryType GetNumberCategoryType(Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			 virtual Aspose::Cells::NumberPatternType GetNumberPatternType();
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType();
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 FormatterCombination();
		public:
			virtual ~FormatterCombination();
	};

}

}

}

}
