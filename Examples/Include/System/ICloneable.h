#ifndef _SYSTEM_ICLONEABLE_H_
#define _SYSTEM_ICLONEABLE_H_

#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			class ASPOSE_CELLS_API ICloneable : public IRef
			{
			public:
				virtual ObjectPtr Clone() = 0;
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_ICLONEABLE_H_
