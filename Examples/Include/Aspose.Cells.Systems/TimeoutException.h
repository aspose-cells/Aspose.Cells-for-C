#ifndef _SYSTEM_TIMEOUTEXCEPTION_H_
#define _SYSTEM_TIMEOUTEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
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