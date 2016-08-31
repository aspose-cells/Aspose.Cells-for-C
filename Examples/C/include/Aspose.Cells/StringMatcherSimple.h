#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Char.h"
//#include "System/Int32.h"
#include "IStringMatcher.h"
#include "System/String.h"
#define STATIC_STRINGMATCHERSIMPLE() 


namespace Aspose {
namespace Cells {
namespace CellsSs {
	class StringMatcherSimple : public Aspose::Cells::CellsSs::IStringMatcher
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> m_String;
			bool m_Reg;
			bool m_IgnoreCase;
			static bool IsReg(intrusive_ptr<Aspose::Cells::System::String> inputString);
	public:

			 StringMatcherSimple(intrusive_ptr<Aspose::Cells::System::String> str , bool ignoreCase);
			 StringMatcherSimple(intrusive_ptr<Aspose::Cells::System::String> str , bool reg , bool ignoreCase);
			bool Match(intrusive_ptr<Aspose::Cells::System::String> strValue);
			 StringMatcherSimple();
		public:
			virtual ~StringMatcherSimple();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
