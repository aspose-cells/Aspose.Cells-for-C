#ifndef _SYSTEM_NUMBERFORMAT_H_
#define _SYSTEM_NUMBERFORMAT_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/IFormatProvider.h"
#include "System/Globalization/NumberFormatInfo.h"
#include "System/Text/StringBuilder.h"

using namespace Aspose::Cells::System::Globalization;
using namespace Aspose::Cells::System::Text;

namespace Aspose {
	namespace Cells {
		namespace System {
			class ASPOSE_CELLS_API NumberFormatC {

			public:
				virtual ~NumberFormatC();

				static StringPtr NumberToString(StringPtr format, UInt32 value, intrusive_ptr<IFormatProvider> fp);
				static StringPtr NumberToString(StringPtr format, Int32 value, intrusive_ptr<IFormatProvider> fp);
				static StringPtr NumberToString(StringPtr format, UInt64 value, intrusive_ptr<IFormatProvider> fp);
				static StringPtr NumberToString(StringPtr format, Int64 value, intrusive_ptr<IFormatProvider> fp);
				static StringPtr NumberToString(StringPtr format, Double value, intrusive_ptr<IFormatProvider> fp);
				static StringPtr NumberToString(StringPtr format, Single value, intrusive_ptr<IFormatProvider> fp);

				StringPtr FormatCurrency(Int32 precision, intrusive_ptr<NumberFormatInfo> nfi);
				StringPtr FormatDecimal(Int32 precision, intrusive_ptr<NumberFormatInfo> nfi);
				StringPtr FormatExponential(Int32 precision, intrusive_ptr<NumberFormatInfo> nfi);
				StringPtr FormatExponential(Int32 precision, intrusive_ptr<NumberFormatInfo> nfi, Int32 expDigits);
				StringPtr FormatFixedPoint(Int32 precision, intrusive_ptr<NumberFormatInfo> nfi);
				StringPtr FormatGeneral(Int32 precision, intrusive_ptr<NumberFormatInfo> nfi);
				StringPtr FormatNumber(Int32 precision, intrusive_ptr<NumberFormatInfo> nfi);
				StringPtr FormatPercent(Int32 precision, intrusive_ptr<NumberFormatInfo> nfi);
				StringPtr FormatHexadecimal(Int32 precision);
				StringPtr FormatCustom(StringPtr format, intrusive_ptr<NumberFormatInfo> nfi);

			private:
				NumberFormatC();
				NumberFormatC(NumberFormatC& numberFormat);
				static NumberFormatC* GetInstance(intrusive_ptr<IFormatProvider> fp);
				void Init(StringPtr format);
				void Init(StringPtr format, UInt32 value, Int32 defPrecision);
				void Init(StringPtr format, Int32 value, Int32 defPrecision);
				void Init(StringPtr format, UInt64 value);
				void Init(StringPtr format, Int64 value);
				void Init(StringPtr format, Double value, Int32 defPrecision);
				void Release();
				intrusive_ptr<NumberFormatInfo> GetNumberFormatInstance(intrusive_ptr<IFormatProvider> fp);
				void InitHex(UInt64 value);
				void InitDecHexDigits(UInt32 value);
				void InitDecHexDigits(UInt64 value);
				StringPtr IntegerToString(StringPtr format, intrusive_ptr<IFormatProvider> fp);

				static Int32 ParsePrecision(StringPtr format);
				static Int32 DecHexLen(UInt32 val);
				Int32 DecHexLen();
				static Int32 FastDecHexLen(Int32 val);
				static UInt32 FastToDecHex(Int32 val);
				static UInt32 ToDecHex(Int32 val);

				StringPtr NumberToString(StringPtr format, intrusive_ptr<NumberFormatInfo> nfi);

				bool RoundDecimal(Int32 decimals);
				bool RoundBits(Int32 shift);
				void RoundPos(Int32 pos);
				void AddOneToDecHex();
				static UInt32 AddOneToDecHex(UInt32 val);
				void RemoveTrailingZeros();
				Int32 CountTrailingZeros();
				static Int32 CountTrailingZeros(UInt32 val);
				void AppendIntegerStringWithGroupSeparator(intrusive_ptr<Array1D<Int32>> groups, StringPtr groupSeparator);
				void AppendDigits(Int32 start, Int32 end);
				void AppendDigits(Int32 start, Int32 end, StringBuilderPtr sb);
				void AppendDecimalString(Int32 precision);
				void AppendDecimalString(Int32 precision, StringBuilderPtr sb);
				void AppendOneDigit(Int32 start);
				void AppendExponent(intrusive_ptr<NumberFormatInfo> nfi, Int32 exponent, Int32 minDigits);
				void AppendIntegerString(Int32 minLength);
				void AppendIntegerString(Int32 minLength, StringBuilderPtr sb);
				void Multiply10(Int32 count);
				void Divide10(Int32 count);
				static void AppendNonNegativeNumber(StringBuilderPtr sb, Int32 v);
				static Int32 ScaleOrder(Int64 hi);
				static Int64 GetTenPowerOf(Int32 i);
				static void ZeroTrimEnd(StringBuilderPtr sb, bool canEmpty);
				static bool IsZeroOnly(StringBuilderPtr sb);

