#pragma once
//#include "System/Byte.h"
#include "SectCollection.h"
#include "System/Object.h"
//#include "System/IO/BinaryReader.h"
#include "System/IO/Stream.h"
//#include "System/UInt32.h"
//#include "System/IO/BinaryWriter.h"
//#include "System/IO/MemoryStream.h"
//#include "System/Int32.h"
//#include "System/Int64.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_FAT() 

namespace Aspose {
namespace Ss {
class Header;
}
}

namespace Aspose {
namespace Ss {
	class Fat : public Aspose::Ss::SectCollection
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::IO::Stream> mStream;
			intrusive_ptr<Aspose::Ss::Header> mHeader;
	public:

			 Fat(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Ss::Header> header);
			bool Read();
			void Write();
			 Fat();
		public:
			virtual ~Fat();
	};

}

}
