#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Collections/ArrayList.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#define STATIC_SXRULERECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxRule;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxRuleRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxRuleRecord(intrusive_ptr<Aspose::Cells::Pivot::SxRule> rule);
			 SxRuleRecord();
		public:
			virtual ~SxRuleRecord();
	};

}

}

}

}
