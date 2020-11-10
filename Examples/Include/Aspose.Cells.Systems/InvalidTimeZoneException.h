#ifndef _SYSTEM_INVALIDTIMEZONEEXCEPTION_H_
#define _SYSTEM_INVALIDTIMEZONEEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API InvalidTimeZoneException : public Exception
			{
			public:
				InvalidTimeZoneException(const char* message) : Exception(message) {}
				virtual ~InvalidTimeZoneException() {}
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_INVALIDTIMEZONEEXCEPTION_H_


