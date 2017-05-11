#ifndef _SYSTEM_THREADING_THREAD_H_
#define _SYSTEM_THREADING_THREAD_H_

#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Threading
			{
				class ASPOSE_CELLS_API Thread : public Object
				{
				private:

				protected:

				public:
					static void SleepT(int millisecondsTimeout);
					static void BeginCriticalRegion(){};
					static void EndCriticalRegion(){};

				};
			}
		}
	}
}
#endif//_SYSTEM_THREADING_THREAD_H_