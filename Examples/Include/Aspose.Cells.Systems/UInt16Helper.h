#ifndef _SYSTEM_UINT16HELPER_H_
#define _SYSTEM_UINT16HELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/UInt16.h"
#include "Aspose.Cells.Systems/IFormatProvider.h"
#include "Aspose.Cells.Systems/Globalization/NumberStyles.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"

using namespace Aspose::Cells::Systems::Globalization;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API UInt16Helper {
			public:
				static const UInt16 MaxValue;
				static const UInt16 MinValue;
				
				static UInt16 Parse(StringPtr s);
				static UInt16 Parse(StringPtr s, intrusive_ptr<IFormatProvider> provider);
				static UInt16 Parse(StringPtr s, Globalization::NumberStyles style);
				static UInt16 Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider);

				static bool TryParse(StringPtr s, UInt16* result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider, UInt16* result);

				static StringPtr ToString(UInt16 self);
				static StringPtr ToString(UInt16 self, intrusive_ptr<IFormatProvider> provider);
				static StringPtr ToString(UInt16 self, StringPtr format);
				static StringPtr ToString(UInt16 self, StringPtr format, intrusive_ptr<IFormatProvider> provider);

				static Int32 CompareTo(UInt16 ui1, UInt16 ui2);

			private:
				static UInt16 Parse_s(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> info);
				static bool TryParse_s(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<NumberFormatInfo> info, UInt16* result);
			};
		}
	}
}
#endif//_SYSTEM_UINT16HELPER_H_