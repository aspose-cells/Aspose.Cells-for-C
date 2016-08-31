#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_TABLESTYLEELEMENTRECORD() 

namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyleElement;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class TableStyleElementRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 TableStyleElementRecord(intrusive_ptr<Aspose::Cells::Tables::TableStyleElement> elm);
			 TableStyleElementRecord();
		public:
			virtual ~TableStyleElementRecord();
	};

}

}

}
