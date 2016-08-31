#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBTOP10FILTERRECORD() 

namespace Aspose {
namespace Cells {
class Top10Filter;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbTop10FilterRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbTop10FilterRecord();
			void SetTop10Filter(intrusive_ptr<Aspose::Cells::Top10Filter> top10Filter);
		public:
			virtual ~XlsbTop10FilterRecord();
	};

}

}

}

}
