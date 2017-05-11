#ifndef _SYSTEM_COLLECTIONS_HASHTABLE_H_
#define _SYSTEM_COLLECTIONS_HASHTABLE_H_

#include "System/Object.h"
#include "System/Int32.h"
#include "System/ICloneable.h"
#include "System/String.h"
#include "System/Collections/IEnumerable.h"
#include "System/Collections/ICollection.h"
#include "System/Collections/IDictionary.h"
#include "System/Collections/IEqualityComparer.h"
#include "System/Collections/IDictionaryEnumerator.h"
#include "System/InvalidOperationException.h"
#include "System/Array.h"
#include "System/Array1D.h"
#include "System/ArgumentException.h"
#include "System/ArgumentNullException.h"
#include "System/ArgumentOutOfRangeException.h"
#include "System/Collections/KeyValuePairs.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Collections {
				class ASPOSE_CELLS_API Hashtable : public Object, public ICloneable, public IDictionary 
				{
				private:
					struct bucket : public Object
					{
						ObjectPtr key;
						ObjectPtr val;
						int hash_coll;
						bucket()
						{
							key = NULL;
							val = NULL;
							hash_coll = 0;
						}
						virtual ~bucket() {}
					};

					class HashtableEnumerator : public Object, public IDictionaryEnumerator, public ICloneable
					{
					private:
						Hashtable* hashtable;
						int bucket;
						int version;
						bool current;
						int getObjectRetType;
						ObjectPtr currentKey;
						ObjectPtr currentValue;
						//internal
						static const int Keys = 1;
						static const int Values = 2;
						static const int DictEntry = 3;
					public:
						HashtableEnumerator(Hashtable* hashtable, int getObjRetType)
						{
							this->hashtable = hashtable;
							this->bucket = hashtable->buckets->GetLength();
							this->version = hashtable->version;
							this->current = false;
							this->getObjectRetType = getObjRetType;
							this->currentKey = NULL;
							this->currentValue = NULL;
						}
						virtual ~HashtableEnumerator() {}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
						virtual ObjectPtr GetKey()
						{
							if (!this->current)
							{
								throw InvalidOperationException("InvalidOperation_EnumNotStarted");
							}
							return this->currentKey;
						}
						virtual DictionaryEntryPtr GetEntry()
						{
							if (!this->current)
							{
								throw InvalidOperationException("InvalidOperation_EnumOpCantHappen");
							}
							return NEW DictionaryEntry(this->currentKey, this->currentValue);
						}
						virtual ObjectPtr GetCurrent()
						{
							if (!this->current)
							{
								throw InvalidOperationException("InvalidOperation_EnumOpCantHappen");
							}
							if (this->getObjectRetType == 1)
							{
								return this->currentKey;
							}
							if (this->getObjectRetType == 2)
							{
								return this->currentValue;
							}
							return NEW DictionaryEntry(this->currentKey, this->currentValue);
						}
						virtual ObjectPtr GetValue()
						{
							if (!this->current)
							{
								throw InvalidOperationException("InvalidOperation_EnumOpCantHappen");
							}
							return this->currentValue;
						}
						ObjectPtr Clone()
						{
							return Object::MemberwiseClone();
						}
						virtual bool MoveNext()
						{
							if (this->version != this->hashtable->version)
							{
								throw InvalidOperationException("InvalidOperation_EnumFailedVersion");
							}
							while (this->bucket > 0)
							{
								this->bucket--;
								ObjectPtr key = this->hashtable->buckets->At(this->bucket)->key;
								if (key != NULL && key != this->hashtable->buckets)
								{
									this->currentKey = key;
									this->currentValue = this->hashtable->buckets->At(this->bucket)->val;
									this->current = true;
									return true;
								}
							}
							this->current = false;
							return false;
						}
						virtual void Reset()
						{
							if (this->version != this->hashtable->version)
							{
								throw InvalidOperationException("InvalidOperation_EnumFailedVersion");
							}
							this->current = false;
							this->bucket = this->hashtable->buckets->GetLength();
							this->currentKey = NULL;
							this->currentValue = NULL;
						}
					};
					class KeyCollection : public Object, public ICollection
					{
					private:
						Hashtable* _hashtable;
					public:
						virtual ~KeyCollection() {}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
						virtual bool IsSynchronized()
						{
							return this->_hashtable->IsSynchronized();
						}
						virtual ObjectPtr GetSyncRoot()
						{
							return this->_hashtable->GetSyncRoot();
						}
						virtual int GetCount()
						{
							return this->_hashtable->count;
						}
						KeyCollection(Hashtable* hashtable)
						{
							this->_hashtable = hashtable;
						}
						virtual void CopyTo(intrusive_ptr<Array> array0, int32_t arrayIndex)
						{
							if (array0 == NULL)
							{
								throw ArgumentNullException("array", "ArgumentNull_array");
							}
							if (array0->GetRank() != 1)
							{
								throw ArgumentException("Arg_RankMultiDimNotSupported");
							}
							if (arrayIndex < 0)
							{
								throw ArgumentOutOfRangeException("arrayIndex", "ArgumentOutOfRange_NeedNonNegNum");
							}
							if (array0->Length() - arrayIndex < this->_hashtable->count)
							{
								throw ArgumentException("Arg_ArrayPlusOffTooSmall");
							}
							Array1D<Object*>* array1 = (Array1D<Object*>*)(array0.get());
							this->_hashtable->CopyKeys(array1, arrayIndex);
						}
						virtual IEnumeratorPtr GetEnumerator()
						{
							return NEW Hashtable::HashtableEnumerator(this->_hashtable, 1);
						}
					};
					typedef intrusive_ptr<KeyCollection> KeyCollectionPtr;

					class ValueCollection : public Object, public ICollection
					{
					private:
						Hashtable* _hashtable;
					public:
						virtual ~ValueCollection() {}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
						virtual bool IsSynchronized()
						{
							return this->_hashtable->IsSynchronized();
						}
						virtual ObjectPtr GetSyncRoot()
						{
							return this->_hashtable->GetSyncRoot();
						}
						virtual int GetCount()
						{
							return this->_hashtable->GetCount();
						}
						ValueCollection(Hashtable* hashtable)
						{
							this->_hashtable = hashtable;
						}
						virtual void CopyTo(intrusive_ptr<Array> array0, int32_t arrayIndex)
						{
							if (array0 == NULL)
							{
								throw ArgumentNullException("array", "ArgumentNull_array");
							}
							if (array0->GetRank() != 1)
							{
								throw ArgumentException("Arg_RankMultiDimNotSupported");
							}
							if (arrayIndex < 0)
							{
								throw ArgumentOutOfRangeException("arrayIndex", "ArgumentOutOfRange_NeedNonNegNum");
							}
							if (array0->Length() - arrayIndex < this->_hashtable->count)
							{
								throw ArgumentException("Arg_ArrayPlusOffTooSmall");
							}
							Array1D<Object*>* array1 = (Array1D<Object*>*)(array0.get());
							this->_hashtable->CopyValues(array1, arrayIndex);
						}
						virtual IEnumeratorPtr GetEnumerator()
						{
							return NEW Hashtable::HashtableEnumerator(this->_hashtable, 2);
						}
					};
					typedef intrusive_ptr<ValueCollection> ValueCollectionPtr;

				private:
					static const int HashPrime = 101;
					Array1D<bucket*>* buckets;
					int count;
					int occupancy;
					int loadsize;
					float loadFactor;
					int version;
					bool isWriterInProgress;
					ICollectionPtr keys;
					ICollectionPtr values;
					IEqualityComparerPtr _keycomparer;
					ObjectPtr _syncRoot;
					static const int InitialSize = 3;
				private:
					uint32_t InitHash(ObjectPtr key, int hashsize, uint32_t &seed, uint32_t &incr);
					void Insert(ObjectPtr key, ObjectPtr nvalue, bool add);
					void expand();
					void rehash();
					void rehash(int newsize, bool forceNewHashCode);
					void putEntry(Array1D<bucket*>* newBuckets, ObjectPtr key, ObjectPtr nvalue, int hashcode);
					void UpdateVersion();
					void CopyKeys(intrusive_ptr<Array1D<Object*>> array0, int arrayIndex);
					void CopyValues(intrusive_ptr<Array1D<Object*>> array0, int arrayIndex);
					void CopyEntries(intrusive_ptr<Array1D<Object*>> array0, int arrayIndex);
					void InitVars();
					void FreeCurrBuckets();

				protected:
					virtual int GetHash(ObjectPtr key);
					virtual bool KeyEquals(ObjectPtr item, ObjectPtr key);

				public:
					Hashtable();
					virtual ~Hashtable();
					Hashtable(int capacity);
					Hashtable(int capacity, float loadFactor);
					Hashtable(int capacity, IEqualityComparerPtr equalityComparer);
					Hashtable(int capacity, float loadFactor, IEqualityComparerPtr equalityComparer);
					Hashtable(bool trash);
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}

					virtual int GetCount() { return this->count; }
					virtual bool IsReadOnly() { return false; }
					virtual bool IsFixedSize() { return false; }
					virtual bool IsSynchronized() { return false; }

				public:
					virtual ObjectPtr Clone();
					virtual IEnumeratorPtr GetEnumerator();		
					virtual void Add(ObjectPtr key, ObjectPtr value);
					virtual ObjectPtr Get(ObjectPtr key);
					virtual void Set(ObjectPtr key, ObjectPtr val);
					virtual void Clear();
					virtual bool Contains(ObjectPtr key);
					virtual bool ContainsKey(ObjectPtr key);
					virtual bool ContainsValue(ObjectPtr value);
					virtual ICollectionPtr GetKeys();
					virtual ICollectionPtr GetValues();
					virtual ObjectPtr GetSyncRoot();
					virtual void Remove(ObjectPtr obj);
					virtual void CopyTo(intrusive_ptr<Array> array0, int arrayIndex);
					virtual intrusive_ptr<Array1D<KeyValuePairs*>> ToKeyValuePairsArray();		

				public:
					static intrusive_ptr<Hashtable> Synchronized(intrusive_ptr<Hashtable> table);

				};

				typedef intrusive_ptr<Hashtable> HashtablePtr;
			}
		}
	}
}

#endif	// _SYSTEM_COLLECTIONS_HASHTABLE_H_
