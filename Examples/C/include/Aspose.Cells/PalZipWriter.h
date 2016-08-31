#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/DateTime.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_PALZIPWRITER() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalZipWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> mDstStream;
	public:

			 PalZipWriter(intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream);
			void AddEntry(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::IO::Stream> srcStream);
			void Finish();
			void SetCompressionLevel(Aspose::Cells::System::Int32 level);
			 PalZipWriter();
		public:
			virtual ~PalZipWriter();
	};

}

}

}

}
