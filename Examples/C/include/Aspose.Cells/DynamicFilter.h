#pragma once
//#include "System/Single.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "DynamicFilterType.h"
//#include "System/DateTime.h"
//#include "System/Double.h"
//#include "System/DayOfWeek.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_DYNAMICFILTER() 

namespace Aspose {
namespace Cells {
class Cell;
class Cells;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API DynamicFilter : public Aspose::Cells::System::Object
#else	class DynamicFilter : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::DynamicFilterType m_Type;
			intrusive_ptr<Aspose::Cells::System::Object> m_Value;
			intrusive_ptr<Aspose::Cells::System::Object> m_MaxValue;
	public:

			 DynamicFilter();
			void Copy(intrusive_ptr<Aspose::Cells::DynamicFilter> source);
			Aspose::Cells::DynamicFilterType GetDynamicFilterType();
			void SetDynamicFilterType(Aspose::Cells::DynamicFilterType value);
			intrusive_ptr<Aspose::Cells::System::Object> GetValue();
			void SetValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::System::Object> GetMaxValue();
			void SetMaxValue(intrusive_ptr<Aspose::Cells::System::Object> value);
			void InitValue(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::System::Object> o , bool date1904);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::Cell> cell , bool date1904);
		public:
			virtual ~DynamicFilter();
	};

}

}
