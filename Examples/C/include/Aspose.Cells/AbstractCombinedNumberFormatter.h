#pragma once
//#include "System/Text/StringBuilder.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/TypeCode.h"
#include "System/Char.h"
#include "System/Double.h"
#include "AbstractNumberFormatter.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Array.h"
//#include "System/Math.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_ABSTRACTCOMBINEDNUMBERFORMATTER() 

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
class CombinedPartBuilder;
class FormatOptions;
class SimpleNumberFormatter;
class CellsFormatterParams;
class CellsTextFormatter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class AbstractCombinedNumberFormatter : public Aspose::Cells::Internal::Format::AbstractNumberFormatter
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> SplitFormattedValue(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> formattedNumber , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> splitPos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> splitSepCount);
			intrusive_ptr<Aspose::Cells::Internal::Format::SimpleNumberFormatter> GetBaseFormatter();
			Aspose::Cells::System::Char GetDecimalChar();
			void FinishBuilder(intrusive_ptr<Aspose::Cells::Internal::Format::CombinedPartBuilder> builder , intrusive_ptr<Aspose::Cells::System::String> progPattern);
			Aspose::Cells::System::Int32 ProcessPatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::Internal::Format::CombinedPartBuilder> builder);
			void InitLocaleVars(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
	private:

			void Init_Vars();
			Aspose::Cells::System::Char m_DecimalChar;
			Aspose::Cells::System::Char m_GroupChar;
			intrusive_ptr<Aspose::Cells::Internal::Format::SimpleNumberFormatter> m_Formatter;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::Internal::Format::CellsTextFormatter*>> m_AppendContent;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> m_AppendPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<bool>> m_AppendReversed;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_AppendSize;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_PlaceHolderIndex;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_PlaceHolderVal;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> m_OptionalHolderPos;
			Aspose::Cells::System::Int32 m_AppendSizeTotal;
			Aspose::Cells::System::Int32 m_OptionalSpaceCount;
			Aspose::Cells::System::Int32 m_OptionalZeroCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_SplitPos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_SplitSepCount;
			Aspose::Cells::System::Char GetWhiteSpaceChar(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> formattedNumber);
	public:

			 AbstractCombinedNumberFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams);
			 virtual void FormatNumber(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::FormattedInfo> info);
			void FormatNumberStr(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> formattedNumber , intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::FormattedInfo> info);
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 AbstractCombinedNumberFormatter();
		public:
			virtual ~AbstractCombinedNumberFormatter();
	};

}

}

}

}
