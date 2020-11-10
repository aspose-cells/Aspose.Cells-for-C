#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Text/RegularExpressions/Match.h"

using namespace Aspose::Cells::Systems;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace Text {
				namespace RegularExpressions {
					class Group;
					class ASPOSE_CELLS_API GroupCollection : public Object
					{
						private:
							intrusive_ptr<Match> mMatch;

						public:
							GroupCollection(intrusive_ptr<Match> match);

							intrusive_ptr<Group> Get(int index);
							Int32 GetCount();
							intrusive_ptr<Group> Get(StringPtr groupName);

					};
				}
			}
		}
	}
}
#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_H_