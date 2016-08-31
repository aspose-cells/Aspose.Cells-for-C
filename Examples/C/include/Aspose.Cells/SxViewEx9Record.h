#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/StringHelperPal.h"
//#include "System/Int16.h"
#include "PivotTableAutoFormatType.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_SXVIEWEX9RECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxViewEx9;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxViewEx9Record : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			static Aspose::Cells::System::Int32 PivotTableFormatTypeToValue(Aspose::Cells::Pivot::PivotTableAutoFormatType type);
	public:

			 SxViewEx9Record(intrusive_ptr<Aspose::Cells::Pivot::SxViewEx9> pivotFormat);
			 SxViewEx9Record();
		public:
			virtual ~SxViewEx9Record();
	};

}

}

}

}
