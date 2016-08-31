#pragma once
//#include "System/Byte.h"
//#include "System/String.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINSUPBOOKRECORD() 

namespace Aspose {
namespace Cells {
class SupbookData;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginSupBookRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginSupBookRecord();
			void SetSupBook(intrusive_ptr<Aspose::Cells::SupbookData> supBook);
		public:
			virtual ~XlsbBeginSupBookRecord();
	};

}

}

}

}
