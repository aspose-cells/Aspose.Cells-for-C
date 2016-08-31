#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXHELPER_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXHELPER_H_

#include "System/Object.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {
				namespace RegularExpressions {
					class ASPOSE_CELLS_API RegexHelper : public Object
					{
					public:
						static int UNIX_LINES;// = 0x01;
						static int CASE_INSENSITIVE;// = 0x02;
						static int COMMENTS;// = 0x04;
						static int MULTILINE;// = 0x08;
						static int LITERAL;// = 0x10;
						static int DOTALL;// = 0x20;
						static int UNICODE_CASE;// = 0x40;
						static int CANON_EQ;// = 0x80;

						static int dotRegexOptionsToJavaRegexFlag(int options);
					};
				}
			}
		}
	}
}

#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXHELPER_H_