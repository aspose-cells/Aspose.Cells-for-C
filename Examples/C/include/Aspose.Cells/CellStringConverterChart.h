#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Text/RegularExpressions/Regex.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Char.h"
#include "System/DateTime.h"
//#include "System/Int32.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Text/RegularExpressions/MatchCollection.h"
//#include "System/Text/RegularExpressions/Match.h"
#define STATIC_CELLSTRINGCONVERTERCHART() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Rendering {
#ifdef WIN32

	class ASPOSE_CELLS_API CellStringConverterChart : public Aspose::Cells::System::Object
#else	class CellStringConverterChart : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			static bool Is1900_01_00(intrusive_ptr<Aspose::Cells::System::DateTime> dt);
	public:

			static intrusive_ptr<Aspose::Cells::System::String> GetConvertedString(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> fi , intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::System::String> custom0);
			static bool IsDateNumberFormat(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> fi , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Object> value);
			static intrusive_ptr<Aspose::Cells::System::String> GetConvertedString(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> fi , intrusive_ptr<Aspose::Cells::System::DateTime> dt , intrusive_ptr<Aspose::Cells::System::String> custom0 , bool date1904);
			 CellStringConverterChart();
		public:
			virtual ~CellStringConverterChart();
	};

}

}

}
