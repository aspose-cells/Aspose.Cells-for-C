#ifndef _SYSTEM_OBJECTDISPOSEDEXCEPTION_H_
#define _SYSTEM_OBJECTDISPOSEDEXCEPTION_H_

#include "System/Exception.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API ObjectDisposedException : public Exception
			{
			public:
				ObjectDisposedException(const char* message) : Exception(message) {}
				ObjectDisposedException(const char* objectName, const char* message);
				ObjectDisposedException(StringPtr message)
				{
					_message = message;
				}
				virtual ~ObjectDisposedException();

			protected:
				StringPtr _objectName;
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_OBJECTDISPOSEDEXCEPTION_H_


