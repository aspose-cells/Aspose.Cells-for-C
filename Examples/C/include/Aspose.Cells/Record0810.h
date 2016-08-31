#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "PivotTableAutoFormatType.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#define STATIC_RECORD0810() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFormat;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class Record0810 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			static Aspose::Cells::System::Int32 PivotTableFormatTypeToValue(Aspose::Cells::Pivot::PivotTableAutoFormatType type);
	public:

			 Record0810(intrusive_ptr<Aspose::Cells::Pivot::PivotFormat> pivotFormat);
			 Record0810();
		public:
			virtual ~Record0810();
	};

}

}

}

}
