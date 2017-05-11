#ifndef _SYSTEM_COLLECTIONS_STACK_H_
#define _SYSTEM_COLLECTIONS_STACK_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/Array.h"
#include "System/Array1D.h"
#include "System/ICloneable.h"
#include "System/Collections/IComparer.h"
#include "System/Collections/IDictionary.h"
#include "System/Collections/ICollection.h"
#include "System/Collections/IEnumerable.h"

using namespace Aspose::Cells::System ;
using namespace Aspose::Cells::System::Collections ;

namespace Aspose { 
namespace Cells { 
namespace System {
namespace Collections { 
	class SyncStack;
	class ASPOSE_CELLS_API Stack : public Object, public ICollection, public ICloneable
	{
		private:
			ObjectPtr _syncRoot;
			static const int _defaultCapacity = 10;
			void InitVars();
		public:
			int _size;
			int _version;
			intrusive_ptr<Array1D<Object*>> _array;
		public:
			Stack();
			Stack(int initialCapacity);
			Stack(ICollectionPtr col);
		public:
			virtual int GetCount();
			virtual bool IsSynchronized();
			virtual ObjectPtr GetSyncRoot();
			virtual void Clear();
			virtual ObjectPtr Clone();
			virtual bool Contains(ObjectPtr obj);
			virtual IEnumeratorPtr GetEnumerator();
			virtual void CopyTo(intrusive_ptr<Array> array0, int index);
			virtual ObjectPtr Peek();
			virtual ObjectPtr Pop();
			virtual void Push(ObjectPtr obj);
			virtual intrusive_ptr<Array1D<Object*>> ToArray();
			static intrusive_ptr<Stack> Synchronized(intrusive_ptr<Stack> stack);

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
#endif
