#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_BRTSLCRECORD() 

namespace Aspose {
namespace Cells {
class ScenarioInputCell;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtSlcRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtSlcRecord(intrusive_ptr<Aspose::Cells::ScenarioInputCell> inputCell);
			 BrtSlcRecord();
		public:
			virtual ~BrtSlcRecord();
	};

}

}

}

}
