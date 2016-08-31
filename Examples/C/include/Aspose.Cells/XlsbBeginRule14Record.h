#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
//#include "System/Guid.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINRULE14RECORD() 

namespace Aspose {
namespace Cells {
class FormatCondition;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginRule14Record : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginRule14Record();
			void SetFormatContion(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
		public:
			virtual ~XlsbBeginRule14Record();
	};

}

}

}

}
