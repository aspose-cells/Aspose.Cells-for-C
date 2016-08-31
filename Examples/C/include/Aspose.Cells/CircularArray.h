#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"
#define STATIC_CIRCULARARRAY() 


namespace Aspose {
namespace Cells {
namespace Collections {
	class CircularArray : public Aspose::Cells::System::Object
	{
	private:


		class CircularArrayEnumerator;

		 friend class CircularArray::CircularArrayEnumerator;

		
	class CircularArrayEnumerator : public Aspose::Cells::System::Collections::IEnumerator , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Collections::CircularArray> array;
			Aspose::Cells::System::Int32 pos;
			bool unique;
	public:

			 CircularArrayEnumerator(intrusive_ptr<Aspose::Cells::Collections::CircularArray> arr);
			bool MoveNext();
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			void Reset();
			 CircularArrayEnumerator();
		public:
			virtual ~CircularArrayEnumerator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> _arr;
			Aspose::Cells::System::Int32 _startPos;
			Aspose::Cells::System::Int32 _nextPos;
	public:

			void Dispose();
			 CircularArray(Aspose::Cells::System::Int32 size);
			intrusive_ptr<Aspose::Cells::System::Object> Get(Aspose::Cells::System::Int32 index);
			void Set(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::System::Int32 GetCount();
			intrusive_ptr<Aspose::Cells::System::Object> GetFirst();
			intrusive_ptr<Aspose::Cells::System::Object> GetLast();
			bool IsFull();
			void Clear();
			void Add(intrusive_ptr<Aspose::Cells::System::Object> value);
			void MoveToLast(Aspose::Cells::System::Int32 index);
			void MoveToLast(intrusive_ptr<Aspose::Cells::System::Object> val);
			void Remove(Aspose::Cells::System::Int32 index);
			void RemoveNull();
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			 CircularArray();
		public:
			virtual ~CircularArray();
	};

}

}

}
