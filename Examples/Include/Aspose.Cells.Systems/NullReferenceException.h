#ifndef _SYSTEM_NULLREFERENCEEXCEPTION_H_
#define _SYSTEM_NULLREFERENCEEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API NullReferenceException : public Exception
			{
			public:
				NullReferenceException(const char* message) : Exception(message) {}
				NullReferenceException(StringPtr message)
				{
					_message = message;
					Exception::SetErrorCode(-2147467261);
				}

				virtual ~NullReferenceException() {}
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_NULLREFERENCEEXCEPTION_H_


