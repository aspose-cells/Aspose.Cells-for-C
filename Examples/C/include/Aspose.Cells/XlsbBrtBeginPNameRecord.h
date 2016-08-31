#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Int16.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPNAMERECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxName;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPNameRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPNameRecord(intrusive_ptr<Aspose::Cells::Pivot::SxName> name);
			 XlsbBrtBeginPNameRecord();
		public:
			virtual ~XlsbBrtBeginPNameRecord();
	};

}

}

}

}
