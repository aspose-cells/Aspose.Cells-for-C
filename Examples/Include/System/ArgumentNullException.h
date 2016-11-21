#ifndef _SYSTEM_ARGUMENTNULLEXCEPTION_H_
#define _SYSTEM_ARGUMENTNULLEXCEPTION_H_

#include "System/ArgumentException.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System {

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
}	// namespace System

#endif	// _SYSTEM_ARGUMENTNULLEXCEPTION_H_


