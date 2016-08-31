#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Char.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBSTYLERECORD() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataCellStyle;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbStyleRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbStyleRecord();
			void SetStyle(intrusive_ptr<Aspose::Cells::OpenXML::DataCellStyle> style);
		public:
			virtual ~XlsbStyleRecord();
	};

}

}

}

}
