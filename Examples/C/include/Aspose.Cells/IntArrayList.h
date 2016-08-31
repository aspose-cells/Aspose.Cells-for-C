#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Single.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_INTARRAYLIST() 


namespace Aspose {
namespace Cells {
namespace Collections {
	class IntArrayList : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> m_Data;
			Aspose::Cells::System::Int32 m_Count;
	public:

			 IntArrayList(Aspose::Cells::System::Int32 capacity);
			 IntArrayList();
			 IntArrayList(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> buffer , Aspose::Cells::System::Int32 count);
			void Add(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetCapacity();
			void SetCapacity(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 Get(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 Pop();
			void Push(Aspose::Cells::System::Int32 value);
			void Clear();
			void EnsureCapacity(Aspose::Cells::System::Int32 length);
			void Remove(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 count);
			void Insert(Aspose::Cells::System::Int32 index , Aspose::Cells::System::Int32 value);
			void Insert(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> values , Aspose::Cells::System::Int32 srcOffset , Aspose::Cells::System::Int32 length);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> ToArray();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetBuffer();
			bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expand);
		public:
			virtual ~IntArrayList();
	};

}

}

}
