#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Array.h"
//#include "System/Int32.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINTABLESTYLESRECORD() 

namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyleCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginTableStylesRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginTableStylesRecord(intrusive_ptr<Aspose::Cells::Tables::TableStyleCollection> tbStyles);
			 XlsbBeginTableStylesRecord();
		public:
			virtual ~XlsbBeginTableStylesRecord();
	};

}

}

}

}
