#pragma once
//#include "System/Collections/ArrayList.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Object.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPRFILTERSRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxRule;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPRFiltersRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPRFiltersRecord(intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			 XlsbBrtBeginPRFiltersRecord();
		public:
			virtual ~XlsbBrtBeginPRFiltersRecord();
	};

}

}

}

}
