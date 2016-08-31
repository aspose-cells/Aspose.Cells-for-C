#pragma once
//#include "System/Exception.h"
//#include "System/Double.h"
//#include "System/Globalization/CultureInfo.h"
#include "System/Int16.h"
#include "LangCode.h"
#include "System/Char.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Drawing/Color.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Text/StringBuilder.h"
#include "System/String.h"
#include "NumberPatternType.h"
#include "System/Int32.h"
#define STATIC_FORMATTERBUILDER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
class CellsFormatterParams;
class AbstractCellsFormatter;
class ICellsFormatter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class FormatterBuilder : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> m_RelInfo;
			Aspose::Cells::System::Int16 m_LID;
			intrusive_ptr<Aspose::Cells::Internal::Format::AbstractCellsFormatter> m_GeneralHeader;
			intrusive_ptr<Aspose::Cells::Internal::Format::AbstractCellsFormatter> m_GeneralTail;
			bool m_Simple;
			bool m_General;
			bool m_Confirm;
			Aspose::Cells::System::Int32 m_DecimalPos;
			void Reset();
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> GetInitParams();
			intrusive_ptr<Aspose::Cells::Internal::Format::AbstractCellsFormatter> BuildFormatter(intrusive_ptr<Aspose::Cells::System::String> pattern , intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> param);
			bool SimpleForNumber(Aspose::Cells::System::Char c);
	public:

			Aspose::Cells::NumberPatternType m_Type;
			 FormatterBuilder(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> info);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> BuildFormatter(intrusive_ptr<Aspose::Cells::System::String> custom , bool cache);
			 FormatterBuilder();
		public:
			virtual ~FormatterBuilder();
	};

}

}

}

}
