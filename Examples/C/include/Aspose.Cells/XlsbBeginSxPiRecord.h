#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/StringHelperPal.h"
//#include "System/Int16.h"
//#include "System/UInt32.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINSXPIRECORD() 

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
	class XlsbBeginSxPiRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginSxPiRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			 XlsbBeginSxPiRecord();
		public:
			virtual ~XlsbBeginSxPiRecord();
	};

}

}

}

}
