#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBWSPROPRECORD() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbWsPropRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbWsPropRecord();
			void SetWorksheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
		public:
			virtual ~XlsbWsPropRecord();
	};

}

}

}

}
