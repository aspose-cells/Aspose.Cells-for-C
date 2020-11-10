#ifndef _SYSTEM_NOTIMPLEMENTEDEXCEPTION_H_
#define _SYSTEM_NOTIMPLEMENTEDEXCEPTION_H_

#include "Aspose.Cells.Systems/Exception.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
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

