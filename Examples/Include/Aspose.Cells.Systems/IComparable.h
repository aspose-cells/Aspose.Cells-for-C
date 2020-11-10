#ifndef _SYSTEM_ICOMPARABLE_H_
#define _SYSTEM_ICOMPARABLE_H_

#include "Aspose.Cells.Systems/Object.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API IComparable
			{
			public:
				virtual int CompareTo(ObjectPtr obj) = 0;
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_ICOMPARABLE_H_
