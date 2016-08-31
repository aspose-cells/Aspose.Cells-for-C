#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Boxing.h"
//#include "System/StringHelperPal.h"
//#include "System/TypeCode.h"
//#include "System/Math.h"
#include "System/Char.h"
#include "NumberCategoryType.h"
#include "System/Double.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "AbstractNumberFormatter.h"
#include "System/String.h"
#include "NumberPatternType.h"
#include "System/Int32.h"
#define STATIC_CELLSFRACTIONFORMATTER() 

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
class AbstractCellsFormatter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellsFractionFormatter : public Aspose::Cells::Internal::Format::AbstractNumberFormatter
	{
	protected:

			 virtual Aspose::Cells::System::Double GetDisplayValue(Aspose::Cells::System::Double dv);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Format::AbstractNumberFormatter> m_PartInt;
			intrusive_ptr<Aspose::Cells::Internal::Format::AbstractNumberFormatter> m_PartIntOnly;
			intrusive_ptr<Aspose::Cells::Internal::Format::AbstractNumberFormatter> m_Part1;
			intrusive_ptr<Aspose::Cells::Internal::Format::AbstractCellsFormatter> m_Part2;
			Aspose::Cells::System::Int32 m_Denominator;
			void Init(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			void ToPartIntOnly(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			void FormatInt(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double iv , intrusive_ptr<Aspose::Cells::FormattedInfo> info , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			Aspose::Cells::System::Int32 CalcDenominator(Aspose::Cells::System::Double decimalPart);
	public:

			 CellsFractionFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams , intrusive_ptr<Aspose::Cells::System::String> filteredPattern);
			 virtual void FormatNumber(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::FormattedInfo> info);
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 virtual Aspose::Cells::NumberPatternType GetNumberPatternType();
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType();
			 CellsFractionFormatter();
		public:
			virtual ~CellsFractionFormatter();
	};

}

}

}

}
