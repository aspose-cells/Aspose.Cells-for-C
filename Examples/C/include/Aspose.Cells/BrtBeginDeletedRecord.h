#pragma once
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
#include "System/Object.h"
#define STATIC_BRTBEGINDELETEDRECORD() 

namespace Aspose {
namespace Cells {
class QueryTableField;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtBeginDeletedRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtBeginDeletedRecord(intrusive_ptr<Aspose::Cells::QueryTableField> field);
			 BrtBeginDeletedRecord();
		public:
			virtual ~BrtBeginDeletedRecord();
	};

}

}

}

}
