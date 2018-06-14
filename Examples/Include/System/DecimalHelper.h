#ifndef _SYSTEM_DECIMALHELPER_H_
#define _SYSTEM_DECIMALHELPER_H_

#include "System/Decimal.h"
#include "System/String.h"
namespace Aspose {
	namespace Cells {
		namespace System {
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

