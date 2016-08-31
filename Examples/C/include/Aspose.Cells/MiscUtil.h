#pragma once
#include "System/IO/Stream.h"
//#include "System/Exception.h"
#include "System/Int64.h"
//#include "System/Math.h"
#include "System/UInt16.h"
//#include "System/IO/FileAccess.h"
//#include "System/IO/FileMode.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/IO/File.h"
#include "System/Int16.h"
#include "System/UInt32.h"
//#include "System/ArgumentNullException.h"
//#include "System/ArgumentException.h"
#include "System/Char.h"
#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/ArgumentOutOfRangeException.h"
#include "System/Drawing/SizeF.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/IO/FileStream.h"
#include "System/Single.h"
#define STATIC_MISCUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Rendering {
	class MiscUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 MiscUtil();
			 static const Aspose::Cells::System::Int64 Win32Epoch;
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<bool>> ByteToBool(Aspose::Cells::System::Byte input);
			static Aspose::Cells::System::Int32 SwapInt32(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::UInt32 SwapUInt32(Aspose::Cells::System::UInt32 value);
			static Aspose::Cells::System::Int16 SwapInt16(Aspose::Cells::System::Int16 value);
			static Aspose::Cells::System::UInt16 SwapUInt16(Aspose::Cells::System::UInt16 value);
			static void WriteUInt32ToByteArray(Aspose::Cells::System::Int32 value , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> bytes , Aspose::Cells::System::Int32 offset);
			static void WriteUInt32ToStream(Aspose::Cells::System::UInt32 value , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static void WriteAnsiStringToByteArray(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> bytes , Aspose::Cells::System::Int32 offset);
			static void WriteAnsiStringToStream(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			static Aspose::Cells::System::Int32 SetBit(Aspose::Cells::System::Int32 curValue , Aspose::Cells::System::Int32 bitMask , bool newValue);
			static Aspose::Cells::System::Int32 CountBits(Aspose::Cells::System::UInt32 i);
			static bool IsOdd(Aspose::Cells::System::Int64 value);
			static Aspose::Cells::System::Int32 DivUp(Aspose::Cells::System::Int64 value , Aspose::Cells::System::Int32 divider);
			static Aspose::Cells::System::Int32 RoundUp(Aspose::Cells::System::Int64 value , Aspose::Cells::System::Int32 divider);
			static void SeekToNextPage(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::System::Int32 pageSize);
			static bool CompareFiles(intrusive_ptr<Aspose::Cells::System::String> filename1 , intrusive_ptr<Aspose::Cells::System::String> filename2);
			static bool CompareStreams(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream1 , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream2);
			static void CopyStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> srcStream , intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream);
			static void CopyFileToStream(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream);
			static bool HasChars(intrusive_ptr<Aspose::Cells::System::String> value);
			static void CheckNonNull(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::String> paramName);
			static void CheckHasChars(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::String> paramName);
			static Aspose::Cells::System::Double ValidateRange(Aspose::Cells::System::Double value , Aspose::Cells::System::Double min , Aspose::Cells::System::Double max , bool isThrow);
			static intrusive_ptr<Aspose::Cells::System::String> DoubleToStringG(Aspose::Cells::System::Double value);
			static intrusive_ptr<Aspose::Cells::System::String> DoubleToStringTwoDecimals(Aspose::Cells::System::Double value);
			static intrusive_ptr<Aspose::Cells::System::String> FloatToStringTwoDecimals(Aspose::Cells::System::Single value);
			static Aspose::Cells::System::Int32 DoubleToInt(Aspose::Cells::System::Double value);
			static Aspose::Cells::System::Int32 DoubleToFixed(Aspose::Cells::System::Double value);
			static bool IsExtendedAscii(Aspose::Cells::System::Char c);
			static Aspose::Cells::System::Int32 HexCharToDigit(Aspose::Cells::System::Char digit);
			static bool IsHexDigit(Aspose::Cells::System::Char ch);
			static bool EqualsIgnoreCase(intrusive_ptr<Aspose::Cells::System::String> a , intrusive_ptr<Aspose::Cells::System::String> b);
			static bool EqualsPaperSize(intrusive_ptr<Aspose::Cells::System::Drawing::SizeF> size1 , intrusive_ptr<Aspose::Cells::System::Drawing::SizeF> size2 , Aspose::Cells::System::Double tolerance);
		public:
			virtual ~MiscUtil();
	};

}

}

}

}
