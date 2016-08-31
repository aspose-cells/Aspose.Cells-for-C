#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTBEGINPRFILTERRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFilt;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPRFilterRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPRFilterRecord(intrusive_ptr<Aspose::Cells::Pivot::SxFilt> filt);
			 XlsbBrtBeginPRFilterRecord();
		public:
			virtual ~XlsbBrtBeginPRFilterRecord();
	};

}

}

}

}
