#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/Collections/ArrayList.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINCONDITIONALFORMATTINGRECORD() 

namespace Aspose {
namespace Cells {
class FormatConditionCollection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginConditionalFormattingRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginConditionalFormattingRecord();
			void SetFormatCondtions(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs);
		public:
			virtual ~XlsbBeginConditionalFormattingRecord();
	};

}

}

}

}
