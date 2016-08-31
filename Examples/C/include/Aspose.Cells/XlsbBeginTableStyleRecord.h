#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINTABLESTYLERECORD() 

namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyle;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginTableStyleRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginTableStyleRecord(intrusive_ptr<Aspose::Cells::Tables::TableStyle> tbStyle);
			 XlsbBeginTableStyleRecord();
		public:
			virtual ~XlsbBeginTableStyleRecord();
	};

}

}

}

}
