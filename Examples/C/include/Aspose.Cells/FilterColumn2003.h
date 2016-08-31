#pragma once
#include "System/Object.h"
//#include "System/Double.h"
#include "FilterOperatorType.h"
#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/DateTime.h"
//#include "System/Boxing.h"
//#include "System/String.h"
#define STATIC_FILTERCOLUMN2003() 

namespace Aspose {
namespace Cells {
class FilterColumn;
class FilterColumnCollection;
}
}

namespace Aspose {
namespace Cells {
	class FilterColumn2003 : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 FieldIndex;
			Aspose::Cells::System::UInt16 Option;
			Aspose::Cells::FilterOperatorType FilterOperatorType1;
			Aspose::Cells::FilterOperatorType FilterOperatorType2;
			intrusive_ptr<Aspose::Cells::System::Object> Criteria2;
			intrusive_ptr<Aspose::Cells::System::Object> Criteria1;
			 FilterColumn2003(Aspose::Cells::System::Int32 fieldIndex);
			void GetTop10Option(bool& isTop , bool& isPercent , Aspose::Cells::System::Int32& items);
			bool IsAnd();
			bool IsSimple1();
			bool IsSimple2();
			intrusive_ptr<Aspose::Cells::FilterColumn> ToFilterColumn(intrusive_ptr<Aspose::Cells::FilterColumnCollection> columns);
			 FilterColumn2003(intrusive_ptr<Aspose::Cells::FilterColumn> filterColumn);
			bool IsTop10();
			 FilterColumn2003();
		public:
			virtual ~FilterColumn2003();
	};

}

}
