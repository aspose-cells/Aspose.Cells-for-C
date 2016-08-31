#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBEGINDATABARRECORD() 

namespace Aspose {
namespace Cells {
class DataBar;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginDataBarRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginDataBarRecord(intrusive_ptr<Aspose::Cells::DataBar> bar , bool isX14);
			 XlsbBeginDataBarRecord();
		public:
			virtual ~XlsbBeginDataBarRecord();
	};

}

}

}

}
