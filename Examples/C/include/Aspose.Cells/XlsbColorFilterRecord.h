#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBCOLORFILTERRECORD() 

namespace Aspose {
namespace Cells {
class ColorFilter;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbColorFilterRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbColorFilterRecord();
			void SetColorFilter(intrusive_ptr<Aspose::Cells::ColorFilter> colorFilter);
		public:
			virtual ~XlsbColorFilterRecord();
	};

}

}

}

}
