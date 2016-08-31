#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/String.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/DateTime.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBREVISIONUSERNAMESREADER() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionLogCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbBinaryReader;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbRevisionUserNamesReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> _logs;
			Aspose::Cells::System::Int32 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			Aspose::Cells::System::Int32 length;
			void ReadBrtUser();
	public:

			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader;
			 XlsbRevisionUserNamesReader(intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> logs);
			void Read(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader);
			 XlsbRevisionUserNamesReader();
		public:
			virtual ~XlsbRevisionUserNamesReader();
	};

}

}

}
