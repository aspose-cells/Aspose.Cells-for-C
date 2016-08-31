#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBHLINKRECORD() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpHyperlink;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbHLinkRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbHLinkRecord();
			void SetLink(intrusive_ptr<Aspose::Cells::OpenXML::DataExpHyperlink> expLink);
		public:
			virtual ~XlsbHLinkRecord();
	};

}

}

}

}
