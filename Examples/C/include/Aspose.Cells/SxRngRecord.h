#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Byte.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "BIFFRecord.h"
#define STATIC_SXRNGRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxRng;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxRngRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxRngRecord(intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			 SxRngRecord();
		public:
			virtual ~SxRngRecord();
	};

}

}

}

}
