#ifndef _SYSTEM_GLOBALIZATION_JAPANESECALENDAR_H_
#define _SYSTEM_GLOBALIZATION_JAPANESECALENDAR_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/Globalization/CalendarC.h"

using namespace Aspose::Cells::Systems;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
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