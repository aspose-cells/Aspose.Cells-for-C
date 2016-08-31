#pragma once
#include "InternalColor.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_DATAPATTERNFILL() 

namespace Aspose {
namespace Cells {
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataPatternFill : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::String> PatternType;
			intrusive_ptr<Aspose::Cells::InternalColor> FgInternalColor;
			intrusive_ptr<Aspose::Cells::InternalColor> BgInternalColor;
			static bool IsEquals(intrusive_ptr<Aspose::Cells::OpenXML::DataPatternFill> obj1 , intrusive_ptr<Aspose::Cells::OpenXML::DataPatternFill> obj2);
			static intrusive_ptr<Aspose::Cells::OpenXML::DataPatternFill> GetPatternFillInfo(intrusive_ptr<Aspose::Cells::Style> style);
			void SetDataToStyle(intrusive_ptr<Aspose::Cells::Style> style);
			 DataPatternFill();
		public:
			virtual ~DataPatternFill();
	};

}

}

}
