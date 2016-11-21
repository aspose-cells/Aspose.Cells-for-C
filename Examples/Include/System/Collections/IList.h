#ifndef _SYSTEM_COLLECTIONS_ILIST_H_
#define _SYSTEM_COLLECTIONS_ILIST_H_

#include "System/Object.h"
#include "System/Collections/ICollection.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Collections
			{
				class ASPOSE_CELLS_API IList : public ICollection
				{
				public:
					virtual ObjectPtr Get(int index) = 0;
					virtual void Set(int key, ObjectPtr val) = 0;
					virtual bool IsReadOnly() = 0;
					virtual bool IsFixedSize() = 0;
					virtual int Add(ObjectPtr value) = 0;
					virtual bool Contains(ObjectPtr value) = 0;
					virtual void Clear() = 0;
					virtual int IndexOf(ObjectPtr value) = 0;
					virtual void Insert(int index, ObjectPtr value) = 0;
					virtual void Remove(ObjectPtr value) = 0;
					virtual void RemoveAt(int index) = 0;
				};
				typedef intrusive_ptr<IList> IListPtr;
			}
		}
	}
}
#endif	// _SYSTEM_COLLECTIONS_ILIST_H_