#ifndef _SYSTEM_BYTEHELPER_H_
#define _SYSTEM_BYTEHELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/IFormatProvider.h"
#include "Aspose.Cells.Systems/Globalization/NumberStyles.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

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
}	// namespace Systems

#endif	// _SYSTEM_BYTEHELPER_H_
