#ifndef _SYSTEM_COLLECTIONS_ICOMPARER_H_
#define _SYSTEM_COLLECTIONS_ICOMPARER_H_

#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {

				class ASPOSE_CELLS_API IComparer : public IRef
				{
				public:
					virtual int Compare(ObjectPtr x, ObjectPtr y) = 0;
				};

			}	// namespace Collections
		}	// namespace System
	}
}
#endif	// _SYSTEM_COLLECTIONS_ICOMPARER_H_
