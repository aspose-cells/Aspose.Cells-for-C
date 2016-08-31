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
#define STATIC_XLSBBRTBEGINPCDFIELDRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFDB;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPCDFieldRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDFieldRecord(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> sxFdb);
			 XlsbBrtBeginPCDFieldRecord();
		public:
			virtual ~XlsbBrtBeginPCDFieldRecord();
	};

}

}

}

}
