#ifndef _SYSTEM_SBYTEHELPER_H_
#define _SYSTEM_SBYTEHELPER_H_

#include "System/Object.h"
#include "System/SByte.h"
#include "System/String.h"
#include "System/IFormatProvider.h"
#include "System/Globalization/NumberStyles.h"
#include "System/Globalization/NumberFormatInfo.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API SByteHelper
			{
			public:
				static const SByte MaxValue;
				static const SByte MinValue;

				static SByte Parse(StringPtr s);
				static SByte Parse(StringPtr s, intrusive_ptr<IFormatProvider> provider);
				static SByte Parse(StringPtr s, Globalization::NumberStyles style);
				static SByte Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider);

				static bool TryParse(StringPtr s, SByte* result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider, SByte* result);

				static StringPtr ToString(SByte self);
				static StringPtr ToString(SByte self, intrusive_ptr<IFormatProvider> provider);
				static StringPtr ToString(SByte self, StringPtr format);
				static StringPtr ToString(SByte self, StringPtr format, intrusive_ptr<IFormatProvider> provider);

			private:
				static SByte Parse_s(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> info);
				static bool TryParse_s(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> info, SByte* result);
				static StringPtr ToString_s(SByte self, StringPtr format, intrusive_ptr<NumberFormatInfo> info);
			};
		}
	}
}	// namespace System

#endif	// _SYSTEM_SBYTEHELPER_H_
