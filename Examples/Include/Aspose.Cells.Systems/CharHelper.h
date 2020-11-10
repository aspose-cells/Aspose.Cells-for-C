#ifndef _SYSTEM_CHARHELPER_H_
#define _SYSTEM_CHARHELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Char.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Globalization/CultureInfo.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"
#include "Aspose.Cells.Systems/Globalization/DateTimeFormatInfo.h"

using namespace Aspose::Cells::Systems::Globalization;

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API CharHelper
			{
			private:
				static bool IsLatin1(Char ch);
				static bool IsAscii(Char ch);

			public:
				static bool IsWhiteSpace(Char v);
				static StringPtr ToString(Char self);
				static bool IsDigit(Char c);
				static bool IsDigit(StringPtr s, int index);
				static bool IsLetter(Char c);
				static bool IsLetter(StringPtr s, int index);
				static bool IsLetterOrDigit(Char c);
				static StringPtr CharToString(Char c);
				static bool IsLower(Char c);
				static bool IsLower(StringPtr s, int index);
				static Char ToLower(Char c);
				static Char ToLower(Char c, intrusive_ptr<CultureInfo> cul);
				static Char ToUpper(Char c);
				static Char ToUpper(Char c, intrusive_ptr<CultureInfo> cul);
				static bool IsUpper(Char c);
			};
		}
	}
}	// namespace Systems

#endif	// _SYSTEM_CHARHELPER_H_
