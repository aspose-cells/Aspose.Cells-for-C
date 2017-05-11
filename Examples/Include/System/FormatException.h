#ifndef _SYSTEM_FORMATEXCEPTION_H_
#define _SYSTEM_FORMATEXCEPTION_H_

#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {

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
}	// namespace System

#endif	// _SYSTEM_FORMATEXCEPTION_H_


