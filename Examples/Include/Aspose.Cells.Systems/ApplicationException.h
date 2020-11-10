#ifndef _SYSTEM_APPLICATIONEXCEPTION_H_
#define _SYSTEM_APPLICATIONEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API ApplicationException : public Exception
			{
			public:
				ApplicationException();
				ApplicationException(StringPtr message);
				ApplicationException(StringPtr message, intrusive_ptr<Exception> innerException);
				virtual ~ApplicationException();
			};
		}
	}
}
#endif//_SYSTEM_APPLICATIONEXCEPTION_H_