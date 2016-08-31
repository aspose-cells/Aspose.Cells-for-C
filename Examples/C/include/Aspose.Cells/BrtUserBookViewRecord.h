#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Guid.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_BRTUSERBOOKVIEWRECORD() 

namespace Aspose {
namespace Cells {
class CustomWorkbookView;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtUserBookViewRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtUserBookViewRecord(intrusive_ptr<Aspose::Cells::CustomWorkbookView> cView);
			 BrtUserBookViewRecord();
		public:
			virtual ~BrtUserBookViewRecord();
	};

}

}

}

}
