#pragma once
//#include "System/Exception.h"
#include "System/Array2D.h"
//#include "System/Boxing.h"
//#include "System/DayOfWeek.h"
//#include "System/TypeCode.h"
//#include "System/Type.h"
//#include "System/Math.h"
#include "System/DateTime.h"
#include "System/Double.h"
//#include "System/TimeSpan.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Collections/Hashtable.h"
//#include "System/Single.h"
#define STATIC_DATEFUNCTIONS() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class DateFunctions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> Days(Aspose::Cells::System::Double doubleValue1 , Aspose::Cells::System::Double doubleValue2);
			static intrusive_ptr<Aspose::Cells::System::Object> DateIf(Aspose::Cells::System::Double doubleValue1 , Aspose::Cells::System::Double doubleValue2 , intrusive_ptr<Aspose::Cells::System::String> unit , bool Date1904);
			static Aspose::Cells::System::Double WeekDay(Aspose::Cells::System::Int32 mod , intrusive_ptr<Aspose::Cells::System::DateTime> date);
			static intrusive_ptr<Aspose::Cells::System::Object> YearMonthDay(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static bool IsLeapYear(Aspose::Cells::System::Int32 year);
			static Aspose::Cells::System::Double European30(Aspose::Cells::System::Double date1 , Aspose::Cells::System::Double date2 , bool date1904);
			static Aspose::Cells::System::Double NASD30(Aspose::Cells::System::Double date1 , Aspose::Cells::System::Double date2 , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> YEARFRAC(intrusive_ptr<Aspose::Cells::System::DateTime> startDate , intrusive_ptr<Aspose::Cells::System::DateTime> endDate , Aspose::Cells::System::Int32 basis , bool date1904);
			static Aspose::Cells::System::Double IsoWeekNum(intrusive_ptr<Aspose::Cells::System::DateTime> dateTime , Aspose::Cells::System::Int32 type);
			static Aspose::Cells::System::Double WeekNum(intrusive_ptr<Aspose::Cells::System::DateTime> dateTime , Aspose::Cells::System::Int32 type);
			static bool IsInSameWeek(intrusive_ptr<Aspose::Cells::System::DateTime> startDate , intrusive_ptr<Aspose::Cells::System::DateTime> endDate , Aspose::Cells::System::Double d1 , Aspose::Cells::System::Double d2);
			static intrusive_ptr<Aspose::Cells::System::DateTime> WORKDAY1(intrusive_ptr<Aspose::Cells::System::DateTime> date , Aspose::Cells::System::Int32 days);
			static intrusive_ptr<Aspose::Cells::System::DateTime> WORKDAY2(intrusive_ptr<Aspose::Cells::System::DateTime> date , Aspose::Cells::System::Int32 days);
			static intrusive_ptr<Aspose::Cells::System::Object> WORKDAYINTL(intrusive_ptr<Aspose::Cells::System::DateTime> date , Aspose::Cells::System::Int32 days , intrusive_ptr<Aspose::Cells::System::Object> type , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::DateTime*>> holidays);
			static intrusive_ptr<Aspose::Cells::System::Object> WORKDAYINTL(intrusive_ptr<Aspose::Cells::System::DateTime> date , Aspose::Cells::System::Int32 days , intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::DateTime*>> holidays);
			static intrusive_ptr<Aspose::Cells::System::Object> WORKDAY(intrusive_ptr<Aspose::Cells::System::DateTime> date , Aspose::Cells::System::Int32 days , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::DateTime*>> holidays);
			static intrusive_ptr<Aspose::Cells::System::Object> NETWORKDAYSINTL(intrusive_ptr<Aspose::Cells::System::DateTime> startDate , intrusive_ptr<Aspose::Cells::System::DateTime> endDate , intrusive_ptr<Aspose::Cells::System::Object> type , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::DateTime*>> holidays , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> NETWORKDAYSINTL(intrusive_ptr<Aspose::Cells::System::DateTime> startDate , intrusive_ptr<Aspose::Cells::System::DateTime> endDate , intrusive_ptr<Aspose::Cells::System::String> type , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::DateTime*>> holidays , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> NETWORKDAYS(intrusive_ptr<Aspose::Cells::System::DateTime> startDate , intrusive_ptr<Aspose::Cells::System::DateTime> endDate , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::DateTime*>> holidays , bool date1904);
			static intrusive_ptr<Aspose::Cells::System::Object> DateArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> childResult , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			static intrusive_ptr<Aspose::Cells::System::Object> Date(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> childResult , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 DateFunctions();
		public:
			virtual ~DateFunctions();
	};

}

}

}
