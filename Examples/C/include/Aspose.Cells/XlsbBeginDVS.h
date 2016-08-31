#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINDVS() 

namespace Aspose {
namespace Cells {
class ValidationCollection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginDVS : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginDVS();
			void SetDVs(intrusive_ptr<Aspose::Cells::ValidationCollection> dvs);
		public:
			virtual ~XlsbBeginDVS();
	};

}

}

}

}
