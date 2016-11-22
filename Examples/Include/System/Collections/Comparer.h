#ifndef _SYSTEM_COLLECTIONS_COMPARER_H_
#define _SYSTEM_COLLECTIONS_COMPARER_H_

#include "System/Object.h"
#include "System/Collections/IComparer.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
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
		}	// namespace System
	}
}

#endif	// _SYSTEM_COLLECTIONS_COMPARER_H_
