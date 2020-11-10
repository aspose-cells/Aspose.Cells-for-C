#ifndef _SYSTEM_INVALIDOPERATIONEXCEPTION_H_
#define _SYSTEM_INVALIDOPERATIONEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API InvalidOperationException : public Exception
			{
			public:
				InvalidOperationException():Exception("Arg_InvalidOperationException"){};
				InvalidOperationException(const char* message) : Exception(message) {}
				InvalidOperationException(StringPtr message)
				{
					_message = message;
				}
				virtual ~InvalidOperationException() {}
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_INVALIDOPERATIONEXCEPTION_H_


