#pragma once
#include "System/Object.h"
#include "NumberPatternType.h"
#include "System/TypeCode.h"
#include "NumberCategoryType.h"
#define STATIC_ICELLSFORMATTER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
class CellsFormatterParams;
class FormatOptions;
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
	class ICellsFormatter : public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , intrusive_ptr<Aspose::Cells::System::Object> value) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> options , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value) = 0;
			virtual Aspose::Cells::NumberPatternType GetNumberPatternType() = 0;
			virtual Aspose::Cells::NumberCategoryType GetNumberCategoryType() = 0;
			virtual intrusive_ptr<Aspose::Cells::Internal::Format::CellsFormatterParams> GetFormatterParams() = 0;
			virtual void OnFormatRelInfoChanged(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo) = 0;
		public:
	};

}

}

}

}
