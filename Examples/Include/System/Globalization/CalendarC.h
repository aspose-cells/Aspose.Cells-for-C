#ifndef _SYSTEM_GLOBALIZATION_CALENDAR_H_
#define _SYSTEM_GLOBALIZATION_CALENDAR_H_

#include "System/Object.h"
#include "System/ICloneable.h"
#include "unicode/datefmt.h"

using namespace Aspose::Cells::System;
using namespace icu;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			namespace Globalization {
				class ASPOSE_CELLS_API CalendarC: public ICloneable, public Object
				{
					protected:
						icu::DateFormat* m_DateFormat;
					public:
						virtual ~CalendarC();
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}
				};
				typedef intrusive_ptr<CalendarC> CalendarCPtr;
			}
		}
	}
}
#endif//_SYSTEM_GLOBALIZATION_CALENDAR_H_