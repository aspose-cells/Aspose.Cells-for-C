#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Boxing.h"
#include "System/TypeCode.h"
#include "System/String.h"
//#include "System/Math.h"
#include "System/Char.h"
#include "NumberCategoryType.h"
#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/DateTime.h"
#include "NumberPatternType.h"
#include "AbstractCellsFormatter.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#define STATIC_CELLSGENERALFORMATTER() 

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
class ICellsFormatter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellsGeneralFormatter : public Aspose::Cells::Internal::Format::AbstractCellsFormatter
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> m_Limit;
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> Static_Array_Init_m_Limit();
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> m_Header;
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> m_Tail;
			Aspose::Cells::System::Char m_DecimalChar;
			bool m_NeedDateHeader;
			bool m_NeedDateTail;
			bool m_HasAppend;
			void FormatNumber(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::FormattedInfo> info);
			intrusive_ptr<Aspose::Cells::System::String> FormatNumber(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv , Aspose::Cells::System::Int32 maxDigits);
			void RemoveTailZero(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 lastIntPos);
			void AppendHeaderZero(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 exp);
			void AppendE(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Int32 exp);
			void InitLocaleVars(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
	public:

			 CellsGeneralFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams , intrusive_ptr<Aspose::Cells::Internal::Format::AbstractCellsFormatter> header , intrusive_ptr<Aspose::Cells::Internal::Format::AbstractCellsFormatter> tail);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetHeaderFormatter();
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetTailFormatter();
			 virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			 virtual Aspose::Cells::NumberPatternType GetNumberPatternType();
			 virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType();
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 CellsGeneralFormatter();
		public:
			virtual ~CellsGeneralFormatter();
	};

}

}

}

}
