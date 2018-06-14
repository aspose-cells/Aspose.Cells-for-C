#ifndef _SYSTEM_COLLECTIONS_IENUMERATOR_H_
#define _SYSTEM_COLLECTIONS_IENUMERATOR_H_
#include "System/Object.h"

#include <boost/intrusive_ptr.hpp>
#include "System/reference_counter.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Collections
			{
				class ASPOSE_CELLS_API IEnumerator : public IRef
				{
				public:
					virtual ObjectPtr GetCurrent() = 0;
					virtual bool MoveNext() = 0;
					virtual void Reset() = 0;
				};

				typedef intrusive_ptr<IEnumerator> IEnumeratorPtr;
			}
		}
	}
}
#endif	// _SYSTEM_COLLECTIONS_IENUMERATOR_H_