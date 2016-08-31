#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_SORTEDSTRINGARRAYLIST() 


namespace Aspose {
namespace Cells {
namespace GenericCollection {
	class SortedStringArrayList : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> m_Data;
			Aspose::Cells::System::Int32 m_Count;
	public:

			 SortedStringArrayList();
			void Add(intrusive_ptr<Aspose::Cells::System::String> value);
			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetCapacity();
			void SetCapacity(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::String> Get(Aspose::Cells::System::Int32 index);
			bool CheckExist(intrusive_ptr<Aspose::Cells::System::String> str , Aspose::Cells::System::Int32& arrayIndex);
			void Clear();
			void EnsureCapacity(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 length);
		public:
			virtual ~SortedStringArrayList();
	};

}

}

}
