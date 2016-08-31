#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Char.h"
#include "System/Text/StringBuilder.h"
#include "System/Int32.h"
#define STATIC_IREGIONALPATTERNMAP() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatPatternTokenInfo;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class IRegionalPatternMap : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 ToInvariantPattern(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::Internal::Format::FormatPatternTokenInfo> info) = 0;
			virtual Aspose::Cells::System::Int32 ToRegionalPattern(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::Internal::Format::FormatPatternTokenInfo> info) = 0;
		public:
	};

}

}

}

}
