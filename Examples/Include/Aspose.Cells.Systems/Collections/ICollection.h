#ifndef _SYSTEM_COLLECTIONS_ICOLLECTION_H_
#define _SYSTEM_COLLECTIONS_ICOLLECTION_H_

#include "Aspose.Cells.Systems/Collections/IEnumerable.h"
#include "Aspose.Cells.Systems/Object.h"
#include <boost/intrusive_ptr.hpp>
#include "Aspose.Cells.Systems/reference_counter.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class Array;
		}
	}
}

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems
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