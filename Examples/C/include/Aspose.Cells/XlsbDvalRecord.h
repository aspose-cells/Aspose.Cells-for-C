#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/UInt32.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_XLSBDVALRECORD() 

namespace Aspose {
namespace Cells {
class Validation;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbDvalRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbDvalRecord();
			void SetDataValidation(intrusive_ptr<Aspose::Cells::Validation> validation);
		public:
			virtual ~XlsbDvalRecord();
	};

}

}

}

}
