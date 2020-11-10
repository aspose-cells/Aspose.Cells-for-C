#ifndef _SYSTEM_INT32HELPER_H_
#define _SYSTEM_INT32HELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Globalization/NumberStyles.h"
#include "Aspose.Cells.Systems/Globalization/CultureInfo.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API Int32Helper {
			private:

			public:
				static const Int32 MaxValue;
				static const Int32 MinValue;
				static int CompareTo(Int32 self, Int32 value);
				static int CompareTo(Int32 self, ObjectPtr value);
				static int GetHashCode(Int32 val);

				static Int32 Parse(StringPtr s);
				static Int32 Parse(StringPtr s, intrusive_ptr<NumberFormatInfo> provider);
				static Int32 Parse(StringPtr s, intrusive_ptr<CultureInfo> provider);
				static Int32 Parse(StringPtr s, Globalization::NumberStyles style);
				static Int32 Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> provider);
				static Int32 Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<CultureInfo> provider);

				static bool TryParse(StringPtr s, Int32& result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> provider, Int32& result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<CultureInfo> provider, Int32& result);

				static StringPtr ToString(Int32 self);
				static StringPtr ToString(Int32 self, intrusive_ptr<NumberFormatInfo> provider);
				static StringPtr ToString(Int32 self, intrusive_ptr<CultureInfo> provider);
				static StringPtr ToString(Int32 self, StringPtr format);
				static StringPtr ToString(Int32 self, StringPtr format, intrusive_ptr<NumberFormatInfo> provider);
				static StringPtr ToString(Int32 self, StringPtr format, intrusive_ptr<CultureInfo> provider);

				static bool Equals(Int32 i1, Int32 i2);

			};
		}
	}
}
#endif//_SYSTEM_INT32HELPER_H_

