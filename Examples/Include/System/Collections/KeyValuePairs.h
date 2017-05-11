#ifndef _SYSTEM_COLLECTIONS_KEYVALUEPAIRS_H_
#define _SYSTEM_COLLECTIONS_KEYVALUEPAIRS_H_

#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {

				class ASPOSE_CELLS_API KeyValuePairs : public Object
				{
				private:
					ObjectPtr key;
					ObjectPtr value;
				public:
					ObjectPtr GetKey()
					{
						return this->key;
					}
					ObjectPtr GetValue()
					{
						return this->value;
					}
					KeyValuePairs(ObjectPtr key, ObjectPtr value)
					{
						this->value = value;
						this->key = key;
					}
				};
				typedef intrusive_ptr<KeyValuePairs> KeyValuePairsPtr;
			}
		}
	}
}
#endif//_SYSTEM_COLLECTIONS_KEYVALUEPAIRS_H_