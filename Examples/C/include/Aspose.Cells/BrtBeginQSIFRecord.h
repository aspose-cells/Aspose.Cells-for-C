#pragma once
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_BRTBEGINQSIFRECORD() 

namespace Aspose {
namespace Cells {
class QueryTableField;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtBeginQSIFRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtBeginQSIFRecord(intrusive_ptr<Aspose::Cells::QueryTableField> field);
			 BrtBeginQSIFRecord();
		public:
			virtual ~BrtBeginQSIFRecord();
	};

}

}

}

}
