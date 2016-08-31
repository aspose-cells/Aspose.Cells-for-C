#ifndef _SYSTEM_THREADING_THREAD_H_
#define _SYSTEM_THREADING_THREAD_H_

//#include "System/common.h"
#include "System/Object.h"
//#include ".->/Globalization/CultureInfo.h"

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
					//intrusive_ptr<CultureInfo> GetCurrentCulture();// { get; set; }
					//void SetCurrentCulture(intrusive_ptr<CultureInfo> cult);
					//static Thread* GetCurrentThread();// { get; }
					static void SleepT(int millisecondsTimeout);
					static void BeginCriticalRegion(){};
					static void EndCriticalRegion(){};



				};
			}
		}
	}
}
#endif//_SYSTEM_THREADING_THREAD_H_