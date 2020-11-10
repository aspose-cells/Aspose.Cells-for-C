#ifndef _SYSTEM_INT16HELPER_H_
#define _SYSTEM_INT16HELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int16.h"
#include "Aspose.Cells.Systems/IFormatProvider.h"
#include "Aspose.Cells.Systems/Globalization/NumberStyles.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API Int16Helper{
			public:
				static const Int16 MaxValue;
				static const Int16 MinValue;
				
				static Int16 Parse(StringPtr s);
				static Int16 Parse(StringPtr s, intrusive_ptr<IFormatProvider> provider);
				static Int16 Parse(StringPtr s, Globalization::NumberStyles style);
				static Int16 Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider);

				static bool TryParse(StringPtr s, Int16* result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider, Int16* result);

				static StringPtr ToString(Int16 self);
				static StringPtr ToString(Int16 self, intrusive_ptr<IFormatProvider> provider);
				static StringPtr ToString(Int16 self, StringPtr format);
				static StringPtr ToString(Int16 self, StringPtr format, intrusive_ptr<IFormatProvider> provider);

			private:
				static Int16 Parse_s(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> info);
				static bool TryParse_s(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> info, Int16* result);
				static StringPtr ToString_s(Int16 self, StringPtr format, intrusive_ptr<NumberFormatInfo> info);
			};
		}
	}
}
#endif//_SYSTEM_INT16HELPER_H_
