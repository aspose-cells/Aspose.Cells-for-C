#ifndef _SYSTEM_RANKEXCEPTION_H_
#define _SYSTEM_RANKEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

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
}	// namespace Systems

#endif	// _SYSTEM_RANKEXCEPTION_H_


