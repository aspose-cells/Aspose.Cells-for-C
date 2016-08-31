#ifndef _SYSTEM_OUTOFMEMORYEXCEPTION_H_
#define _SYSTEM_OUTOFMEMORYEXCEPTION_H_

#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API OutOfMemoryException : public Exception
			{
			public:
				OutOfMemoryException() : Exception() {}
				OutOfMemoryException(const char* message) : Exception(message) {}
				OutOfMemoryException(StringPtr message)
				{
					_message = message;
				}
				virtual ~OutOfMemoryException() {}
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_OUTOFMEMORYEXCEPTION_H_


