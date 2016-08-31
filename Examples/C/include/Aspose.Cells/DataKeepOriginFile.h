#pragma once
#include "System/Object.h"
#include "System/IO/Stream.h"
//#include "System/String.h"
//#include "System/Byte.h"
//#include "System/IO/MemoryStream.h"
//#include "System/Int32.h"
//#include "System/Int64.h"
#include "System/Array1D.h"
#define STATIC_DATAKEEPORIGINFILE() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipFile;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class DataKeepOriginFile : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			void LoadData(intrusive_ptr<Aspose::Cells::System::IO::Stream> s);
			intrusive_ptr<Aspose::Cells::System::IO::Stream> data;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile;
			void Close();
			 DataKeepOriginFile();
		public:
			virtual ~DataKeepOriginFile();
	};

}

}

}
