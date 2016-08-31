#pragma once
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "ICustomParser.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"
//#include "System/Boxing.h"
#include "System/Double.h"
//#include "System/Math.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "ParsedNumberInfo.h"
#define STATIC_CELLSNUMBERPARSER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class LocaleNumberFormatConstants;
class ParsedInfo;
}
}
}
}
namespace Aspose {
namespace Cells {
class ParseOptions;
class IParseTokenInspector;
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellsNumberParser : public Aspose::Cells::ICustomParser
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> _formatBuffer;
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> _plainBuffer;
			intrusive_ptr<Aspose::Cells::Internal::Format::ParsedNumberInfo> _parsedInfo;
			intrusive_ptr<Aspose::Cells::Internal::Format::LocaleNumberFormatConstants> _localeNFConsts;
			intrusive_ptr<Aspose::Cells::ParseOptions> _parseOptions;
			intrusive_ptr<Aspose::Cells::IParseTokenInspector> _inspector;
			Aspose::Cells::System::Double BuildE(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 end , Aspose::Cells::System::Double val , bool divPercent);
			void InsertDecimalForPercent();
	public:

			 CellsNumberParser(intrusive_ptr<Aspose::Cells::ParseOptions> parseOptions);
			intrusive_ptr<Aspose::Cells::System::Object> ParseObject(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Internal::Format::ParsedInfo> GetParsedInfo();
			intrusive_ptr<Aspose::Cells::System::String> GetFormat();
			 CellsNumberParser();
		public:
			virtual ~CellsNumberParser();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
