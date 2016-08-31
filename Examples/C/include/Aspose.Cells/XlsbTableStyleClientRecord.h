#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_XLSBTABLESTYLECLIENTRECORD() 

namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbTableStyleClientRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbTableStyleClientRecord(intrusive_ptr<Aspose::Cells::Tables::ListObject> table);
			 XlsbTableStyleClientRecord();
		public:
			virtual ~XlsbTableStyleClientRecord();
	};

}

}

}

}
