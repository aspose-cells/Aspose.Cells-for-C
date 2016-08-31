#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
//#include "System/Collections/ICollection.h"
//#include "System/Collections/IEnumerable.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Collections;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Text {
				namespace RegularExpressions {
					class Match;
					class ASPOSE_CELLS_API MatchCollection : public Object//ICollection, IEnumerable
					{
					private:
						intrusive_ptr<ArrayList> mMatchesList;//ArrayList<Match>

					public:
						MatchCollection();
						int GetCount();
						intrusive_ptr<Match> Get(int index);
						void Add(intrusive_ptr<Match> match);
						virtual IEnumeratorPtr GetEnumerator();

					};
				}
			}
		}
	}
}
#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_MATCHCOLLECTION_H_