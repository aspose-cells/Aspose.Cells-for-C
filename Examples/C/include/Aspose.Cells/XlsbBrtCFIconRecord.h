#pragma once
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTCFICONRECORD() 

namespace Aspose {
namespace Cells {
class ConditionalFormattingIcon;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtCFIconRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtCFIconRecord(intrusive_ptr<Aspose::Cells::ConditionalFormattingIcon> cfIcon);
			 XlsbBrtCFIconRecord();
		public:
			virtual ~XlsbBrtCFIconRecord();
	};

}

}

}

}
