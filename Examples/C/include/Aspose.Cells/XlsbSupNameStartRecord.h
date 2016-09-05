#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_XLSBSUPNAMESTARTRECORD() 

namespace Aspose {
namespace Cells {
class ExternName;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbSupNameStartRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbSupNameStartRecord(intrusive_ptr<Aspose::Cells::ExternName> name);
			 XlsbSupNameStartRecord();
		public:
			virtual ~XlsbSupNameStartRecord();
	};

}

}

}

}