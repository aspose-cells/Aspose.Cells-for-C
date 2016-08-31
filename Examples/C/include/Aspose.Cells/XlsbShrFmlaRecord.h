#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/Array.h"
#define STATIC_XLSBSHRFMLARECORD() 

namespace Aspose {
namespace Cells {
class ArrayFormula;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbShrFmlaRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbShrFmlaRecord(intrusive_ptr<Aspose::Cells::ArrayFormula> arrayFmla);
			 XlsbShrFmlaRecord();
		public:
			virtual ~XlsbShrFmlaRecord();
	};

}

}

}

}
