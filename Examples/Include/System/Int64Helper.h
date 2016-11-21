#ifndef _SYSTEM_INT64HELPER_H_
#define _SYSTEM_INT64HELPER_H_

#include "System/Object.h"
#include "System/Int64.h"
#include "System/String.h"
#include "System/IFormatProvider.h"
#include "System/Globalization/NumberStyles.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			class ASPOSE_CELLS_API Int64Helper {

			public:
				static const Int64 MaxValue;
				static const Int64 MinValue;
				
				static Int64 Parse(StringPtr s);
				static Int64 Parse(StringPtr s, intrusive_ptr<IFormatProvider> provider);
				static Int64 Parse(StringPtr s, Globalization::NumberStyles style);
				static Int64 Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider);

				static bool TryParse(StringPtr s, Int64& result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider, Int64& result);

				static StringPtr ToString(Int64 self);
				static StringPtr ToString(Int64 self, intrusive_ptr<IFormatProvider> provider);
				static StringPtr ToString(Int64 self, StringPtr format);
				static StringPtr ToString(Int64 self, StringPtr format, intrusive_ptr<IFormatProvider> provider);

			};
		}
	}
}
#endif//_SYSTEM_INT64HELPER_H_