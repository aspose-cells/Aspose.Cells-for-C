#ifndef _SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_H_
#define _SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_H_

#include "Aspose.Cells.Systems/Object.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Collections {
				class ASPOSE_CELLS_API IEqualityComparer : public Object
				{
				public:
					virtual bool Equals(ObjectPtr x, ObjectPtr y) = 0;
					virtual int GetHashCode(ObjectPtr obj) = 0;
				};
				typedef intrusive_ptr<IEqualityComparer> IEqualityComparerPtr;
			}
		}
	}
}
#endif