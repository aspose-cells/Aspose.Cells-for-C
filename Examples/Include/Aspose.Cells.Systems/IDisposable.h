#ifndef _SYSTEM_IDISPOSABLE_H_
#define _SYSTEM_IDISPOSABLE_H_

#include "Aspose.Cells.Systems/Object.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API IDisposable : public IRef
			{
			public:
				virtual void Dispose() = 0;
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_IDISPOSABLE_H_
