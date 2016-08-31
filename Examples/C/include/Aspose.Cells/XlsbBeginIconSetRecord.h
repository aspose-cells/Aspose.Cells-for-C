#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINICONSETRECORD() 

namespace Aspose {
namespace Cells {
class IconSet;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginIconSetRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			bool IsX14;
	public:

			 XlsbBeginIconSetRecord(bool isX14);
			void SetIconSet(intrusive_ptr<Aspose::Cells::IconSet> iconSet);
			 XlsbBeginIconSetRecord();
		public:
			virtual ~XlsbBeginIconSetRecord();
	};

}

}

}

}
