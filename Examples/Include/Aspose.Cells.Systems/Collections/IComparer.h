#ifndef _SYSTEM_COLLECTIONS_ICOMPARER_H_
#define _SYSTEM_COLLECTIONS_ICOMPARER_H_

#include "Aspose.Cells.Systems/Object.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Collections {

				class ASPOSE_CELLS_API IComparer : public IRef
				{
				public:
					virtual int Compare(ObjectPtr x, ObjectPtr y) = 0;
				};

			}	// namespace Collections
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_COLLECTIONS_ICOMPARER_H_
