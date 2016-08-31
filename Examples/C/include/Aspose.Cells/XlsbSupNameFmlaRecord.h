#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBSUPNAMEFMLARECORD() 

namespace Aspose {
namespace Cells {
class ExternName;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbSupNameFmlaRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbSupNameFmlaRecord(intrusive_ptr<Aspose::Cells::ExternName> name);
			 XlsbSupNameFmlaRecord();
		public:
			virtual ~XlsbSupNameFmlaRecord();
	};

}

}

}

}
