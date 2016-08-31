#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRKRECORD() 

namespace Aspose {
namespace Cells {
class HorizontalPageBreak;
class VerticalPageBreak;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBRKRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBRKRecord();
			void SetHBreak(intrusive_ptr<Aspose::Cells::HorizontalPageBreak> hPageBreak);
			void SetVBreak(intrusive_ptr<Aspose::Cells::VerticalPageBreak> vPageBreak);
		public:
			virtual ~XlsbBRKRecord();
	};

}

}

}

}
