#ifndef _SYSTEM_ENVIRONMENT_H_
#define _SYSTEM_ENVIRONMENT_H_

#include "System/Object.h"
#include "System/String.h"

namespace Aspose { 
	namespace Cells { 
		namespace System {
			class ASPOSE_CELLS_API Environment : public Object
			{
				private:

				protected:

				public:
					static StringPtr GetCurrentDirectoryPal();
					static StringPtr GetUserNamePal();
					static StringPtr GetEnvironmentVariablePal(StringPtr variable);
					static int GetTickCountPal();
					static StringPtr GetSystemDirectoryPal();
			};
		}
	}
}
#endif//_SYSTEM_ENVIRONMENT_H_