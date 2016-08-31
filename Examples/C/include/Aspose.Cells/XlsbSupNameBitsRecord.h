#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBSUPNAMEBITSRECORD() 

namespace Aspose {
namespace Cells {
class SupbookData;
class ExternName;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbSupNameBitsRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbSupNameBitsRecord(intrusive_ptr<Aspose::Cells::SupbookData> supBook , intrusive_ptr<Aspose::Cells::ExternName> name);
			 XlsbSupNameBitsRecord();
		public:
			virtual ~XlsbSupNameBitsRecord();
	};

}

}

}

}
