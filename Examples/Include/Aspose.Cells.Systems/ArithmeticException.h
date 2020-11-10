#ifndef _SYSTEM_ARITHMETICEXCEPTION_H_
#define _SYSTEM_ARITHMETICEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API ArithmeticException : public Exception
			{
			public:
				ArithmeticException(const char* message) : Exception(message) {}
				ArithmeticException(StringPtr message)
				{
					_message = message;
				}
				virtual ~ArithmeticException() {}

			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_ARITHMETICEXCEPTION_H_


