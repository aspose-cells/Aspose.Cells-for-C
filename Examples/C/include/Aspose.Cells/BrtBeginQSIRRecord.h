#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#define STATIC_BRTBEGINQSIRRECORD() 

namespace Aspose {
namespace Cells {
class QueryTable;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtBeginQSIRRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtBeginQSIRRecord(intrusive_ptr<Aspose::Cells::QueryTable> queryTable);
			 BrtBeginQSIRRecord();
		public:
			virtual ~BrtBeginQSIRRecord();
	};

}

}

}

}
