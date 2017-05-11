#ifndef _SYSTEM_COLLECTIONS_IDICTIONARY_H_
#define _SYSTEM_COLLECTIONS_IDICTIONARY_H_

#include "System/Object.h"
#include "System/Collections/ICollection.h"
#include "System/Collections/IEnumerable.h"
#include "System/Collections/IDictionaryEnumerator.h"
#include "System/Collections/IEnumerator.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Collections
			{
				class ASPOSE_CELLS_API IDictionary : public ICollection
				{
				public:
					virtual ObjectPtr Get(ObjectPtr key) = 0;
					virtual void Set(ObjectPtr key, ObjectPtr val) = 0;
					virtual ICollectionPtr GetKeys() = 0;
					virtual ICollectionPtr GetValues() = 0;
					virtual bool IsReadOnly() = 0;
					virtual bool IsFixedSize() = 0;
					virtual bool Contains(ObjectPtr key) = 0;
					virtual void Add(ObjectPtr key, ObjectPtr value) = 0;
					virtual void Clear() = 0;
					virtual IEnumeratorPtr GetEnumerator() = 0;
					virtual void Remove(ObjectPtr key) = 0;


				};
			}
		}
	}
}
#endif	// _SYSTEM_COLLECTIONS_IDICTIONARY_H_