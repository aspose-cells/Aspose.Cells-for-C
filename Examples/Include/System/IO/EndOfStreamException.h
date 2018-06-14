#ifndef _SYSTEM_IO_ENDOFSTREAMEXCEPTION_H_
#define _SYSTEM_IO_ENDOFSTREAMEXCEPTION_H_

#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace IO {

				class ASPOSE_CELLS_API EndOfStreamException : public Exception
				{
				public:
					EndOfStreamException(const char* message) : Exception(message) {}
					EndOfStreamException(StringPtr message) : Exception(message) {}
					virtual ~EndOfStreamException() {}
				};

			}	// namespace IO
		}	// namespace System
	}
}
#endif	// _SYSTEM_IO_ENDOFSTREAMEXCEPTION_H_


