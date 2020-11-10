#ifndef _SYSTEM_ICLONEABLE_H_
#define _SYSTEM_ICLONEABLE_H_

#include "Aspose.Cells.Systems/Object.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API ICloneable : public IRef
			{
			public:
				virtual ObjectPtr Clone() = 0;
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_ICLONEABLE_H_
