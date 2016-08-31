#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_BRTCALCPROPRECORD() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtCalcPropRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtCalcPropRecord(intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 BrtCalcPropRecord();
		public:
			virtual ~BrtCalcPropRecord();
	};

}

}

}

}
