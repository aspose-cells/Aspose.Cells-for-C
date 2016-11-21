#ifndef _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICEXCEPTION_H_
#define _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICEXCEPTION_H_

#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Security {
				namespace Cryptography {

					class ASPOSE_CELLS_API CryptographicException : public Exception
					{
					public:
						CryptographicException() : Exception("Arg_ArgumentException")
						{
							Exception::SetErrorCode(-2147024809);
							_paramName = NULL;
						}
						CryptographicException(const char* message) : Exception(message)
						{
							Exception::SetErrorCode(-2147024809);
							_paramName = NULL;
						}
						CryptographicException(StringPtr message) : Exception(message)
						{
							Exception::SetErrorCode(-2147024809);
							_paramName = NULL;
						}
						CryptographicException(StringPtr message, StringPtr paramName)
						{
							_message = message;
							_paramName = paramName;
							Exception::SetErrorCode(-2147024809);
						}
						virtual ~CryptographicException() {}

					protected:
						StringPtr _paramName;
					};
				} // namespace Cryptography
			}	// namespace Security
		}
	}
}	// namespace System

#endif	// _SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHICEXCEPTION_H_
