#ifndef _SYSTEM_DOUBLEHELPER_H_
#define _SYSTEM_DOUBLEHELPER_H_

#include "System/Object.h"
#include "System/Double.h"
#include "System/String.h"
#include "System/Globalization/NumberStyles.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Globalization/NumberFormatInfo.h"
#include "System/Globalization/DateTimeFormatInfo.h"

namespace Aspose {
	namespace Cells {
		namespace System {
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

