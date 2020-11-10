#ifndef _SYSTEM_FORMATEXCEPTION_H_
#define _SYSTEM_FORMATEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API FormatException : public Exception
			{
			public:
				FormatException(const char* message) : Exception(message) {}
				FormatException(StringPtr message)
				{
					_message = message;
				}
				virtual ~FormatException() {}
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_FORMATEXCEPTION_H_


