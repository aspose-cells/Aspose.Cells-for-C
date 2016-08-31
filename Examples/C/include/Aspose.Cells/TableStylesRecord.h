#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_TABLESTYLESRECORD() 

namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyleCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class TableStylesRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 TableStylesRecord(intrusive_ptr<Aspose::Cells::Tables::TableStyleCollection> tbStyles);
			 TableStylesRecord();
		public:
			virtual ~TableStylesRecord();
	};

}

}

}
