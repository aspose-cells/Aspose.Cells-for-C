#ifndef _SYSTEM_NOTSUPPORTEDEXCEPTION_H_
#define _SYSTEM_NOTSUPPORTEDEXCEPTION_H_

#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API NotSupportedException : public Exception
			{
			public:
				NotSupportedException() : Exception() {}
				NotSupportedException(const char* message) : Exception(message) {}
				NotSupportedException(StringPtr message)
				{
					_message = message;
				}

				virtual ~NotSupportedException() {}
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_NOTSUPPORTEDEXCEPTION_H_


