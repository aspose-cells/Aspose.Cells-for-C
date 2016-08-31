#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_XLSBHEADERFOOTERRECORD() 

namespace Aspose {
namespace Cells {
class PageSetup;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbHeaderFooterRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbHeaderFooterRecord();
			void SetHeaderFooter(intrusive_ptr<Aspose::Cells::PageSetup> pgSetup);
		public:
			virtual ~XlsbHeaderFooterRecord();
	};

}

}

}

}
