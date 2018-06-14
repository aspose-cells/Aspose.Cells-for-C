#ifndef _SYSTEM_ARGUMENTOUTOFEXCEPTION_H_
#define _SYSTEM_ARGUMENTOUTOFEXCEPTION_H_

#include "System/ArgumentException.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API ArgumentOutOfRangeException : public ArgumentException
			{
			public:
				ArgumentOutOfRangeException() : ArgumentException("Arg_ArgumentOutOfRangeException")
				{
					ArgumentException::SetErrorCode(-2146233086);
				}
				ArgumentOutOfRangeException(const char* message) : ArgumentException(message)
				{

				}
				ArgumentOutOfRangeException(const char* message, const char* rangeMessage) 
					: ArgumentException(message), _rangeMessage(NEW String(rangeMessage))
				{
					ArgumentException::SetErrorCode(-2146233086);
				}
				ArgumentOutOfRangeException(StringPtr message)
				{
					_message = message;
					ArgumentException::SetErrorCode(-2146233086);
				}
				ArgumentOutOfRangeException(StringPtr paramName, StringPtr message) : ArgumentException(message, paramName)
				{
					ArgumentException::SetErrorCode(-2146233086);
				}
				ArgumentOutOfRangeException(StringPtr paramName, ObjectPtr actualValue, StringPtr message)
				{
					ArgumentOutOfRangeException(paramName, message);
				}
				virtual ~ArgumentOutOfRangeException();

				virtual StringPtr GetMessageExp();

			protected:
				StringPtr _rangeMessage;
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_ARGUMENTOUTOFEXCEPTION_H_


