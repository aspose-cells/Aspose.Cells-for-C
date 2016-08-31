#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBEXTERNCELLREALRECORD() 

namespace Aspose {
namespace Cells {
class ExternalCell;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbExternCellRealRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbExternCellRealRecord();
			void SetExternCell(intrusive_ptr<Aspose::Cells::ExternalCell> cell);
		public:
			virtual ~XlsbExternCellRealRecord();
	};

}

}

}

}
