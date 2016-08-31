#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "System/Array1D.h"
#define STATIC_XLSBREVISIONHEADERREADER() 

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
	class XlsbRevisionHeaderReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> _logs;
			Aspose::Cells::System::Int32 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader;
			void ReadBrtInfo();
			void ReadBrtRRHeader();
	public:

			 XlsbRevisionHeaderReader(intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> logs);
			void Read(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader);
			static intrusive_ptr<Aspose::Cells::System::DateTime> ReadDateTime(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			 XlsbRevisionHeaderReader();
		public:
			virtual ~XlsbRevisionHeaderReader();
	};

}

}

}
