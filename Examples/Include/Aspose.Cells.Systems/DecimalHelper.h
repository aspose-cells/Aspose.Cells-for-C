#ifndef _SYSTEM_DECIMALHELPER_H_
#define _SYSTEM_DECIMALHELPER_H_

#include "Aspose.Cells.Systems/Decimal.h"
#include "Aspose.Cells.Systems/String.h"
namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API DecimalHelper {
			private:

			public:
				static const Decimal MinValue;
				static const Decimal MaxValue;
				static Decimal Parse(StringPtr s);
				static StringPtr ToString(Decimal s);
				static int GetHashCode(Decimal val);
			};
		}
	}
}
#endif//_SYSTEM_DECIMALHELPER_H_

