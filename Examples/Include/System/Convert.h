#ifndef _SYSTEM_CONVERT_H_
#define _SYSTEM_CONVERT_H_

#include "System/Array1D.h"
#include "System/Char.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/UInt32.h"
#include "System/Int16.h"
#include "System/Int64.h"
#include "System/Double.h"
#include "System/Single.h"
#include "System/String.h"
#include "System/DateTime.h"
#include "System/TypeDefBString.h"
#include "System/Base64FormattingOptions.h"
#include "System/Globalization/NumberFormatInfo.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			class ASPOSE_CELLS_API Convert 
			{
			private:
				static Char base64Table[65];

				static int ToBase64_CalculateAndValidateOutputLength(int inputLength, bool insertLineBreaks);
				static int ConvertToBase64Array(Char* outChars, Byte* inData, int offset, int length, bool insertLineBreaks);
				static intrusive_ptr<BString> FromBase64CharPtr(Char* inputPtr, int inputLength);
				static int FromBase64_ComputeResultLength(Char* inputPtr, int inputLength);
				static int FromBase64_Decode(Char* startInputPtr, int inputLength, Byte* startDestPtr, int destLength);

			public:
				static Int32 ToInt32(bool value);
				static Int32 ToInt32(Char value);
				static Int32 ToInt32(Double value);
				static Int32 ToInt32(StringPtr value);
				static Int32 ToInt32(StringPtr value, Int32 fromBase);
				static Int32 ToInt32(ObjectPtr value);
				static Int32 ToInt32(Int32 value);
				static Int16 ToInt16(bool value);
				static Int16 ToInt16(Char value);
				static Int16 ToInt16(Double value);
				static Int16 ToInt16(Int32 value);
				static Int16 ToInt16(StringPtr value);
				static Int16 ToInt16(ObjectPtr value);
				static UInt16 ToUInt16(StringPtr value);
				static UInt16 ToUInt16(StringPtr value, Int32 fromBase);
				static Byte ToByte(bool value);
				static Byte ToByte(Char value);
				static Byte ToByte(Double value);
				static Byte ToByte(Int32 value);
				static Int64 ToInt64(bool value);
				static Int64 ToInt64(Char value);
				static Int64 ToInt64(Double value);
				static Int64 ToInt64(StringPtr value);
				static Int64 ToInt64(ObjectPtr value);
				static Int64 ToInt64(StringPtr value, Int32 fromBase);
				static UInt32 ToUInt32(bool value);
				static UInt32 ToUInt32(Char value);
				static UInt32 ToUInt32(Double value);
				static UInt32 ToUInt32(StringPtr value);
				static UInt32 ToUInt32(ObjectPtr value);
				static Double ToDouble(bool value);
				static Double ToDouble(Char value);
				static Double ToDouble(Int32 value);
				static Double ToDouble(StringPtr value);
				static Double ToDouble(StringPtr value, intrusive_ptr<NumberFormatInfo> provider);
				static Double ToDouble(ObjectPtr value);
				static Single ToSingle(ObjectPtr value);
				static Single ToSingle(Int32 value);
				static StringPtr ToString(bool value);
				static StringPtr ToString(Char value);
				static StringPtr ToString(Double value);
				static StringPtr ToString(Int32 value);
				static StringPtr ToString(Int64 value);
				static StringPtr ToString(Int64 value, int toBase);
				static StringPtr ToString(ObjectPtr value);
				static DateTimePtr ToDateTime(StringPtr value);
				static DateTimePtr ToDateTime(ObjectPtr value);
				static Char ToChar(StringPtr value);

				static StringPtr ToBase64String(intrusive_ptr<BString> inArray);
				static StringPtr ToBase64String(intrusive_ptr<BString> inArray, Base64FormattingOptions options);
				static StringPtr ToBase64String(intrusive_ptr<BString> inArray, Int32 offset, Int32 length);
				static StringPtr ToBase64String(intrusive_ptr<BString> inArray, Int32 offset, Int32 length, Base64FormattingOptions options);
				static intrusive_ptr<BString> FromBase64String(StringPtr s);

			};
		}
	}
}
#endif//_SYSTEM_CONVERT_H_