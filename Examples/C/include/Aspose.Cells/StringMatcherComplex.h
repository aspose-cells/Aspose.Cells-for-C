#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Text/RegularExpressions/Regex.h"
#include "System/String.h"
//#include "System/Int32.h"
#include "IStringMatcher.h"
//#include "System/Text/RegularExpressions/RegexOptions.h"
#define STATIC_STRINGMATCHERCOMPLEX() 

namespace Aspose {
namespace Cells {
class FindOptions;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class StringMatcherComplex : public Aspose::Cells::CellsSs::IStringMatcher
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FindOptions> m_Options;
			intrusive_ptr<Aspose::Cells::System::String> m_String;
			intrusive_ptr<Aspose::Cells::CellsSs::IStringMatcher> m_Simple;
			intrusive_ptr<Aspose::Cells::System::Text::RegularExpressions::Regex> regex;
	public:

			 StringMatcherComplex(intrusive_ptr<Aspose::Cells::System::String> str , intrusive_ptr<Aspose::Cells::FindOptions> options);
			bool Match(intrusive_ptr<Aspose::Cells::System::String> strValue);
			 StringMatcherComplex();
		public:
			virtual ~StringMatcherComplex();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
