#pragma once
#include "System/DateTime.h"
#include "System/Byte.h"
#include "DateTimeGroupingType.h"
#include "System/Int32.h"
#include "System/UInt16.h"
#include "System/Object.h"
#define STATIC_DATETIMEGROUPITEM() 

namespace Aspose {
namespace Cells {
class Cell;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API DateTimeGroupItem : public Aspose::Cells::System::Object
#else	class DateTimeGroupItem : public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			Aspose::Cells::DateTimeGroupingType m_DateTimeGroupingType;
			Aspose::Cells::System::UInt16 m_Year;
			Aspose::Cells::System::Byte m_Month;
			Aspose::Cells::System::Byte m_Day;
			Aspose::Cells::System::Byte m_Hour;
			Aspose::Cells::System::Byte m_Minute;
			Aspose::Cells::System::Byte m_Second;
	public:

			void Copy(intrusive_ptr<Aspose::Cells::DateTimeGroupItem> item);
			 DateTimeGroupItem();
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::Cell> cell);
			bool IsVisibleRow(intrusive_ptr<Aspose::Cells::System::Object> o);
			intrusive_ptr<Aspose::Cells::System::DateTime> GetMinValue();
			 DateTimeGroupItem(Aspose::Cells::DateTimeGroupingType type , Aspose::Cells::System::Int32 year , Aspose::Cells::System::Int32 month , Aspose::Cells::System::Int32 day , Aspose::Cells::System::Int32 hour , Aspose::Cells::System::Int32 minute , Aspose::Cells::System::Int32 second);
			Aspose::Cells::DateTimeGroupingType GetDateTimeGroupingType();
			void SetDateTimeGroupingType(Aspose::Cells::DateTimeGroupingType value);
			Aspose::Cells::System::Int32 GetYear();
			void SetYear(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetMonth();
			void SetMonth(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetDay();
			void SetDay(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetHour();
			void SetHour(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetMinute();
			void SetMinute(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 GetSecond();
			void SetSecond(Aspose::Cells::System::Int32 value);
		public:
			virtual ~DateTimeGroupItem();
	};

}

}
