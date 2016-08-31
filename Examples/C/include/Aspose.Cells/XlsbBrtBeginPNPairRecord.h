#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPNPAIRRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxNamePair;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPNPairRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPNPairRecord(intrusive_ptr<Aspose::Cells::Pivot::SxNamePair> pair);
			 XlsbBrtBeginPNPairRecord();
		public:
			virtual ~XlsbBrtBeginPNPairRecord();
	};

}

}

}

}
