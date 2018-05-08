#ifndef _SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_H_
#define _SYSTEM_COLLECTIONS_SPECIALIZED_STRINGCOLLECTION_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Collections/IList.h"
#include "System/Collections/ICollection.h"
#include "System/Collections/IEnumerable.h"
#include "System/Collections/ArrayList.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Collections ;
namespace Aspose { 
namespace Cells { 
namespace System {
namespace Collections { 
namespace Specialized { 
	class ASPOSE_CELLS_API StringCollection : public Object, public IList//, public ICollection, public IEnumerable
	{
	private:
		intrusive_ptr<ArrayList> data;// = new ArrayList();
		void InitVars();
	public:
		StringCollection();
		StringPtr GetSC(Int32 index);
		void SetSC(Int32 index, StringPtr val);
		ObjectPtr Get(int index);
		void Set(int index, ObjectPtr val);

		Int32 GetCount();
		bool IsReadOnly();
		bool IsFixedSize();
		bool IsSynchronized();
		ObjectPtr GetSyncRoot();
		//Int32 Add(StringPtr value);
		Int32 Add(ObjectPtr value);
		void AddRange(intrusive_ptr<Array1D<String*>> value);
		void Clear();
		bool Contains(ObjectPtr value);
		void CopyTo(intrusive_ptr<Array> array0, int index);
		Int32 IndexOf(ObjectPtr value);
		void Insert(Int32 index, ObjectPtr value);
		void Remove(ObjectPtr value);
		void RemoveAt(Int32 index);
		IEnumeratorPtr GetEnumerator();	

		virtual void add_ref() {
			++ref_count_;
		}

		virtual int release_ref() {
			return --ref_count_;
		}

	};
}
}
}
}
}
#endif
