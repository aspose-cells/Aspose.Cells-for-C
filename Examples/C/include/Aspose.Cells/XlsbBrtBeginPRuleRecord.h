#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTBEGINPRULERECORD() 

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
	class XlsbBrtBeginPRuleRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPRuleRecord(intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			 XlsbBrtBeginPRuleRecord(intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule , bool isCacheDefXlsb);
			void CreateData(intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule , bool isCacheDefXlsb);
			 XlsbBrtBeginPRuleRecord();
		public:
			virtual ~XlsbBrtBeginPRuleRecord();
	};

}

}

}

}
