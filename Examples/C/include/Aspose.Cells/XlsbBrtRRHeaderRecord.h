#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/DateTime.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTRRHEADERRECORD() 

namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionLog;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRHeaderRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtRRHeaderRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionLog> log);
			 XlsbBrtRRHeaderRecord();
		public:
			virtual ~XlsbBrtRRHeaderRecord();
	};

}

}

}

}
