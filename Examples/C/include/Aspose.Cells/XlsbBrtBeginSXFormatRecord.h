#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINSXFORMATRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFormat;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginSXFormatRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginSXFormatRecord(intrusive_ptr<Aspose::Cells::Pivot::SxFormat> format);
			 XlsbBrtBeginSXFormatRecord();
		public:
			virtual ~XlsbBrtBeginSXFormatRecord();
	};

}

}

}

}
