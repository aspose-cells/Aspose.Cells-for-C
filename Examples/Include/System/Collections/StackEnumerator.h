#ifndef _SYSTEM_COLLECTIONS_STACKENUMERATOR_H_
#define _SYSTEM_COLLECTIONS_STACKENUMERATOR_H_

#include "System/Object.h"
#include "System/InvalidOperationException.h"
#include "System/Collections/Stack.h"


namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {
				class StackEnumerator : public Object, public IEnumerator, public ICloneable
				{
				private:
					intrusive_ptr<Stack> _stack;
					int _index;
					int _version;
					ObjectPtr currentElement;
				public:
					StackEnumerator(intrusive_ptr<Stack> stack)
					{
						this->_stack = stack;
						this->_version = this->_stack->_version;
						this->_index = -2;
						this->currentElement = NULL;
					}
					virtual ObjectPtr GetCurrent()
					{
						if (this->_index == -2)
						{
							throw InvalidOperationException("InvalidOperation_EnumNotStarted");
						}
						if (this->_index == -1)
						{
							throw InvalidOperationException("InvalidOperation_EnumEnded");
						}
						return this->currentElement;
					}
					
					ObjectPtr Clone()
					{
						return this->MemberwiseClone();
					}
					virtual bool MoveNext()
					{
						if (this->_version != this->_stack->_version)
						{
							throw InvalidOperationException("InvalidOperation_EnumFailedVersion");
						}
						bool flag;
						if (this->_index == -2)
						{
							this->_index = this->_stack->_size - 1;
							flag = (this->_index >= 0);
							if (flag)
							{
								this->currentElement = this->_stack->_array->GetValue(this->_index);
							}
							return flag;
						}
						if (this->_index == -1)
						{
							return false;
						}
						flag = (--this->_index >= 0);
						if (flag)
						{
							this->currentElement = this->_stack->_array->GetValue(this->_index);
						}
						else
						{
							this->currentElement = NULL;
						}
						return flag;
					}
					virtual void Reset()
					{
						if (this->_version != this->_stack->_version)
						{
							throw InvalidOperationException("InvalidOperation_EnumFailedVersion");
						}
						this->_index = -2;
						this->currentElement = NULL;
					}

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
