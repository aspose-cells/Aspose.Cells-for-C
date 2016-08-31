#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "XlsbRecord.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINCONDITIONALFORMATTINGRECORD14() 

namespace Aspose {
namespace Cells {
class FormatConditionCollection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginConditionalFormattingRecord14 : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginConditionalFormattingRecord14();
			void SetFormatCondtions(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs);
		public:
			virtual ~XlsbBeginConditionalFormattingRecord14();
	};

}

}

}

}
