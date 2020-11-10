#ifndef _SYSTEM_SINGLEHELPER_H_
#define _SYSTEM_SINGLEHELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Globalization/NumberStyles.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API SingleHelper {
			private:

			public:
				static const Single MinValue;
				static const Single MaxValue;
				static const Single Epsilon;
				static const Double MaxValueEpsilon;
				static const Single NegativeInfinity;
				static const Single	PositiveInfinity;

				static bool IsNaN(Single f);
				static bool IsInfinity(Single f);
				static bool IsPositiveInfinity(Single f);
				
				static Single Parse(StringPtr s);
				static Single Parse(StringPtr s, intrusive_ptr<NumberFormatInfo> provider);
				static Single Parse(StringPtr s, Globalization::NumberStyles style);
				static Single Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> provider);

				static bool TryParse(StringPtr s, Single* result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> provider, Single* result);

				static StringPtr ToString(Single self);
				static StringPtr ToString(Single self, intrusive_ptr<NumberFormatInfo> provider);
				static StringPtr ToString(Single self, StringPtr format);
				static StringPtr ToString(Single self, StringPtr format, intrusive_ptr<NumberFormatInfo> provider);

			};
		}
	}
}
#endif//_SYSTEM_SINGLEHELPER_H_

