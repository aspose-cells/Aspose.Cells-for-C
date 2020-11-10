#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDMATCHRESULT_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDMATCHRESULT_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"
#include "Aspose.Cells.Systems/Collections/Hashtable.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Collections;

namespace Aspose {
	namespace Cells {
		namespace Systems {
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
}	// namespace Systems

#endif	// _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDMATCHRESULT_H_
