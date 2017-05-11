#ifndef _SYSTEM_CONSOLE_H_
#define _SYSTEM_CONSOLE_H_

#include "System/Object.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API Console
			{
			public:
				static void Write(StringPtr info);
				static void WriteLine(StringPtr info);
				static StringPtr ReadLine();


			};
		}
	}
}

#endif//_SYSTEM_CONSOLE_H_