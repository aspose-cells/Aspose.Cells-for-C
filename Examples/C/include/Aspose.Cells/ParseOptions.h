#pragma once
#include "System/Object.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Int32.h"
#define STATIC_PARSEOPTIONS() 

namespace Aspose {
namespace Cells {
class IParseTokenInspector;
}
}
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
	class ParseOptions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _baseForDoubleDigitYear;
			Aspose::Cells::Internal::Format::FormatRelInfo* _relInfo;
			intrusive_ptr<Aspose::Cells::IParseTokenInspector> _parseTokenInspector;
			bool _allowParenthese;
			bool _strictYmdOrder;
	public:

			intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> GetFormatRelInfo();
			void SetFormatRelInfo(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> value);
			Aspose::Cells::System::Int32 GetBaseForDoubleDigitYear();
			void SetBaseForDoubleDigitYear(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::IParseTokenInspector> GetParseTokenInspector();
			void SetParseTokenInspector(intrusive_ptr<Aspose::Cells::IParseTokenInspector> value);
			intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> GetCultureInfo();
			void SetCultureInfo(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> value);
			bool GetAllowParenthese();
			void SetAllowParenthese(bool value);
			bool GetStrictYmdOrder();
			void SetStrictYmdOrder(bool value);
			 ParseOptions();
		public:
			virtual ~ParseOptions();
	};

}

}
