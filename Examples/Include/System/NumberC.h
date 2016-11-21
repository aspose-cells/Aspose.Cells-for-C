#ifndef _SYSTEM_NUMBER_H_
#define _SYSTEM_NUMBER_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/IFormatProvider.h"
#include "System/Globalization/NumberStyles.h"
#include "System/Globalization/NumberFormatInfo.h"
#include "System/Globalization/DateTimeFormatInfo.h"
#include "System/Text/StringBuilder.h"
#include "System/DoubleHelper.h"
#include "System/UInt32.h"
#include "System/UInt64.h"
#include "System/Int64.h"
#include "System/Single.h"

using namespace Aspose::Cells::System::Text;
using namespace Aspose::Cells::System::Globalization;

namespace Aspose {
	namespace Cells {
		namespace System {
			class ASPOSE_CELLS_API NumberC {
			public:
				static UInt32 ParseUInt32(StringPtr value, NumberStyles options, intrusive_ptr<NumberFormatInfo> numfmt);
				static bool TryParseUInt32(StringPtr s, NumberStyles style, intrusive_ptr<NumberFormatInfo> info, UInt32& result);
				static StringPtr FormatUInt32(UInt32 value, StringPtr format, intrusive_ptr<NumberFormatInfo> info);

				static Int32 ParseInt32(StringPtr value, NumberStyles options, intrusive_ptr<NumberFormatInfo> numfmt);
				static bool TryParseInt32(StringPtr s, NumberStyles style, intrusive_ptr<NumberFormatInfo> info, Int32& result);
				static StringPtr FormatInt32(Int32 value, StringPtr format, intrusive_ptr<NumberFormatInfo> info);

				static UInt64 ParseUInt64(StringPtr value, NumberStyles options, intrusive_ptr<NumberFormatInfo> numfmt);
				static bool TryParseUInt64(StringPtr s, NumberStyles style, intrusive_ptr<NumberFormatInfo> info, UInt64& result);
				static StringPtr FormatUInt64(UInt64 value, StringPtr format, intrusive_ptr<NumberFormatInfo> info);

				static Int64 ParseInt64(StringPtr value, NumberStyles options, intrusive_ptr<NumberFormatInfo> numfmt);
				static bool TryParseInt64(StringPtr s, NumberStyles style, intrusive_ptr<NumberFormatInfo> info, Int64& result);
				static StringPtr FormatInt64(Int64 value, StringPtr format, intrusive_ptr<NumberFormatInfo> info);

				static Double ParseDouble(StringPtr value, NumberStyles options, intrusive_ptr<NumberFormatInfo> numfmt);
				static bool TryParseDouble(StringPtr s, NumberStyles style, intrusive_ptr<NumberFormatInfo> info, Double& result);
				static StringPtr FormatDouble(Double value, StringPtr format, intrusive_ptr<NumberFormatInfo> info);

				static StringPtr FormatSingle(Single value, StringPtr format, intrusive_ptr<NumberFormatInfo> info);

				static bool IsNegativeInfinity(double d) {
					return (d < 0.0 && (d == DoubleHelper::NegativeInfinity || d == DoubleHelper::PositiveInfinity));
				}

				static bool IsPositiveInfinity(double d) {
					return (d > 0.0 && (d == DoubleHelper::NegativeInfinity || d == DoubleHelper::PositiveInfinity));
				}

			private:
				static const Int32 NumberMaxDigits = 50;
				static const Int32 Int32Precision = 10;
				static const Int32 UInt32Precision = Int32Precision;
				static const Int32 Int64Precision = 19;
				static const Int32 UInt64Precision = 20;

				struct NumberBuffer {
				public:
					// Enough space for NumberMaxDigit characters plus null and 3 32 bit integers and a pointer
					static const Int32 NumberBufferBytes = 12 + ((NumberC::NumberMaxDigits + 1) * 2) + sizeof(int);

					Char*	_digits;
					Int32	_precision;
					Int32	_scale;
					bool	_sign;

					NumberBuffer(Byte* stackBuffer) {
						_baseAddress = stackBuffer;
						_digits = (((Char*)stackBuffer) + 6);
						_precision = 0;
						_scale = 0;
						_sign = false;
					}

					Byte* PackForNative() {
						Int32* baseInteger = (Int32*)_baseAddress;
						baseInteger[0] = _precision;
						baseInteger[1] = _scale;
						baseInteger[2] = _sign ? 1 : 0;
						return _baseAddress;
					}

				private:
					Byte*	_baseAddress;
				};

				enum ParseState {
					AllowSign = 1,
					Digits = 2,
					Decimal = 3,
					ExponentSign = 4,
					Exponent = 5,
					ConsumeWhiteSpace = 6,
					TrailingSymbols = 7,
					Exit = 8
				};

			private:
				static void StringToNumber(StringPtr str, NumberStyles options, NumberBuffer* number, intrusive_ptr<NumberFormatInfo> info, bool parseDecimal);
				static bool TryStringToNumber(StringPtr str, NumberStyles options, NumberBuffer* number, intrusive_ptr<NumberFormatInfo> numfmt, bool parseDecimal);
				static bool TryStringToNumber(StringPtr str, NumberStyles options, NumberBuffer* number, StringBuilder* sb, intrusive_ptr<NumberFormatInfo> numfmt, bool parseDecimal);
				static bool HexNumberToUInt32(NumberBuffer* number, UInt32& value);
				static bool HexNumberToInt32(NumberBuffer* number, Int32& value);
				static bool NumberToUInt32(NumberBuffer* number, UInt32& value);
				static bool NumberToInt32(NumberBuffer* number, Int32& value);
				static bool HexNumberToUInt64(NumberBuffer* number, UInt64& value);
				static bool HexNumberToInt64(NumberBuffer* number, Int64& value);
				static bool NumberToUInt64(NumberBuffer* number, UInt64& value);
				static bool NumberToInt64(NumberBuffer* number, Int64& value);
				static bool ParseNumber(Char** str, NumberStyles options, NumberBuffer* number, StringBuilder* sb, intrusive_ptr<NumberFormatInfo> numfmt, bool parseDecimal);
				static bool TrailingZeros(StringPtr s, Int32 index);
				static bool IsWhite(Char ch) {
					return (((ch) == 0x20) || ((ch) >= 0x09 && (ch) <= 0x0D));
				}

				static Char* MatchChars(Char* p, StringPtr str);
				static Char* MatchChars(Char* p, Char* str);
				static bool TryParseDouble(StringPtr s, NumberStyles style, intrusive_ptr<NumberFormatInfo> format, Double& result, bool tryParse);
				static bool TryParseStringConstant(const Char* format, const int len, const Char* s, Int32 start, Int32 end);
				static bool ParseImpl(Byte *byte_ptr, double* value);

			};

		}
	}
}

#endif	// _SYSTEM_NUMBER_H_
