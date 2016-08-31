#pragma once
#include "System/Byte.h"
#include "System/Object.h"
//#include "System/IO/FileShare.h"
#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/IO/FileStream.h"
//#include "System/IO/FileAccess.h"
//#include "System/IO/File.h"
//#include "System/IO/FileMode.h"
//#include "System/Int64.h"
//#include "System/IO/MemoryStream.h"
//#include "System/ArgumentNullException.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_PALSTREAMUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalStreamUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> OpenRead(intrusive_ptr<Aspose::Cells::System::String> file);
			static void CopyStream(intrusive_ptr<Aspose::Cells::System::IO::Stream> srcStream , intrusive_ptr<Aspose::Cells::System::IO::Stream> dstStream);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CopyStreamToByteArray(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , bool close);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> CopyStreamToByteArray(intrusive_ptr<Aspose::Cells::System::String> fileName);
			 PalStreamUtil();
		public:
			virtual ~PalStreamUtil();
	};

}

}

}

}
