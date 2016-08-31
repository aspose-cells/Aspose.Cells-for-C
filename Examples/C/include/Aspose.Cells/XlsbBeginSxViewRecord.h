#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
//#include "System/Int64.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINSXVIEWRECORD() 

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
	class XlsbBeginSxViewRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginSxViewRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table , Aspose::Cells::System::Int32 cacheId);
			 XlsbBeginSxViewRecord();
		public:
			virtual ~XlsbBeginSxViewRecord();
	};

}

}

}

}
