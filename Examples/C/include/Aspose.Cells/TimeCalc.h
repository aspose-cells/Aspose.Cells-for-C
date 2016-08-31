#pragma once
#include "System/Object.h"
#include "System/DateTime.h"
#include "System/Double.h"
//#include "System/TimeSpan.h"
#include "System/Int32.h"
#define STATIC_TIMECALC() 


namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class TimeCalc : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 TimeCalc();
			static intrusive_ptr<Aspose::Cells::System::DateTime> EOMonth(intrusive_ptr<Aspose::Cells::System::DateTime> startDate , Aspose::Cells::System::Int32 months);
			static Aspose::Cells::System::Double Days360(Aspose::Cells::System::Double start , Aspose::Cells::System::Double end , bool isEuro , bool date1904);
			static Aspose::Cells::System::Double GetActualDaysInYear(Aspose::Cells::System::Double start , Aspose::Cells::System::Double end , bool date1904);
		public:
			virtual ~TimeCalc();
	};

}

}

}
