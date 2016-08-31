#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_SXDBRECORD() 

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
	class SxDBRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxDBRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			 SxDBRecord();
		public:
			virtual ~SxDBRecord();
	};

}

}

}

}
