#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#define STATIC_XLSBTABLECCFMLARECORD() 

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
	class XlsbTableCCFmlaRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbTableCCFmlaRecord(intrusive_ptr<Aspose::Cells::Tables::ListColumn> col);
			 XlsbTableCCFmlaRecord();
		public:
			virtual ~XlsbTableCCFmlaRecord();
	};

}

}

}

}
