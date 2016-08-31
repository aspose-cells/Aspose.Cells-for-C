#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTSXVD14RECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotField;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtSXVD14Record : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtSXVD14Record(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			 XlsbBrtSXVD14Record();
		public:
			virtual ~XlsbBrtSXVD14Record();
	};

}

}

}

}
