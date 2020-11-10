#ifndef _SYSTEM_DOUBLEHELPER_H_
#define _SYSTEM_DOUBLEHELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Globalization/NumberStyles.h"
#include "Aspose.Cells.Systems/Globalization/CultureInfo.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"
#include "Aspose.Cells.Systems/Globalization/DateTimeFormatInfo.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API DoubleHelper {
			private:

			public:
				static double NaN;
				static double NegativeInfinity;
				static double PositiveInfinity;
				static const Double MinValue;
				static const Double MaxValue;
				static const Double Epsilon;
			public:
				static int GetHashCode(Double val);
				static bool IsNaN(Double d);
				static bool IsInfinity(Double d);
				static bool IsNegativeInfinity(Double d);
				
				static bool IsPositiveInfinity(Double d);
				static int CompareTo(Double self, Double value);

				static Double Parse(StringPtr s);
				static Double Parse(StringPtr s, intrusive_ptr<CultureInfo> provider);
				static Double Parse(StringPtr s, intrusive_ptr<NumberFormatInfo> provider);
				static Double Parse(StringPtr s, Globalization::NumberStyles style);
				static Double Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> provider);
				static Double Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<CultureInfo> provider);

				static bool TryParse(StringPtr s, Double& result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> provider, Double& result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<CultureInfo> provider, Double& result);

				static StringPtr ToString(Double self);
				static StringPtr ToString(Double self, intrusive_ptr<NumberFormatInfo> provider);
				static StringPtr ToString(Double self, intrusive_ptr<CultureInfo> provider);
				static StringPtr ToString(Double self, StringPtr format);
				static StringPtr ToString(Double self, StringPtr format, intrusive_ptr<NumberFormatInfo> provider);
				static StringPtr ToString(Double self, StringPtr format, intrusive_ptr<CultureInfo> provider);

				static bool Equals(Double d1, Double d2);

			};
		}
	}
}
#endif//_SYSTEM_DOUBLEHELPER_H_

