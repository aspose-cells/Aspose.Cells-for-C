#pragma once
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINFILTERCOLUMNRECORD() 

namespace Aspose {
namespace Cells {
class FilterColumn;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginFilterColumnRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginFilterColumnRecord(intrusive_ptr<Aspose::Cells::FilterColumn> filterColumn);
			 XlsbBeginFilterColumnRecord();
		public:
			virtual ~XlsbBeginFilterColumnRecord();
	};

}

}

}

}
