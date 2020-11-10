#ifndef _SYSTEM_IO_ENDOFSTREAMEXCEPTION_H_
#define _SYSTEM_IO_ENDOFSTREAMEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace IO {

				class ASPOSE_CELLS_API EndOfStreamException : public Exception
				{
				public:
					EndOfStreamException(const char* message) : Exception(message) {}
					EndOfStreamException(StringPtr message) : Exception(message) {}
					virtual ~EndOfStreamException() {}
				};

			}	// namespace IO
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_IO_ENDOFSTREAMEXCEPTION_H_


