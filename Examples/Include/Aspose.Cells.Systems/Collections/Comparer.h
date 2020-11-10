#ifndef _SYSTEM_COLLECTIONS_COMPARER_H_
#define _SYSTEM_COLLECTIONS_COMPARER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/IComparer.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Collections {

				class ASPOSE_CELLS_API Comparer : public IComparer, public Object
				{
				public:
					Comparer();
					virtual ~Comparer() {}
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}
					int Compare(ObjectPtr x, ObjectPtr y);

				};

			}	// namespace Collections
		}	// namespace Systems
	}
}

#endif	// _SYSTEM_COLLECTIONS_COMPARER_H_
