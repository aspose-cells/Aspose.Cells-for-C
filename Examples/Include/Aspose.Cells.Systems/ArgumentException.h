#ifndef _SYSTEM_ARGUMENTEXCEPTION_H_
#define _SYSTEM_ARGUMENTEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API ArgumentException : public Exception
			{
			public:
				ArgumentException() : Exception("Arg_ArgumentException")
				{
					Exception::SetErrorCode(-2147024809);
					_paramName = NULL;
				}
				ArgumentException(const char* message) : Exception(message) 
				{
					Exception::SetErrorCode(-2147024809);
					_paramName = NULL;
				}
				ArgumentException(StringPtr message) : Exception(message)
				{
					Exception::SetErrorCode(-2147024809);
					_paramName = NULL;
				}
				ArgumentException(StringPtr message, StringPtr paramName)
				{
					_message = message;
					_paramName = paramName;
					Exception::SetErrorCode(-2147024809);
				}
				virtual ~ArgumentException() {}

			protected:
				StringPtr _paramName;
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_ARGUMENTEXCEPTION_H_


