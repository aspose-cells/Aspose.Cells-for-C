#ifndef _SYSTEM_GLOBALIZATION_KOREANCALENDAR_H_
#define _SYSTEM_GLOBALIZATION_KOREANCALENDAR_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/ICloneable.h"
#include "System/Globalization/CalendarC.h"

using namespace Aspose::Cells::System;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Globalization {
				class ASPOSE_CELLS_API KoreanCalendar : public CalendarC
				{
				public:
					KoreanCalendar(StringPtr pattern);
					KoreanCalendar(KoreanCalendar& jc);
					virtual ~KoreanCalendar();

					ObjectPtr Clone();
				};
			}
		}
	}
}
#endif//_SYSTEM_GLOBALIZATION_KOREANCALENDAR_H_