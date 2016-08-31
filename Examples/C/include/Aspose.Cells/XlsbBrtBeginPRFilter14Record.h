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
#define STATIC_XLSBBRTBEGINPRFILTER14RECORD() 

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
	class XlsbBrtBeginPRFilter14Record : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPRFilter14Record(intrusive_ptr<Aspose::Cells::Pivot::SxFilt> filt);
			 XlsbBrtBeginPRFilter14Record();
		public:
			virtual ~XlsbBrtBeginPRFilter14Record();
	};

}

}

}

}
