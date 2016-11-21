#ifndef _SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_H_
#define _SYSTEM_COLLECTIONS_IEQUALITYCOMPARER_H_

#include "System/Object.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
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