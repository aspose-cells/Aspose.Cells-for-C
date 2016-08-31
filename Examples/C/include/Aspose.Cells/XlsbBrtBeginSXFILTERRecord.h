#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTBEGINSXFILTERRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFilter;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginSXFILTERRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginSXFILTERRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotFilter> pivotFilter);
			 XlsbBrtBeginSXFILTERRecord();
		public:
			virtual ~XlsbBrtBeginSXFILTERRecord();
	};

}

}

}

}
