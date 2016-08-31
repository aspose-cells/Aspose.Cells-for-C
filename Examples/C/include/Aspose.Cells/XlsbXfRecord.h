#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBXFRECORD() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataXf;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbXfRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbXfRecord();
			void SetXf(intrusive_ptr<Aspose::Cells::OpenXML::DataXf> xf);
		public:
			virtual ~XlsbXfRecord();
	};

}

}

}

}
