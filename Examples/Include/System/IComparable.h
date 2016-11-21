#ifndef _SYSTEM_ICOMPARABLE_H_
#define _SYSTEM_ICOMPARABLE_H_

#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API IComparable
			{
			public:
				virtual int CompareTo(ObjectPtr obj) = 0;
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_ICOMPARABLE_H_
