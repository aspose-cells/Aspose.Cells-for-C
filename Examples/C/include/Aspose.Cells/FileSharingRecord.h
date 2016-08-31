#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_FILESHARINGRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class FileSharingRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 FileSharingRecord(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 FileSharingRecord();
		public:
			virtual ~FileSharingRecord();
	};

}

}

}
