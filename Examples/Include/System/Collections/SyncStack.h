#ifndef _SYSTEM_COLLECTIONS_SYNCSTACK_H_
#define _SYSTEM_COLLECTIONS_SYNCSTACK_H_

#include "System/Object.h"
#include "System/Collections/Stack.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {
				class SyncStack: public Stack
				{
				private:
					intrusive_ptr<Stack> _s;
					ObjectPtr _root;
				public:
					SyncStack(intrusive_ptr<Stack> stack)
					{
						this->_s = stack;
						this->_root = stack->GetSyncRoot();
					}
					bool IsSynchronized()
					{
						return true;
					}
					ObjectPtr GetSyncRoot()
					{
						return this->_root;
					}
					int GetCount()
					{
						int count;
						count = this->_s->GetCount();
						return count;
					}
					bool Contains(ObjectPtr obj)
					{
						bool result;
						result = this->_s->Contains(obj);
						return result;
					}
					ObjectPtr Clone()
					{
						ObjectPtr result;
						ObjectPtr tmp = this->_s->Clone();
						intrusive_ptr<Stack> tmpSta = dynamic_pointer_cast<Stack>(tmp);
						result = NEW SyncStack(tmpSta);
						return result;
					}
					void Clear()
					{
						this->_s->Clear();
					}
					void CopyTo(intrusive_ptr<Array> array, int arrayIndex)
					{
						this->_s->CopyTo(array, arrayIndex);
					}
					void Push(ObjectPtr value)
					{
						this->_s->Push(value);
					}
					ObjectPtr Pop()
					{
						ObjectPtr result;
						result = this->_s->Pop();
						return result;
					}
					intrusive_ptr<IEnumerator> GetEnumerator()
					{
						intrusive_ptr<IEnumerator> enumerator;
						enumerator = this->_s->GetEnumerator();
						return enumerator;
					}
					ObjectPtr Peek()
					{
						ObjectPtr result;
						result = this->_s->Peek();
						return result;
					}
					intrusive_ptr<Array1D<Object*>> ToArray()
					{
						intrusive_ptr<Array1D<Object*>> result;
						result = this->_s->ToArray();
						return result;
					}
				};

			}
		}
	}
}
#endif
