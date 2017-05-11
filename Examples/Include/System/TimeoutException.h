#ifndef _SYSTEM_TIMEOUTEXCEPTION_H_
#define _SYSTEM_TIMEOUTEXCEPTION_H_

#include "System/Exception.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			class ASPOSE_CELLS_API TimeoutException : public Exception
			{
			public:
				TimeoutException();
				TimeoutException(StringPtr message);
				TimeoutException(StringPtr message, intrusive_ptr<Exception> innerException);
				virtual ~TimeoutException();
			};
		}
	}
}
#endif//_SYSTEM_TIMEOUTEXCEPTION_H_