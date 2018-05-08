#ifndef _SYSTEM_INVALIDOPERATIONEXCEPTION_H_
#define _SYSTEM_INVALIDOPERATIONEXCEPTION_H_

#include "System/Exception.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System {

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
}	// namespace System

#endif	// _SYSTEM_INVALIDOPERATIONEXCEPTION_H_


