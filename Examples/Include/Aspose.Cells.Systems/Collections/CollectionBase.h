#ifndef _SYSTEM_COLLECTIONS_COLLECTIONBASE_H_
#define _SYSTEM_COLLECTIONS_COLLECTIONBASE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/Collections/ICollection.h"
#include "Aspose.Cells.Systems/Collections/IEnumerable.h"
#include "Aspose.Cells.Systems/Collections/IList.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"

namespace Aspose {
	namespace Cells {
		namespace Systems{
			class Array;
		}
	}
}

using namespace Aspose::Cells::Systems;

namespace Aspose { 
	namespace Cells { 
		namespace Systems{
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
