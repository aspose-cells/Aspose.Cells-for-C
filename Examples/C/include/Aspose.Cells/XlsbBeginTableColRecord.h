#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINTABLECOLRECORD() 

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
	class XlsbBeginTableColRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginTableColRecord(intrusive_ptr<Aspose::Cells::Tables::ListColumn> col);
			 XlsbBeginTableColRecord();
		public:
			virtual ~XlsbBeginTableColRecord();
	};

}

}

}

}
