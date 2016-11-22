#ifndef _SYSTEM_UINT32HELPER_H_
#define _SYSTEM_UINT32HELPER_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/UInt32.h"
#include "System/IFormatProvider.h"
#include "System/Globalization/NumberStyles.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			class ASPOSE_CELLS_API UInt32Helper {
			public:
				static const UInt32 MaxValue;
				static const UInt32 MinValue;
				static UInt32 Parse(StringPtr s);
				static UInt32 Parse(StringPtr s, intrusive_ptr<IFormatProvider> provider);
				static UInt32 Parse(StringPtr s, Globalization::NumberStyles style);
				static UInt32 Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider);

				static bool TryParse(StringPtr s, UInt32& result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider, UInt32& result);

				static StringPtr ToString(UInt32 self);
				static StringPtr ToString(UInt32 self, intrusive_ptr<IFormatProvider> provider);
				static StringPtr ToString(UInt32 self, StringPtr format);
				static StringPtr ToString(UInt32 self, StringPtr format, intrusive_ptr<IFormatProvider> provider);
			};
		}
	}
}
#endif//_SYSTEM_UINT32HELPER_H_