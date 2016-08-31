#pragma once
#include "AbstractNumberFormatter.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Char.h"
#include "System/Double.h"
//#include "System/Math.h"
//#include "System/CharHelper.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_SIMPLENUMBERFORMATTER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
class FormatOptions;
class CellsFormatterParams;
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
	class SimpleNumberFormatter : public Aspose::Cells::Internal::Format::AbstractNumberFormatter
	{
	protected:

			 virtual Aspose::Cells::System::Int32 ProcessPatternField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			 virtual Aspose::Cells::System::Double GetDisplayValue(Aspose::Cells::System::Double dv);
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> m_Culture;
			intrusive_ptr<Aspose::Cells::System::String> m_ProgPattern;
			Aspose::Cells::System::Int32 m_IntPartE;
			Aspose::Cells::System::Char m_RegionDecimal;
			Aspose::Cells::System::Char m_RegionGroup;
			Aspose::Cells::System::Char m_CustomDecimal;
			Aspose::Cells::System::Char m_CustomGroup;
			intrusive_ptr<Aspose::Cells::System::String> m_OneIntEPattern;
			void Init(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			void InitLocaleVars(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
	public:

			 SimpleNumberFormatter(intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> formatterParams , intrusive_ptr<Aspose::Cells::System::String> filteredPattern);
			 virtual void FormatNumber(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::Double dv , intrusive_ptr<Aspose::Cells::FormattedInfo> info);
			 virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			 SimpleNumberFormatter();
		public:
			virtual ~SimpleNumberFormatter();
	};

}

}

}

}
