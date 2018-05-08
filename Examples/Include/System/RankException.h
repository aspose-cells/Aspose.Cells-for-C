#ifndef _SYSTEM_RANKEXCEPTION_H_
#define _SYSTEM_RANKEXCEPTION_H_

#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API RankException : public Exception
			{
			public:
				RankException(const char* message) : Exception(message) {}
				RankException(StringPtr message)
				{
					_message = message;
				}
				virtual ~RankException() {}
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_RANKEXCEPTION_H_


