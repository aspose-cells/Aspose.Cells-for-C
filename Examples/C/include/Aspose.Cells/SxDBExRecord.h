#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/DateTime.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_SXDBEXRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxDBExRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxDBExRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			 SxDBExRecord();
		public:
			virtual ~SxDBExRecord();
	};

}

}

}

}
