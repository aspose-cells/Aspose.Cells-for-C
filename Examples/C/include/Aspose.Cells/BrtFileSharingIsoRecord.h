#pragma once
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_BRTFILESHARINGISORECORD() 

namespace Aspose {
namespace Cells {
class WriteProtection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtFileSharingIsoRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtFileSharingIsoRecord(intrusive_ptr<Aspose::Cells::WriteProtection> protection);
			 BrtFileSharingIsoRecord();
		public:
			virtual ~BrtFileSharingIsoRecord();
	};

}

}

}

}
