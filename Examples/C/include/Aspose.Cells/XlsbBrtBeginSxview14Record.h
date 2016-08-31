#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTBEGINSXVIEW14RECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginSxview14Record : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginSxview14Record(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			 XlsbBrtBeginSxview14Record();
		public:
			virtual ~XlsbBrtBeginSxview14Record();
	};

}

}

}

}
