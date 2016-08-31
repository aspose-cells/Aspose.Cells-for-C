#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Char.h"
#include "System/Text/StringBuilder.h"
//#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "IRegionalPatternMap.h"
#define STATIC_REGIONALPATTERNMAPEA() 

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
	class RegionalPatternMapEa : public Aspose::Cells::Internal::Format::IRegionalPatternMap
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 ToInvariantPattern(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::Internal::Format::FormatPatternTokenInfo> info);
			Aspose::Cells::System::Int32 ToRegionalPattern(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::Internal::Format::FormatPatternTokenInfo> info);
			 RegionalPatternMapEa();
		public:
			virtual ~RegionalPatternMapEa();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
