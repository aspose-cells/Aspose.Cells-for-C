#ifndef _SYSTEM_IDISPOSABLE_H_
#define _SYSTEM_IDISPOSABLE_H_

#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API IDisposable : public IRef
			{
			public:
				virtual void Dispose() = 0;
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_IDISPOSABLE_H_
