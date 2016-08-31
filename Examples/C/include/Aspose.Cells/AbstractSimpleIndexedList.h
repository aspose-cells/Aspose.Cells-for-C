#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Single.h"
//#include "System/Array.h"
#include "IIndexedList.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_ABSTRACTSIMPLEINDEXEDLIST() 


namespace Aspose {
namespace Cells {
namespace Collections {
	class AbstractSimpleIndexedList : public Aspose::Cells::Collections::IIndexedList
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> GetListBuffer();
			 virtual void SetListBuffer(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> value);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> CreateBuffer(Aspose::Cells::System::Int32 capacity);
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 InnerCount;
			 virtual Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position);
			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 lowPos , Aspose::Cells::System::Int32 highPos);
			void Remove(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count);
			Aspose::Cells::System::Int32 RemoveBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			Aspose::Cells::System::Int32 GetCountBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			void EnsureCapacity(Aspose::Cells::System::Int32 count);
			void Clear(Aspose::Cells::System::Int32 initCapacity);
			bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandSize);
			Aspose::Cells::System::Int32 InsertValue(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Object> v);
			Aspose::Cells::System::Int32 InsertValues(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> vs , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 count);
			 AbstractSimpleIndexedList();
		public:
			virtual ~AbstractSimpleIndexedList();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
