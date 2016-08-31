#pragma once
#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/String.h"
//#include "System/Boxing.h"
//#include "System/Collections/DictionaryEntry.h"
#include "System/Int32.h"
//#include "System/ArgumentException.h"
//#include "System/ArgumentOutOfRangeException.h"
#define STATIC_SORTEDINTEGERLIST() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class SortedIntegerList : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _size;
			 static const Aspose::Cells::System::Int32 _defaultCapacity;
			void EnsureCapacity(Aspose::Cells::System::Int32 min);
			void Insert(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 key , intrusive_ptr<Aspose::Cells::System::Object> value);
	public:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> keys;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> values;
			 SortedIntegerList();
			 SortedIntegerList(Aspose::Cells::System::Int32 initialCapacity);
			void Add(Aspose::Cells::System::Int32 key , intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::System::Int32 GetCapacity();
			void SetCapacity(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetCount();
			void Clear();
			intrusive_ptr<Aspose::Cells::Internal::Rendering::SortedIntegerList> CreateEmptyCopy();
			bool Contains(Aspose::Cells::System::Int32 key);
			bool ContainsKey(Aspose::Cells::System::Int32 key);
			bool ContainsValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			void CopyTo(intrusive_ptr<Aspose::Cells::System::Array> array , Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::System::Object> GetByIndex(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetKey(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::System::Object> Get(Aspose::Cells::System::Int32 key);
			void Set(Aspose::Cells::System::Int32 key , intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::System::Int32 IndexOfKey(Aspose::Cells::System::Int32 key);
			Aspose::Cells::System::Int32 IndexOfValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			void Remove(Aspose::Cells::System::Int32 key);
			void SetByIndex(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Object> value);
			void TrimToSize();
		public:
			virtual ~SortedIntegerList();
	};

}

}

}

}
