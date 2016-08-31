#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBCOLORRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
class InternalColor;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbColorRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbColorRecord(intrusive_ptr<Aspose::Cells::InternalColor> color , intrusive_ptr<Aspose::Cells::Workbook> book , bool isX14);
			 XlsbColorRecord();
		public:
			virtual ~XlsbColorRecord();
	};

}

}

}

}
