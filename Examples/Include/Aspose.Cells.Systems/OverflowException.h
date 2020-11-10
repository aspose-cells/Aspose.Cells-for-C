#ifndef _SYSTEM_OVERFLOWEXCEPTION_H_
#define _SYSTEM_OVERFLOWEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API OverflowException : public Exception
			{
			public:
				OverflowException(const char* message) : Exception(message) {}
				OverflowException(StringPtr message)
				{
					_message = message;
				}
				virtual ~OverflowException() {}
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_OVERFLOWEXCEPTION_H_


