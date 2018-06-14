#ifndef _SYSTEM_MATH_H_
#define _SYSTEM_MATH_H_

#include "System/BaseNumber.h"
#include "System/MidpointRounding.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			class ASPOSE_CELLS_API Math
			{
			private:

			public:
				static const Double E;
				static const Double PI;
				static const double EPSINON;

				static SByte Max(SByte val1, SByte val2);
				static Byte Max(Byte val1, Byte val2);
				static Int16 Max(Int16 val1, Int16 val2);
				static UInt16 Max(UInt16 val1, UInt16 val2);
				static Int32 Max(Int32 val1, Int32 val2);
				static UInt32 Max(UInt32 val1, UInt32 val2);
				static Int64 Max(Int64 val1, Int64 val2);
				static UInt64 Max(UInt64 val1, UInt64 val2);
				static Decimal Max(Decimal val1, Decimal val2);
				static Double Max(Double val1, Double val2);
				static Single Max(Single val1, Single val2);

				static SByte Min(SByte val1, SByte val2);
				static Byte Min(Byte val1, Byte val2);
				static Int16 Min(Int16 val1, Int16 val2);
				static UInt16 Min(UInt16 val1, UInt16 val2);
				static Int32 Min(Int32 val1, Int32 val2);
				static UInt32 Min(UInt32 val1, UInt32 val2);
				static Int64 Min(Int64 val1, Int64 val2);
				static UInt64 Min(UInt64 val1, UInt64 val2);
				static Decimal Min(Decimal val1, Decimal val2);
				static Double Min(Double val1, Double val2);
				static Single Min(Single val1, Single val2);

				static Decimal Abs(Decimal value);
				static Double Abs(Double value);
				static Single Abs(Single value);
				static SByte Abs(SByte value);
				static Int16 Abs(Int16 value);
				static Int32 Abs(Int32 value);
				static Int64 Abs(Int64 value);

				static Decimal Floor(Decimal d);
				static Double Floor(Double d);
				static Single Floor(Single d);

				static Double Sqrt(Double d);

				static Double Round(Double a);
				static Double Round(Double value, Int32 digits);
				static Decimal Round(Decimal d);
				static Decimal Round(Decimal d, Int32 decimals);

				static Double Round(Double value, MidpointRounding mode);
				static Double Round(Double value, Int32 digits, MidpointRounding mode);
				static Double Pow(Double x, Double y);

				static Int32 Sign(SByte value);
				static Int32 Sign(Int16 value);
				static Int32 Sign(Int32 value);
				static Int32 Sign(Int64 value);
				static Int32 Sign(Double value);
				static Int32 Sign(Single value);

				static Double Ceiling(Double a);
				static Double Exp(Double d);
				static Double Truncate(Double d);

				static Double Log(Double d);
				static Double Log(Double a, Double newBase);
				static Double Log10(Double d);

				static Double Sin(Double a);
				static Double Sinh(Double value);
				static Double Cos(Double d);
				static Double Cosh(Double value);
				static Double Tan(Double a);
				static Double Tanh(Double value);

				static Double Asin(Double d);
				static Double Acos(Double d);
				static Double Atan(Double d);
				static Double Atan2(Double y, Double x);

				static Double FMod(Double x, Int32 y);
				static Double FMod(Double x, Double y);
			};
		}
	}
}

#endif	// _SYSTEM_MATH_H_