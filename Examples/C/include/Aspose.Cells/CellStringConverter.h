#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Char.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Text/RegularExpressions/Regex.h"
//#include "System/Int32.h"
#include "System/String.h"
//#include "System/Text/RegularExpressions/RegexOptions.h"
#define STATIC_CELLSTRINGCONVERTER() 


namespace Aspose {
namespace Cells {
	class CellStringConverter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> DateFormatPattern;
			 CellStringConverter();
			static bool IsDateFormat(intrusive_ptr<Aspose::Cells::System::String> rhv);
		public:
			virtual ~CellStringConverter();
	};

}

}
