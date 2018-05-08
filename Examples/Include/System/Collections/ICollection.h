#ifndef _SYSTEM_COLLECTIONS_ICOLLECTION_H_
#define _SYSTEM_COLLECTIONS_ICOLLECTION_H_

#include "System/Collections/IEnumerable.h"
#include "System/Object.h"
#include <boost/intrusive_ptr.hpp>
#include "System/reference_counter.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			class Array;
		}
	}
}

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Collections
			{
				class ASPOSE_CELLS_API ICollection : public IEnumerable
				{
				public:
					virtual int GetCount() = 0;
					virtual bool IsSynchronized() = 0;
					virtual ObjectPtr GetSyncRoot() = 0;
					virtual void CopyTo(intrusive_ptr<Array> array0, int32_t index) = 0;
				};

				typedef intrusive_ptr<ICollection> ICollectionPtr;
			}
		}
	}
}
#endif	// _SYSTEM_COLLECTIONS_ICOLLECTION_H_