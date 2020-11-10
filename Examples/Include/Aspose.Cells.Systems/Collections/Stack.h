#ifndef _SYSTEM_COLLECTIONS_STACK_H_
#define _SYSTEM_COLLECTIONS_STACK_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/Collections/IComparer.h"
#include "Aspose.Cells.Systems/Collections/IDictionary.h"
#include "Aspose.Cells.Systems/Collections/ICollection.h"
#include "Aspose.Cells.Systems/Collections/IEnumerable.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Collections ;

namespace Aspose { 
namespace Cells { 
namespace Systems {
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