				Int32 IntegerDigits() { return _decPointPos > 0 ? _decPointPos : 1; }
				Int32 DecimalDigits() { return _digitsLen > _decPointPos ? _digitsLen - _decPointPos : 0; }
				bool IsFloatingSource() { return _defPrecision == DoubleDefPrecision || _defPrecision == SingleDefPrecision; }
				bool IsZero() { return _digitsLen == 0; }
				bool IsZeroInteger() { return _digitsLen == 0 || _decPointPos <= 0; }

				void ResetCharBuf(Int32 size);
				void Resize(Int32 len);
				void Append(Char c);
				void Append(Char c, Int32 cnt);
				void Append(StringPtr s);

				// Compute the initial precision for rounding a floating number
				// according to the used format.
				Int32 InitialFloatingPrecision();
				StringPtr FormatRoundtrip(double origval, intrusive_ptr<NumberFormatInfo> nfi);
				StringPtr FormatRoundtrip(float origval, intrusive_ptr<NumberFormatInfo> nfi);
			
			private:
				static const Int32 DefaultExpPrecision = 6;
				static const Int32 HundredMillion = 100000000;
				static const Int64 SeventeenDigitsThreshold = 10000000000000000;
				static const UInt64 ULongDivHundredMillion = 18446744073709551615 / HundredMillion;
				static const UInt64 ULongModHundredMillion = 1 + 18446744073709551615 % HundredMillion;

				static const Int32 DoubleBitsExponentShift = 52;
				static const Int32 DoubleBitsExponentMask = 0x7ff;
				static const Int64 DoubleBitsMantissaMask = 0xfffffffffffff;
				static const UInt64 DecimalBitsScaleMask = 0x1f0000;

				static const Int32 SingleDefPrecision = 7;
				static const Int32 DoubleDefPrecision = 15;
				static const Int32 Int8DefPrecision = 3;
				static const Int32 UInt8DefPrecision = 3;
				static const Int32 Int16DefPrecision = 5;
				static const Int32 UInt16DefPrecision = 5;
				static const Int32 Int32DefPrecision = 10;
				static const Int32 UInt32DefPrecision = 10;
				static const Int32 Int64DefPrecision = 19;
				static const Int32 UInt64DefPrecision = 20;
				static const Int32 DecimalDefPrecision = 100;
				static const Int32 TenPowersListLength = 19;

				static UInt64 MantissaBitsTable[];
				static Int32 TensExponentTable[];
				static Char DigitLowerTable[];
				static Char DigitUpperTable[];
				static Int64 TenPowersList[];
				// DecHexDigits s a translation table from a decimal number to its
				// digits hexadecimal representation (e.g. DecHexDigits [34] = 0x34).
				static Int32 DecHexDigits[];

				intrusive_ptr<NumberFormatInfo> _nfi;
				Char* _cbuf;
				Int32	  _cbufSize;
				Int32 _ind;

				bool _NaN;
				bool _infinity;
				bool _isCustomFormat;
				bool _specifierIsUpper;
				bool _positive;
				Char _specifier;
				Int32 _precision;
				Int32 _defPrecision;

				Int32 _digitsLen;
				Int32 _offset; // Represent the first digit offset
				Int32 _decPointPos;

				UInt32 _val1; // Digits 0 - 7
				UInt32 _val2; // Digits 8 - 15
				UInt32 _val3; // Digits 16 - 23
				UInt32 _val4; // Digits 23 - 31, Only needed for decimals

			private:
				class CustomInfo
				{
				public:
					CustomInfo();
					virtual ~CustomInfo();

					static void GetActiveSection(StringPtr format, bool* positive, bool zero, Int32* offset, Int32* length);
					static CustomInfo* Parse(StringPtr format, Int32 offset, Int32 length, intrusive_ptr<NumberFormatInfo> nfi);
					StringPtr Format(StringPtr format, Int32 offset, Int32 length, intrusive_ptr<NumberFormatInfo> nfi, bool positive, StringBuilderPtr sb_int, StringBuilderPtr sb_dec, StringBuilderPtr sb_exp);

				public:
					bool UseGroup;
					Int32 DecimalDigits;
					Int32 DecimalPointPos;
					Int32 DecimalTailSharpDigits;
					Int32 IntegerDigits;
					Int32 IntegerHeadSharpDigits;
					Int32 IntegerHeadPos;
					bool UseExponent;
					Int32 ExponentDigits;
					Int32 ExponentTailSharpDigits;
					bool ExponentNegativeSignOnly;
					Int32 DividePlaces;
					Int32 Percents;
					Int32 Permilles;
				};
			
			};

		}
	}
}

#endif	// _SYSTEM_NUMBERFORMAT_H_
