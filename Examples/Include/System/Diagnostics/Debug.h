#ifndef _SYSTEM_DIAGNOSTICS_DEBUG_H_
#define _SYSTEM_DIAGNOSTICS_DEBUG_H_

#include "System/Object.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Diagnostics
			{
				class ASPOSE_CELLS_API Debug : public Object
				{
				private:

				public:
					static void Assert(bool condition);
					static void Assert(bool condition, StringPtr message);
					static void Assert(bool condition, StringPtr message, StringPtr detailMessage);
					static void Fail(StringPtr message);
					static void WriteLine(StringPtr message);
				};
			}
		}
	}
}
#endif//_SYSTEM_DIAGNOSTICS_DEBUG_H_
