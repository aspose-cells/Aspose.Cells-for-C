#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDMATCHRESULT_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDMATCHRESULT_H_

#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/Collections/Hashtable.h"

using namespace Aspose::Cells::System;
using namespace Aspose::Cells::System::Collections;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {
				namespace RegularExpressions {
					class ASPOSE_CELLS_API NamedMatchResult: public IRef
					{
					public:
						virtual intrusive_ptr<ArrayList> orderedGroups() = 0;

						virtual HashtablePtr namedGroups() = 0;

						virtual StringPtr group(StringPtr groupName) = 0;

						virtual int start(StringPtr groupName) = 0;

						virtual int end(StringPtr groupName) = 0;
					};
				}
			}
		}
	}
}	// namespace System

#endif	// _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDMATCHRESULT_H_
