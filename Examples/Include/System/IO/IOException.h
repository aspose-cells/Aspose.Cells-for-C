#ifndef _SYSTEM_IO_IOEXCEPTION_H_
#define _SYSTEM_IO_IOEXCEPTION_H_

#include "System/Exception.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace IO {

				class ASPOSE_CELLS_API IOException : public Exception
				{
				public:
					IOException(const char* message) : Exception(message) {}
					IOException(StringPtr message) : Exception(message) {}
					virtual ~IOException() {}
				};

			}	// namespace IO
		}	// namespace System
	}
}
#endif	// _SYSTEM_IO_IOEXCEPTION_H_


