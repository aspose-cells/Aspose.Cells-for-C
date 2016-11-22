#ifndef _SYSTEM_COLLECTIONS_DICTIONARYENTRY_H_
#define _SYSTEM_COLLECTIONS_DICTIONARYENTRY_H_

#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Collections
			{
				class ASPOSE_CELLS_API DictionaryEntry : public Object
				{
				private:
					ObjectPtr _key;
					ObjectPtr _value;
				public:
					ObjectPtr GetKey(){ return this->_key; }
					void SetKey(ObjectPtr value){ this->_key = value; }
					ObjectPtr GetValue(){ return this->_value; }
					void SetValue(ObjectPtr value){ this->_value = value; }
					DictionaryEntry(ObjectPtr key, ObjectPtr value)
					{
						this->_key = key;
						this->_value = value;
					}
				};
				typedef intrusive_ptr<DictionaryEntry> DictionaryEntryPtr;
			}
		}
	}
}
#endif	// _SYSTEM_COLLECTIONS_DICTIONARYENTRY_H_