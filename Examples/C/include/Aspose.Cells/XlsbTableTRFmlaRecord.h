#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#define STATIC_XLSBTABLETRFMLARECORD() 

namespace Aspose {
namespace Cells {
namespace Tables {
class ListColumn;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbTableTRFmlaRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbTableTRFmlaRecord(intrusive_ptr<Aspose::Cells::Tables::ListColumn> col);
			 XlsbTableTRFmlaRecord();
		public:
			virtual ~XlsbTableTRFmlaRecord();
	};

}

}

}

}
