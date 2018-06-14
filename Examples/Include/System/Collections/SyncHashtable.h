#ifndef _SYSTEM_COLLECTIONS_SYNCHASHTABLE_H_
#define _SYSTEM_COLLECTIONS_SYNCHASHTABLE_H_

#include "System/Object.h"
#include "System/Collections/Hashtable.h"
#include "System/Collections/IEnumerable.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {

				class ASPOSE_CELLS_API SyncHashtable : public Hashtable
				{
				protected:
					HashtablePtr _table;
				public:
					int GetCount()
					{
						return this->_table->GetCount();;
					}
					bool IsReadOnly()
					{
						return this->_table->IsReadOnly();
					}
					bool IsFixedSize()
					{
						return this->_table->IsFixedSize();
					}
					bool IsSynchronized()
					{
						return true;
					}

					ObjectPtr Get(ObjectPtr key)
					{
						return this->_table->Get(key);
					}
					void Set(ObjectPtr key, ObjectPtr value)
					{
						{
							this->_table->Set(key, value);
						}
					}
					ObjectPtr GetSyncRoot()
					{
						return this->_table->GetSyncRoot();
					}
					ICollectionPtr GetKeys()
					{
						ICollectionPtr keys;
						{
							keys = this->_table->GetKeys();
						}
						return keys;
					}
					ICollectionPtr GetValues()
					{
						ICollectionPtr values;
						{
							values = this->_table->GetValues();
						}
						return values;
					}
					SyncHashtable(HashtablePtr table) : Hashtable(false)
					{
						this->_table = table;
					}
					void Add(ObjectPtr key, ObjectPtr value)
					{
						{
							this->_table->Add(key, value);
						}
					}
					void Clear()
					{
						{
							this->_table->Clear();
						}
					}
					bool Contains(ObjectPtr key)
					{
						return this->_table->Contains(key);
					}
					bool ContainsKey(ObjectPtr key)
					{
						if (key == NULL)
						{
							throw ArgumentNullException("key", "ArgumentNull_Key");
						}
						return this->_table->ContainsKey(key);
					}
					bool ContainsValue(ObjectPtr key)
					{
						bool result;
						{
							result = this->_table->ContainsValue(key);
						}
						return result;
					}
					void CopyTo(intrusive_ptr<Array> array0, int arrayIndex)
					{
						{
							this->_table->CopyTo(array0, arrayIndex);
						}
					}
					ObjectPtr Clone()
					{
						ObjectPtr result;
						{
							result = Hashtable::Synchronized(dynamic_pointer_cast<Hashtable>(this->_table->Clone()));
						}
						return result;
					}
					IEnumeratorPtr GetEnumerator()
					{
						return this->_table->GetEnumerator();
					}
					void Remove(ObjectPtr key)
					{
						{
							this->_table->Remove(key);
						}
					}
					void OnDeserialization(ObjectPtr sender)
					{
					}
					intrusive_ptr<Array1D<KeyValuePairs*>> ToKeyValuePairsArray()
					{
						return this->_table->ToKeyValuePairsArray();
					}


				};
			}
		}
	}
}
#endif//_SYSTEM_COLLECTIONS_SYNCHASHTABLE_H_