#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Array1D.h"
//#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_XLSBBRTBEGINPCDIRUNRECORD() 

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
	class XlsbBrtBeginPCDIRunRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDIRunRecord(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> fdb);
			 XlsbBrtBeginPCDIRunRecord(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> data);
			 XlsbBrtBeginPCDIRunRecord();
		public:
			virtual ~XlsbBrtBeginPCDIRunRecord();
	};

}

}

}

}
