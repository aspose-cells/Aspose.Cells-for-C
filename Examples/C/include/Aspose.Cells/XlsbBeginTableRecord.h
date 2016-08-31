#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINTABLERECORD() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginTableRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::CellArea> GetTableRef(intrusive_ptr<Aspose::Cells::Tables::ListObject> table);
	public:

			 XlsbBeginTableRecord(intrusive_ptr<Aspose::Cells::Tables::ListObject> table);
			 XlsbBeginTableRecord();
		public:
			virtual ~XlsbBeginTableRecord();
	};

}

}

}

}
