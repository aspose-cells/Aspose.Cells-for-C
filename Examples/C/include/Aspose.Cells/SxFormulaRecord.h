#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Byte.h"
//#include "System/BitConverter.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/Array.h"
//#include "System/Int32.h"
#define STATIC_SXFORMULARECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCalculatedItem;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxFormulaRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxFormulaRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> item);
			 SxFormulaRecord();
		public:
			virtual ~SxFormulaRecord();
	};

}

}

}

}
