#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Byte.h"
//#include "System/Guid.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_BRTBEGINUSERSHVIEWRECORD() 

namespace Aspose {
namespace Cells {
class CustomSheetView;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class BrtBeginUserShViewRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 BrtBeginUserShViewRecord(intrusive_ptr<Aspose::Cells::CustomSheetView> cView);
			 BrtBeginUserShViewRecord();
		public:
			virtual ~BrtBeginUserShViewRecord();
	};

}

}

}

}
