#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_GROUPCOLLECTION_H_

#include "System/Object.h"
#include "System/Int32.h"
//#include "System/Collections/ICollection.h"
//#include "System/Collections/IEnumerable.h"
#include "System/Text/RegularExpressions/Match.h"

using namespace Aspose::Cells::System ;
//using namespace Aspose::Cells::System::Collections;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Text {
				namespace RegularExpressions {
					class Group;
					class ASPOSE_CELLS_API GroupCollection : public Object//, ICollection, IEnumerable
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