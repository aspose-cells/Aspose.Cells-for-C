#ifndef _SYSTEM_COLLECTIONS_ARRAYLIST_H_
#define _SYSTEM_COLLECTIONS_ARRAYLIST_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/Array.h"
#include "Aspose.Cells.Systems/Type.h"
#include "Aspose.Cells.Systems/Collections/IEnumerator.h"
#include "Aspose.Cells.Systems/Collections/IList.h"
#include "Aspose.Cells.Systems/InvalidOperationException.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Collections {
				class IComparer;
				class ASPOSE_CELLS_API ArrayList : public Object, public ICloneable, public IList
				{
				public:
					ArrayList();
					ArrayList(int capacity);
					ArrayList(intrusive_ptr<ICollection> c);
					ArrayList(intrusive_ptr<Aspose::Cells::Systems::Collections::ArrayList> &);
					ArrayList(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Object*>> values);
					virtual ~ArrayList();
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}

					int GetVersion();

					virtual int GetCount();
					virtual int GetCapacity();
					virtual void SetCapacity(int capacity);
					virtual void Clear();
					virtual int Add(ObjectPtr value);
					virtual void Insert(int index, ObjectPtr value);

					virtual ObjectPtr Get(int index);
					virtual void Set(int index, ObjectPtr value);
					virtual bool Contains(ObjectPtr item);

					virtual int IndexOf(ObjectPtr value);
					virtual int IndexOf(ObjectPtr value, int startIndex);
					virtual int IndexOf(ObjectPtr value, int startIndex, int count);

					virtual void Remove(ObjectPtr value);
					virtual void RemoveAt(int index);

					virtual void Sort();
					virtual void Sort(intrusive_ptr<IComparer> comparer);
					virtual void Sort(int index, int count, intrusive_ptr<IComparer> comparer);

					virtual bool IsReadOnly(){ return false; };
					virtual bool IsFixedSize(){ return false; };
					virtual bool IsSynchronized(){ return false; };
					virtual ObjectPtr GetSyncRoot();
					virtual void CopyTo(intrusive_ptr<Array> array0);
					virtual void CopyTo(intrusive_ptr<Array> array0, int arrayIndex);
					virtual IEnumeratorPtr GetEnumerator();
					virtual void AddRange(intrusive_ptr<ICollection> c);
					virtual void InsertRange(int index, intrusive_ptr<ICollection> c);
					virtual ObjectPtr Clone();
					virtual void RemoveRange(int index, int count);
					intrusive_ptr<Array1D<Object*>> ToArray();
					intrusive_ptr<Array> ToArray(intrusive_ptr<Type> type);
					intrusive_ptr<Array1D<Object*>> ToArrayTest(intrusive_ptr<Type> type);
					intrusive_ptr<Array> ToArrayTest2(intrusive_ptr<Type> type);
					virtual void Reverse();
					virtual void Reverse(int index, int count);

					virtual int BinarySearch(ObjectPtr value);
					virtual int BinarySearch(ObjectPtr value, intrusive_ptr<IComparer> comparer);
					virtual int BinarySearch(int index, int count, ObjectPtr value, intrusive_ptr<IComparer> comparer);

				private:
					void EnsureCapacity(int capacity);
					//ArrayList(const ArrayList&) {}
					Object** ReverseArray(Object**orig, int a, int b);

				private:
					const int	_defaultCapacity = 4;
					Object**	_items;
					int			_capacity;
					int			_size;
					int			_version;				
				};

				typedef intrusive_ptr<ArrayList> ArrayListPtr;

			}	// namespace Collections
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_COLLECTIONS_ARRAYLIST_H_
