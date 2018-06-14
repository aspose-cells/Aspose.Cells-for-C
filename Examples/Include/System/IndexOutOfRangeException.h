#ifndef _SYSTEM_INDEXOUTOFRANGEEXCEPTION_H_
#define _SYSTEM_INDEXOUTOFRANGEEXCEPTION_H_

#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {

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
}	// namespace System

#endif	// _SYSTEM_INDEXOUTOFRANGEEXCEPTION_H_


