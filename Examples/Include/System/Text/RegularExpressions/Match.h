#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_H_


#include "System/Object.h"
#include "System/String.h"
#include "System/Text/RegularExpressions/Group.h"
#include "System/Text/RegularExpressions/NamedMatcher.h"
#include "System/Text/RegularExpressions/NamedPattern.h"

using namespace std;
using namespace Aspose::Cells::System;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Text {
				namespace RegularExpressions {
					class GroupCollection;
					class ASPOSE_CELLS_API Match : public Object
					{
					private:
						bool mSuccess;
						StringPtr mInput;
						intrusive_ptr<NamedMatcher> mMatcher;
						intrusive_ptr<NamedPattern> mPattern;

					public:
						Match(intrusive_ptr<NamedMatcher> matcher, bool success, StringPtr input);
						Match(intrusive_ptr<NamedPattern> pattern, StringPtr input);
						Match(intrusive_ptr<NamedPattern> pattern, StringPtr input, int startat);
						virtual ~Match() {}

						StringPtr GetValue();
						intrusive_ptr<GroupCollection> GetGroups();
						intrusive_ptr<Match> NextMatch();
						intrusive_ptr<Group> Groups(int index);
						bool GetSuccess();
						int GetIndex();
						int GetLength();
						intrusive_ptr<NamedPattern> GetPattern();
						intrusive_ptr<NamedMatcher> GetMatcher();

					};
				}
			}
		}
	}
}
#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_MATCH_H_