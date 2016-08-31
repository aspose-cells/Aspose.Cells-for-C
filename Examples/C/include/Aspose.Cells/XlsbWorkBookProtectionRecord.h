#pragma once
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Object.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBWORKBOOKPROTECTIONRECORD() 

namespace Aspose {
namespace Cells {
class WorkbookProtection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbWorkBookProtectionRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbWorkBookProtectionRecord(intrusive_ptr<Aspose::Cells::WorkbookProtection> protection);
			 XlsbWorkBookProtectionRecord();
		public:
			virtual ~XlsbWorkBookProtectionRecord();
	};

}

}

}

}
