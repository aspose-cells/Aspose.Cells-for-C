#ifndef _SYSTEM_BOOLEANHELPER_H_
#define _SYSTEM_BOOLEANHELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Boolean.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

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