#ifndef _SYSTEM_OUTOFMEMORYEXCEPTION_H_
#define _SYSTEM_OUTOFMEMORYEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

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
}	// namespace Systems

#endif	// _SYSTEM_OUTOFMEMORYEXCEPTION_H_


