#ifndef _SYSTEM_BITCONVERTER_H_
#define _SYSTEM_BITCONVERTER_H_

#include "System/Array1D.h"
#include "System/BaseNumber.h"
#include "System/TypeDefBString.h"

using namespace Aspose::Cells::System;

namespace Aspose { 
	namespace Cells { 
		namespace System {
			class BitConverter
			{
			public:
				static const bool IsLittleEndian = true;
				static Int64 DoubleToInt64Bits(Double value);
				static intrusive_ptr<Array1D<Byte>> GetBytes(bool value);
				static intrusive_ptr<Array1D<Byte>> GetBytes(Char value);
				static intrusive_ptr<Array1D<Byte>> GetBytes(Double value);
				static intrusive_ptr<Array1D<Byte>> GetBytes(Single value);
				static intrusive_ptr<Array1D<Byte>> GetBytes(Int32 value);
				static intrusive_ptr<Array1D<Byte>> GetBytes(Int64 value);
				static intrusive_ptr<Array1D<Byte>> GetBytes(Int16 value);
				static intrusive_ptr<Array1D<Byte>> GetBytes(UInt32 value);
				static intrusive_ptr<Array1D<Byte>> GetBytes(UInt16 value);
				static Int16 ToInt16(intrusive_ptr<Array1D<Byte>> value, Int32 startIndex);
				static Int32 ToInt32(intrusive_ptr<Array1D<Byte>> value, Int32 startIndex);
				static Int64 ToInt64(intrusive_ptr<Array1D<Byte>> value, Int32 startIndex);
				static UInt16 ToUInt16(intrusive_ptr<Array1D<Byte>> value, Int32 startIndex);
				static UInt32 ToUInt32(intrusive_ptr<Array1D<Byte>> value, Int32 startIndex);
				static UInt64 ToUInt64(intrusive_ptr<Array1D<Byte>> value, Int32 startIndex);
				static Double ToDouble(intrusive_ptr<Array1D<Byte>> value, Int32 startIndex);
				static StringPtr ToString(intrusive_ptr<Array1D<Byte>> value);
				static StringPtr ToString(intrusive_ptr<Array1D<Byte>> value, Int32 startIndex, Int32 length);
				static Double Int64BitsToDouble(Int64 value);
			private:
				static Char GetHexValue(int i);
			};
		}
	}
}
#endif//_SYSTEM_BITCONVERTER_H_