#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINRULERECORD() 

namespace Aspose {
namespace Cells {
class FormatCondition;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginRuleRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginRuleRecord();
			void SetFormatContion(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
		public:
			virtual ~XlsbBeginRuleRecord();
	};

}

}

}

}
