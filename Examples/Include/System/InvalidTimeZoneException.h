#ifndef _SYSTEM_INVALIDTIMEZONEEXCEPTION_H_
#define _SYSTEM_INVALIDTIMEZONEEXCEPTION_H_

#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API InvalidTimeZoneException : public Exception
			{
			public:
				InvalidTimeZoneException(const char* message) : Exception(message) {}
				virtual ~InvalidTimeZoneException() {}
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_INVALIDTIMEZONEEXCEPTION_H_


