#ifndef _SYSTEM_GC_H_
#define _SYSTEM_GC_H_
#include "Object.h"
namespace Aspose {
	namespace Cells {
		namespace System {
			class GC
			{
			public:
				GC(){};
				~GC(){};
			public:
				static void Collect(){}
				static void WaitForPendingFinalizers(){}
				static void SuppressFinalize(Object* obj){}
				static long GetTotalMemory(bool forceFullCollection) { return 0; }///zxy
			};
		}
	}
}
#endif