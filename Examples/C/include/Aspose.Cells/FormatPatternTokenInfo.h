#pragma once
#include "System/Byte.h"
//#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_FORMATPATTERNTOKENINFO() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class FormatPatternTokenInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 static const Aspose::Cells::System::Byte TOKEN_UNKNOWN;
			 static const Aspose::Cells::System::Byte TOKEN_DATE_YEAR;
			 static const Aspose::Cells::System::Byte TOKEN_DATE_MONTH;
			 static const Aspose::Cells::System::Byte TOKEN_DATE_DAY;
			 static const Aspose::Cells::System::Byte TOKEN_DATE_G;
			 static const Aspose::Cells::System::Byte TOKEN_TIME_HOUR;
			 static const Aspose::Cells::System::Byte TOKEN_TIME_MINUTE;
			 static const Aspose::Cells::System::Byte TOKEN_TIME_SECOND;
			 static const Aspose::Cells::System::Byte TOKEN_NUMBER_ZERO;
			 static const Aspose::Cells::System::Byte TOKEN_NUMBER_SHARP;
			 static const Aspose::Cells::System::Byte TOKEN_NUMBER_PLUS;
			 static const Aspose::Cells::System::Byte TOKEN_NUMBER_MINUS;
			 static const Aspose::Cells::System::Byte TOKEN_NUMBER_E;
			 static const Aspose::Cells::System::Byte TOKEN_PLAINTEXT;
			Aspose::Cells::System::Byte TokenType;
			void PrepareNextToken();
			bool IsDateTime();
			bool IsDate();
			bool IsTime();
			bool IsNumber();
			 FormatPatternTokenInfo();
		public:
			virtual ~FormatPatternTokenInfo();
	};

}

}

}

}
