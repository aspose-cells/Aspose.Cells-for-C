#ifndef _SYSTEM_GLOBALIZATION_JAPANESECALENDAR_H_
#define _SYSTEM_GLOBALIZATION_JAPANESECALENDAR_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/ICloneable.h"
#include "System/Globalization/CalendarC.h"

using namespace Aspose::Cells::System;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Globalization {
				class ASPOSE_CELLS_API JapaneseCalendar : public CalendarC
				{
				public:
					JapaneseCalendar(StringPtr pattern);
					JapaneseCalendar(JapaneseCalendar& jc);
					virtual ~JapaneseCalendar();

					ObjectPtr Clone();
				};
			}
		}
	}
}
#endif//_SYSTEM_GLOBALIZATION_JAPANESECALENDAR_H_