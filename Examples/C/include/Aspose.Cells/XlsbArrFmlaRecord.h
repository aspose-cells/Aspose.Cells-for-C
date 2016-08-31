#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/Array.h"
#define STATIC_XLSBARRFMLARECORD() 

namespace Aspose {
namespace Cells {
class ArrayFormula;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbArrFmlaRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbArrFmlaRecord(intrusive_ptr<Aspose::Cells::ArrayFormula> arrayFmla);
			 XlsbArrFmlaRecord();
		public:
			virtual ~XlsbArrFmlaRecord();
	};

}

}

}

}
