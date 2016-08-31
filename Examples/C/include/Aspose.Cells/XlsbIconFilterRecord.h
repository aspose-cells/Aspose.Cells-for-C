#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBICONFILTERRECORD() 

namespace Aspose {
namespace Cells {
class IconFilter;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbIconFilterRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbIconFilterRecord();
			void SetIconFilter(intrusive_ptr<Aspose::Cells::IconFilter> iconFilter);
		public:
			virtual ~XlsbIconFilterRecord();
	};

}

}

}

}
