#ifndef _SYSTEM_COLLECTIONS_COLLECTIONBASE_H_
#define _SYSTEM_COLLECTIONS_COLLECTIONBASE_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/ICloneable.h"
#include "System/Collections/ICollection.h"
#include "System/Collections/IEnumerable.h"
#include "System/Collections/IList.h"
#include "System/Collections/ArrayList.h"

namespace Aspose {
	namespace Cells {
		namespace System{
			class Array;
		}
	}
}

using namespace Aspose::Cells::System;

namespace Aspose { 
	namespace Cells { 
		namespace System{
			namespace Collections {
				class ASPOSE_CELLS_API CollectionBase : public Object, public IList
				{
				private:
					intrusive_ptr<ArrayList> list;
				protected:
					CollectionBase();
					CollectionBase(Int32 capacity);
					intrusive_ptr<ArrayList> GetInnerList();
					intrusive_ptr<IList> GetList();

					virtual void OnClear(){};
					virtual void OnClearComplete(){};
					virtual void OnSet(int index, ObjectPtr oldValue, ObjectPtr newValue){};
					virtual void OnSetComplete(int index, ObjectPtr oldValue, ObjectPtr newValue){};
					virtual void OnRemove(int index, ObjectPtr value){};
					virtual void OnRemoveComplete(int index, ObjectPtr value){};
					virtual void OnInsert(int index, ObjectPtr value){};
					virtual void OnInsertComplete(int index, ObjectPtr value){};
					virtual void OnValidate(ObjectPtr value);

				public :
					ObjectPtr Get(int index);
					void Set(int index, ObjectPtr value);
					bool IsReadOnly();
					bool IsFixedSize();
					int Add(ObjectPtr value);
					bool Contains(ObjectPtr value);
					void Clear();
					int IndexOf(ObjectPtr value);
					void Insert(int index, ObjectPtr value);
					void Remove(ObjectPtr value);
					void RemoveAt(Int32 index);
					Int32 GetCount();
					bool IsSynchronized();
					ObjectPtr GetSyncRoot();
					void CopyTo(intrusive_ptr<Array> array0, int32_t index);
					intrusive_ptr<IEnumerator> GetEnumerator();

					void SetCapacity(Int32 capacity);
					Int32 GetCapacity();

					virtual ~CollectionBase() {}
					virtual void add_ref() { ++ref_count_; }
					virtual int release_ref() { return --ref_count_; }

				};

			}
		}
	}
}
#endif//_SYSTEM_COLLECTIONS_COLLECTIONBASE_H_
