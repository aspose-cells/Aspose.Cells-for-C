#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBDYNAMICFILTERRECORD() 

namespace Aspose {
namespace Cells {
class DynamicFilter;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbDynamicFilterRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbDynamicFilterRecord();
			void SetDynamicFilter(intrusive_ptr<Aspose::Cells::DynamicFilter> dynamicFilter);
		public:
			virtual ~XlsbDynamicFilterRecord();
	};

}

}

}

}
