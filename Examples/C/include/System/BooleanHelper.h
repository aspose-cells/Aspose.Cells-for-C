#ifndef _SYSTEM_BOOLEANHELPER_H_
#define _SYSTEM_BOOLEANHELPER_H_

#include "System/Object.h"
#include "System/Boolean.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API BooleanHelper
			{
			private:
				static StringPtr TrimWhiteSpaceAndNull(StringPtr value);
			public:
				static bool Parse(StringPtr value);
				static bool TryParse(StringPtr value, bool &result);
				static StringPtr ToString(Boolean self);
			};
		}
	}
}
#endif//_SYSTEM_BOOLEANHELPER_H_