#ifndef _SYSTEM_TEXT_STRINGBUILDERCACHE_H_
#define _SYSTEM_TEXT_STRINGBUILDERCACHE_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Text/StringBuilder.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Text {

				class StringBuilderCache : public Object
				{
				private:
					static StringBuilder* CachedInstance;
					static const int MAX_BUILDER_SIZE = 360;

				public:
					static StringBuilder* Acquire(int capacity = 16);
					static void Release(StringBuilder* sb);
					static String* GetStringAndRelease(StringBuilder* sb);

				};
			}
		}
	}
}
#endif//_SYSTEM_TEXT_STRINGBUILDERCACHE_H_