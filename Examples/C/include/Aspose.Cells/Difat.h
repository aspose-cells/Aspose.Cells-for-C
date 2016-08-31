#pragma once
//#include "System/Byte.h"
//#include "System/String.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/UInt32.h"
//#include "System/Text/Encoding.h"
//#include "System/IO/IOException.h"
//#include "System/IO/MemoryStream.h"
#include "System/Int32.h"
//#include "System/Int64.h"
//#include "System/Math.h"
//#include "System/IO/BinaryWriter.h"
#include "System/Array1D.h"
#define STATIC_DIFAT() 

namespace Aspose {
namespace Ss {
class SectCollection;
class Header;
}
}

namespace Aspose {
namespace Ss {
	class Difat : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 Difat();
	public:

			static intrusive_ptr<Aspose::Ss::SectCollection> Read(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::System::Int32 difatEntries , Aspose::Cells::System::UInt32 sectDifStart , Aspose::Cells::System::Int32 difatSectors);
			static void Write(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , Aspose::Cells::System::UInt32 sectFatStart , Aspose::Cells::System::Int32 difatEntries , intrusive_ptr<Aspose::Ss::Header> header);
		public:
			virtual ~Difat();
	};

}

}
