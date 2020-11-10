#ifndef _SYSTEM_COLLECTIONS_IENUMERABLE_H_
#define _SYSTEM_COLLECTIONS_IENUMERABLE_H_
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/IEnumerator.h"

namespace Aspose {
	namespace Cells {
		namespace Systems
		{
			namespace Collections
			{
				class ASPOSE_CELLS_API IEnumerable : public IRef
				{
				public:
					virtual IEnumeratorPtr GetEnumerator() = 0;
				};
			}
		}
	}
}
#endif	// _SYSTEM_COLLECTIONS_IENUMERABLE_H_