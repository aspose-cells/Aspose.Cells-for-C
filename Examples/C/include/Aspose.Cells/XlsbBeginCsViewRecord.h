#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINCSVIEWRECORD() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginCsViewRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginCsViewRecord();
			void SetWorksheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
		public:
			virtual ~XlsbBeginCsViewRecord();
	};

}

}

}

}
