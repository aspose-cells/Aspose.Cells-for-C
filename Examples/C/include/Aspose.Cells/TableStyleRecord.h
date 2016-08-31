#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_TABLESTYLERECORD() 

namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyle;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class TableStyleRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 TableStyleRecord(intrusive_ptr<Aspose::Cells::Tables::TableStyle> tbStyle);
			 TableStyleRecord();
		public:
			virtual ~TableStyleRecord();
	};

}

}

}
