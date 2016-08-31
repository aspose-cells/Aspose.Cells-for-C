#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_BRTBEGINSCTRECORD() 

namespace Aspose {
namespace Cells {
class Scenario;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtBeginSctRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtBeginSctRecord(intrusive_ptr<Aspose::Cells::Scenario> s);
			 BrtBeginSctRecord();
		public:
			virtual ~BrtBeginSctRecord();
	};

}

}

}

}
