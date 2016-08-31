#pragma once
//#include "System/ArgumentOutOfRangeException.h"
//#include "System/DateTimeKind.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/String.h"
#include "System/DateTime.h"
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
//#include "System/ArgumentNullException.h"
#include "System/Int32.h"
#include "System/Int64.h"
//#include "System/ArgumentException.h"
#include "System/Array1D.h"
#define STATIC_SSMISCUTIL() 


namespace Aspose {
namespace Ss {
	class SsMiscUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 SsMiscUtil();
			 static const Aspose::Cells::System::Int64 Win32Epoch;
	public:

			static Aspose::Cells::System::Int32 DivUp(Aspose::Cells::System::Int64 value , Aspose::Cells::System::Int32 divider);
			static Aspose::Cells::System::Int32 RoundUp(Aspose::Cells::System::Int64 value , Aspose::Cells::System::Int32 divider);
			static void SeekToNextPage(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::System::Int32 pageSize);
			static void CopyStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> srcStream , intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream);
			static intrusive_ptr<Aspose::Cells::System::DateTime> FromFileTimeUtc(Aspose::Cells::System::Int64 fileTime , intrusive_ptr<Aspose::Cells::System::String> paramName);
			static Aspose::Cells::System::Int64 ToFileTimeUtc(intrusive_ptr<Aspose::Cells::System::DateTime> value , intrusive_ptr<Aspose::Cells::System::String> paramName);
			static bool HasChars(intrusive_ptr<Aspose::Cells::System::String> value);
			static void CheckHasChars(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::String> paramName);
		public:
			virtual ~SsMiscUtil();
	};

}

}
