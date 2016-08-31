#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_BRTBEGINQSIRECORD() 

namespace Aspose {
namespace Cells {
class QueryTable;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtBeginQSIRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtBeginQSIRecord(intrusive_ptr<Aspose::Cells::QueryTable> queryTable);
			 BrtBeginQSIRecord();
		public:
			virtual ~BrtBeginQSIRecord();
	};

}

}

}

}
