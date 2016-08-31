#pragma once
#include "System/Int64.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_LONGARRAYLIST() 


namespace Aspose {
namespace Cells {
namespace Collections {
	class LongArrayList : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> _value;
			Aspose::Cells::System::Int32 _size;
	public:

			 LongArrayList(Aspose::Cells::System::Int32 initSize);
			Aspose::Cells::System::Int32 GetCount();
			void Add(Aspose::Cells::System::Int64 val);
			void Add(Aspose::Cells::System::Int64 val , Aspose::Cells::System::Int32 count);
			void Add(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> vals , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 count);
			void Insert(Aspose::Cells::System::Int64 val , Aspose::Cells::System::Int32 pos);
			Aspose::Cells::System::Int64 Get(Aspose::Cells::System::Int32 index);
			void Set(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int64 value);
			void Remove(Aspose::Cells::System::Int32 from , Aspose::Cells::System::Int32 to);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> ToArray();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> ToArray(Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> GetBuffer();
			bool Contains(Aspose::Cells::System::Int64 v);
			void RemoveDuplicate(Aspose::Cells::System::Int32 offset , bool keepOrder);
			 LongArrayList();
		public:
			virtual ~LongArrayList();
	};

}

}

}
