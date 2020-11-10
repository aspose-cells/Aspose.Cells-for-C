#ifndef _SYSTEM_INDEXOUTOFRANGEEXCEPTION_H_
#define _SYSTEM_INDEXOUTOFRANGEEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API IndexOutOfRangeException : public Exception
			{
			public:
				IndexOutOfRangeException(const char* message) : Exception(message) {}
				IndexOutOfRangeException(StringPtr message)
				{
					_message = message;
				}
				virtual ~IndexOutOfRangeException() {}
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_INDEXOUTOFRANGEEXCEPTION_H_


