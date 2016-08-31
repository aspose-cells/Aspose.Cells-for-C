#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTINFORECORD() 

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
namespace Record {
	class XlsbBrtInfoRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtInfoRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionLogCollection> logs);
			 XlsbBrtInfoRecord();
		public:
			virtual ~XlsbBrtInfoRecord();
	};

}

}

}

}
