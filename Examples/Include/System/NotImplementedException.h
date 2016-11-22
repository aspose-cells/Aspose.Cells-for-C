#ifndef _SYSTEM_NOTIMPLEMENTEDEXCEPTION_H_
#define _SYSTEM_NOTIMPLEMENTEDEXCEPTION_H_

#include "System/Exception.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			class ASPOSE_CELLS_API NotImplementedException : public Exception
			{
			public:
				NotImplementedException();
				NotImplementedException(StringPtr message);
				NotImplementedException(StringPtr message, intrusive_ptr<Exception> inner);
				virtual ~NotImplementedException();
			};
		}
	}
}


#endif//_SYSTEM_NOTIMPLEMENTEDEXCEPTION_H_

