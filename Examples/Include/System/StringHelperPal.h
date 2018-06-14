#ifndef _SYSTEM_StringHelperPal_H_
#define _SYSTEM_StringHelperPal_H_

#include "System/Object.h"
#include "System/Globalization/CompareOptions.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Globalization {
				class CultureInfo;
			}
		}
	}
}

using namespace Aspose::Cells::System::Globalization;

namespace Aspose {
	namespace Cells {
		namespace System
		{
			class ASPOSE_CELLS_API StringHelperPal 
			{
			public:
				static int32_t Compare(StringPtr v1, StringPtr v2);
				static int32_t Compare(StringPtr v1, StringPtr v2, bool ignoreCase);
				static int32_t Compare(StringPtr strA, StringPtr strB, StringComparison comparisonType);
				static int32_t Compare(StringPtr strA, int indexA, StringPtr strB, int indexB, int length);
				static int32_t Compare(StringPtr v1, StringPtr v2, bool ignoreCase, intrusive_ptr<CultureInfo> culture);
				static int32_t CompareOrdinal(StringPtr strA, StringPtr strB);
				static int32_t CompareOrdinal(StringPtr strA, int indexA, StringPtr strB, int indexB, int length);

				static bool IsNullString(StringPtr value);
				static bool IsEmptyString(StringPtr value);
				static bool IsNullOrEmpty(StringPtr value);
				static bool IsNullOrWhiteSpace(StringPtr value);

				static bool IsEquals(StringPtr v1, StringPtr v2);
				static bool IsNoEquals(StringPtr v1, StringPtr v2);

				static StringPtr Assignment(StringPtr v1);
				static StringPtr StrCat(StringPtr v1, StringPtr v2);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6, StringPtr v7);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6, StringPtr v7, StringPtr v8);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6, StringPtr v7, StringPtr v8, StringPtr v9);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6, StringPtr v7, StringPtr v8, StringPtr v9, StringPtr v10);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6, StringPtr v7, StringPtr v8, StringPtr v9, StringPtr v10, StringPtr v11);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6, StringPtr v7, StringPtr v8, StringPtr v9, StringPtr v10, StringPtr v11, StringPtr v12);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6, StringPtr v7, StringPtr v8, StringPtr v9, StringPtr v10, StringPtr v11, StringPtr v12, StringPtr v13);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6, StringPtr v7, StringPtr v8, StringPtr v9, StringPtr v10, StringPtr v11, StringPtr v12, StringPtr v13, StringPtr v14);
				static StringPtr StrCat(StringPtr v1, StringPtr v2, StringPtr v3, StringPtr v4, StringPtr v5, StringPtr v6, StringPtr v7, StringPtr v8, StringPtr v9, StringPtr v10, StringPtr v11, StringPtr v12, StringPtr v13, StringPtr v14, 
					                       StringPtr v15,StringPtr v16,StringPtr v17,StringPtr v18,StringPtr v19,StringPtr v20);
			};
		}
	}
}  // namespace System

#endif	// _SYSTEM_StringHelperPal_H_

