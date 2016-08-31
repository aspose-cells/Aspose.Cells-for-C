#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#include "CellValueType.h"
#define STATIC_SORTEDVALUE() 


namespace Aspose {
namespace Cells {
	class SortedValue : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::CellValueType ValueType;
			intrusive_ptr<Aspose::Cells::System::Object> Value;
			Aspose::Cells::System::Int32 ValueRank;
			Aspose::Cells::System::Int32 CustomSort;
			 SortedValue();
		public:
			virtual ~SortedValue();
	};

}

}
