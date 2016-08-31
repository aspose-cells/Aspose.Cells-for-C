#pragma once
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Byte.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_XLSBFILLRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataFill;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbFillRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::Workbook* wb;
	public:

			 XlsbFillRecord(intrusive_ptr<Aspose::Cells::Workbook> wb);
			void SetFill(intrusive_ptr<Aspose::Cells::OpenXML::DataFill> fill);
			 XlsbFillRecord();
		public:
			virtual ~XlsbFillRecord();
	};

}

}

}

}
