#ifndef _SYSTEM_IO_IOEXCEPTION_H_
#define _SYSTEM_IO_IOEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace IO {

				class ASPOSE_CELLS_API IOException : public Exception
				{
				public:
					IOException(const char* message) : Exception(message) {}
					IOException(StringPtr message) : Exception(message) {}
					virtual ~IOException() {}
				};

			}	// namespace IO
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_IO_IOEXCEPTION_H_


