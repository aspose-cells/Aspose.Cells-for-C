#ifndef _SYSTEM_COLLECTIONS_SORTEDLIST_H_
#define _SYSTEM_COLLECTIONS_SORTEDLIST_H_

#include "System/Object.h"
#include "System/ArrayHelper.h"
#include "System/Array.h"
#include "System/Array1D.h"
#include "System/ICloneable.h"
#include "System/ArgumentNullException.h"
#include "System/ArgumentOutOfRangeException.h"
#include "System/NotSupportedException.h"
#include "System/InvalidOperationException.h"
#include "System/Collections/ICollection.h"
#include "System/Collections/IEnumerable.h"
#include "System/Collections/IDictionary.h"
#include "System/Collections/IList.h"
#include "System/Collections/Comparer.h"
#include "System/Collections/KeyValuePairs.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {
				class ASPOSE_CELLS_API SortedList : public Object, public IDictionary, public ICloneable
				{
				private:
					class KeyList : public Object, public IList
					{
					private:
						SortedList* sortedList;
					public:
						KeyList(SortedList* sortedList)
						{
							this->sortedList = sortedList;
						}
						virtual ~KeyList() {}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
						virtual int GetCount()
						{
							return this->sortedList->_size;
						}
						virtual bool IsReadOnly()
						{
							return true;
						}
						virtual bool IsFixedSize()
						{
							return true;
						}
						virtual bool IsSynchronized()
						{
							return this->sortedList->IsSynchronized();
						}
						virtual ObjectPtr GetSyncRoot()
						{
							return this->sortedList->GetSyncRoot();
						}
						virtual ObjectPtr Get(int index)
						{
							return this->sortedList->GetKey(index);
						}
						virtual void Set(int index, ObjectPtr val)
						{
							throw NEW NotSupportedException("NotSupported_KeyCollectionSet");
						}
						virtual int Add(ObjectPtr key)
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
						virtual void Clear()
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
						virtual bool Contains(ObjectPtr key)
						{
							return this->sortedList->Contains(key);
						}
						virtual void CopyTo(intrusive_ptr<Array> array0, int arrayIndex)
						{
							if (array0 != NULL && array0->GetRank() != 1)
							{
								throw NEW ArgumentException("Arg_RankMultiDimNotSupported");
							}
							this->sortedList->keys->CopyTo(array0, arrayIndex, this->sortedList->GetCount());
						}
						virtual void Insert(int index, ObjectPtr value)
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
						virtual IEnumeratorPtr GetEnumerator()
						{
							return NEW SortedList::SortedListEnumerator(this->sortedList, 0, this->sortedList->GetCount(), 1);
						}
						virtual int IndexOf(ObjectPtr key)
						{
							if (key == NULL)
							{
								throw NEW ArgumentNullException("key", "ArgumentNull_Key");
							}
							int num = ArrayHelper::BinarySearch(this->sortedList->keys, 0, this->sortedList->GetCount(), key, this->sortedList->comparer);
							if (num >= 0)
							{
								return num;
							}
							return -1;
						}
						virtual void Remove(ObjectPtr key)
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
						virtual void RemoveAt(int index)
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
					};

					class ValueList : public Object, public IList
					{
					private:
						SortedList* sortedList;
					public:
						ValueList(SortedList* sortedList)
						{
							this->sortedList = sortedList;
						}
						virtual ~ValueList() {}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
						virtual int GetCount()
						{
							return this->sortedList->_size;
						}
						virtual bool IsReadOnly()
						{
							return true;
						}
						virtual bool IsFixedSize()
						{
							return true;
						}
						virtual bool IsSynchronized()
						{
							return this->sortedList->IsSynchronized();
						}
						virtual ObjectPtr GetSyncRoot()
						{
							return this->sortedList->GetSyncRoot();
						}
						virtual ObjectPtr Get(int index)
						{
							return this->sortedList->GetByIndex(index);
						}
						virtual void Set(int index, ObjectPtr value)
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
						virtual int Add(ObjectPtr key)
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
						virtual void Clear()
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
						virtual bool Contains(ObjectPtr value)
						{
							return this->sortedList->ContainsValue(value);
						}
						virtual void CopyTo(intrusive_ptr<Array> array0, int arrayIndex)
						{
							if (array0 != NULL && array0->GetRank() != 1)
							{
								throw NEW ArgumentException("Arg_RankMultiDimNotSupported");
							}
							this->sortedList->values->CopyTo(array0, arrayIndex, this->sortedList->GetCount());
						}
						virtual void Insert(int index, ObjectPtr value)
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
						virtual IEnumeratorPtr GetEnumerator()
						{
							return NEW SortedList::SortedListEnumerator(this->sortedList, 0, this->sortedList->GetCount(), 2);
						}
						virtual int IndexOf(ObjectPtr value)
						{
							return ArrayHelper::IndexOf(this->sortedList->values, value, 0, this->sortedList->GetCount());
						}
						virtual void Remove(ObjectPtr value)
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
						virtual void RemoveAt(int index)
						{
							throw NEW NotSupportedException("NotSupported_SortedListNestedWrite");
						}
					};

					class SortedListEnumerator : public Object, public IDictionaryEnumerator, public ICloneable
					{
					protected://internal
						static const int Keys = 1;
						static const int Values = 2;
						static const int DictEntry = 3;
					private:
						SortedList* sortedList;
						ObjectPtr key;
						ObjectPtr value;
						int index;
						int startIndex;
						int endIndex;
						int version;
						bool current;
						int getObjectRetType;
					public:
						SortedListEnumerator(SortedList* sortedList, int index, int count, int getObjRetType)
						{
							this->sortedList = sortedList;
							this->index = index;
							this->startIndex = index;
							this->endIndex = index + count;
							this->version = sortedList->version;
							this->getObjectRetType = getObjRetType;
							this->current = false;
							this->key = NULL;
							this->value = NULL;
						}
						virtual ~SortedListEnumerator() {}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
						virtual ObjectPtr GetKey()
						{
							if (this->version != this->sortedList->version)
							{
								throw NEW InvalidOperationException("InvalidOperation_EnumFailedVersion");
							}
							if (!this->current)
							{
								throw NEW InvalidOperationException("InvalidOperation_EnumOpCantHappen");
							}
							return this->key;
						}
						virtual DictionaryEntryPtr GetEntry()
						{
							if (this->version != this->sortedList->version)
							{
								throw NEW InvalidOperationException("InvalidOperation_EnumFailedVersion");
							}
							if (!this->current)
							{
								throw NEW InvalidOperationException("InvalidOperation_EnumOpCantHappen");
							}
							return NEW DictionaryEntry(this->key, this->value);
						}
						virtual ObjectPtr GetCurrent()
						{
							if (!this->current)
							{
								throw NEW InvalidOperationException("InvalidOperation_EnumOpCantHappen");
							}
							if (this->getObjectRetType == 1)
							{
								return this->key;
							}
							if (this->getObjectRetType == 2)
							{
								return this->value;
							}
							return NEW DictionaryEntry(this->key, this->value);
						}
						virtual ObjectPtr GetValue()
						{
							if (this->version != this->sortedList->version)
							{
								throw NEW InvalidOperationException("InvalidOperation_EnumFailedVersion");
							}
							if (!this->current)
							{
								throw NEW InvalidOperationException("InvalidOperation_EnumOpCantHappen");
							}
							return this->value;
						}
						ObjectPtr Clone()
						{
							return Object::MemberwiseClone();
						}
						virtual bool MoveNext()
						{
							if (this->version != this->sortedList->version)
							{
								throw NEW InvalidOperationException("InvalidOperation_EnumFailedVersion");
							}
							if (this->index < this->endIndex)
							{
								this->key = this->sortedList->keys->At(this->index);
								this->value = this->sortedList->values->At(this->index);
								this->index++;
								this->current = true;
								return true;
							}
							this->key = NULL;
							this->value = NULL;
							this->current = false;
							return false;
						}
						virtual void Reset()
						{
							if (this->version != this->sortedList->version)
							{
								throw NEW InvalidOperationException("InvalidOperation_EnumFailedVersion");
							}
							this->index = this->startIndex;
							this->current = false;
							this->key = NULL;
							this->value = NULL;
						}
					};

				private:
					intrusive_ptr<Array1D<Object*>> keys;
					intrusive_ptr<Array1D<Object*>> values;
					int _size;
					int version;
					intrusive_ptr<IComparer> comparer;
					intrusive_ptr<SortedList::KeyList> keyList;
					intrusive_ptr<SortedList::ValueList> valueList;
					ObjectPtr _syncRoot;
					static const int _defaultCapacity = 16;

					void Init();
					void Insert(int index, ObjectPtr key, ObjectPtr value);
					void EnsureCapacity(int min);
					void InitVars();

				public:
					SortedList();
					SortedList(int initialCapacity);
					SortedList(intrusive_ptr<IComparer> comparer);
					virtual ~SortedList();

					virtual void add_ref() {
						++ref_count_;
					}
					virtual int release_ref() {
						return --ref_count_;
					}

					virtual bool IsReadOnly(){ return false; }
					virtual bool IsFixedSize(){ return false; }
					virtual bool IsSynchronized(){ return false; }
					virtual int GetCount(){ return this->_size; }
					virtual ICollectionPtr GetKeys(){ return this->GetKeyList(); }
					virtual ICollectionPtr GetValues(){ return this->GetValueList(); }
					virtual bool Contains(ObjectPtr key){ return this->IndexOfKey(key) >= 0; }
					virtual bool ContainsKey(ObjectPtr key){ return this->IndexOfKey(key) >= 0; }
					virtual bool ContainsValue(ObjectPtr value){ return this->IndexOfValue(value) >= 0; }
					virtual ObjectPtr GetSyncRoot();
					virtual ObjectPtr GetKey(int index);
					virtual int GetCapacity(){ return this->keys->GetLength(); };
					virtual void SetCapacity(int value);
					virtual IListPtr GetKeyList();
					virtual IListPtr GetValueList();
					virtual int IndexOfKey(ObjectPtr key);
					virtual ObjectPtr GetByIndex(int index);
					virtual int IndexOfValue(ObjectPtr value);
					virtual ObjectPtr Get(ObjectPtr key);
					virtual void Set(ObjectPtr key, ObjectPtr value);
					virtual void Add(ObjectPtr key, ObjectPtr value);
					virtual void Clear();
					virtual ObjectPtr Clone();
					virtual void CopyTo(intrusive_ptr<Array> array0, int arrayIndex);
					virtual Array1D<KeyValuePairs*>* ToKeyValuePairsArray();
					virtual IEnumeratorPtr GetEnumerator();
					virtual void RemoveAt(int index);
					virtual void Remove(ObjectPtr key);
					virtual void SetByIndex(int index, ObjectPtr value);

				};
			}
		}
	}
}
#endif//_SYSTEM_COLLECTIONS_SORTEDLIST_H_
