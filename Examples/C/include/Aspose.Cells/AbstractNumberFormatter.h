#pragma once
#include "System/Object.h"
#include "System/Char.h"
//#include "System/DateTime.h"
//#include "System/String.h"
//#include "System/Boxing.h"
#include "System/Double.h"
#include "NumberPatternType.h"
#include "NumberCategoryType.h"
#include "System/TypeCode.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "AbstractCellsFormatter.h"
#include "System/Array1D.h"
#define STATIC_ABSTRACTNUMBERFORMATTER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class CellsFormatterParams;
class FormatOptions;
class NumberPatternInfo;
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
	class AbstractNumberFormatter : public Aspose::Cells::Internal::Format::AbstractCellsFormatter
	{
	private:

			void Init_Vars();
			void FixZeros(Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	protected:

			intrusive_ptr<Aspose::Cells::Internal::Format::NumberPatternInfo> m_PatternInfo;
			 virtual Aspose::Cells::System::Double GetDisplayValue(Aspose::Cells::System::Double dv);
			void FixPattern(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			void FixCommonPattern(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			 virtual Aspose::Cells::System::Int32 ProcessPatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	public:

			 AbstractNumberFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams);
			 virtual Aspose::Cells::System::Double PrecisionAsDisplayed(Aspose::Cells::System::Double dv);
			intrusive_ptr<Aspose::Cells::Internal::Format::NumberPatternInfo> GetNumberPatternInfo();
			 virtual void FormatNumber(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::FormattedInfo> info);
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			 virtual Aspose::Cells::NumberPatternType GetNumberPatternType();
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType();
			 AbstractNumberFormatter();
		public:
			virtual ~AbstractNumberFormatter();
	};

}

}

}

}
