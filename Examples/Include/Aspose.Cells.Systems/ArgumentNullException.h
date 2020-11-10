#ifndef _SYSTEM_ARGUMENTNULLEXCEPTION_H_
#define _SYSTEM_ARGUMENTNULLEXCEPTION_H_

#include "Aspose.Cells.Systems/ArgumentException.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API ArgumentNullException : public ArgumentException
			{
			public:
				ArgumentNullException(const char* paramName, const char* message);
				ArgumentNullException(const char* message) : ArgumentException(message)
				{
					_paramName = NULL;
				}
				ArgumentNullException(StringPtr message) : ArgumentException(message)
				{
					_paramName = NULL;
				}
				ArgumentNullException(StringPtr message, StringPtr paramName) : ArgumentException(message)
				{
					_paramName = paramName;
				}

				virtual ~ArgumentNullException();


			protected:
				StringPtr _paramName;
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_ARGUMENTNULLEXCEPTION_H_


