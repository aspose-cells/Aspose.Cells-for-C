#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINSXVIRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotItem;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginSxVIRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginSxVIRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotItem> item);
			 XlsbBeginSxVIRecord(bool IsAutoSubtotals);
			 XlsbBeginSxVIRecord(Aspose::Cells::System::Byte subTotal);
			 XlsbBeginSxVIRecord();
		public:
			virtual ~XlsbBeginSxVIRecord();
	};

}

}

}

}
