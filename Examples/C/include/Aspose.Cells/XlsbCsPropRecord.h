#pragma once
#include "System/Array1D.h"
//#include "System/StringHelperPal.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
#include "System/Object.h"
#define STATIC_XLSBCSPROPRECORD() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbCsPropRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbCsPropRecord();
			void SetWorksheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
		public:
			virtual ~XlsbCsPropRecord();
	};

}

}

}

}
