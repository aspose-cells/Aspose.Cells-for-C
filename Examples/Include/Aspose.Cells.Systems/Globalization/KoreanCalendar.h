#ifndef _SYSTEM_GLOBALIZATION_KOREANCALENDAR_H_
#define _SYSTEM_GLOBALIZATION_KOREANCALENDAR_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/Globalization/CalendarC.h"

using namespace Aspose::Cells::Systems;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
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