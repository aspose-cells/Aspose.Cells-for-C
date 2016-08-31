#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBTABLESTYLEELEMENTRECORD() 

namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyleElement;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbTableStyleElementRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbTableStyleElementRecord(intrusive_ptr<Aspose::Cells::Tables::TableStyleElement> elm);
			 XlsbTableStyleElementRecord();
		public:
			virtual ~XlsbTableStyleElementRecord();
	};

}

}

}

}
