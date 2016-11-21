#ifndef _SYSTEM_BYTEHELPER_H_
#define _SYSTEM_BYTEHELPER_H_

#include "System/Object.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/IFormatProvider.h"
#include "System/Globalization/NumberStyles.h"
#include "System/Globalization/NumberFormatInfo.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API ByteHelper
			{
			public:
				static const Byte MaxValue;
				static const Byte MinValue;
				
				static Byte Parse(StringPtr s);
				static Byte Parse(StringPtr s, intrusive_ptr<IFormatProvider> provider);
				static Byte Parse(StringPtr s, Globalization::NumberStyles style);
				static Byte Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider);

				static bool TryParse(StringPtr s, Byte* result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider, Byte* result);

				static StringPtr ToString(Byte self);
				static StringPtr ToString(Byte self, intrusive_ptr<IFormatProvider> provider);
				static StringPtr ToString(Byte self, StringPtr format);
				static StringPtr ToString(Byte self, StringPtr format, intrusive_ptr<IFormatProvider> provider);

			private:
				static Byte Parse_s(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> info);
				static bool TryParse_s(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> info, Byte* result);
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_BYTEHELPER_H_
