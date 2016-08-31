#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_SXNAMERECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxName;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxNameRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxNameRecord(intrusive_ptr<Aspose::Cells::Pivot::SxName> name);
			 SxNameRecord();
		public:
			virtual ~SxNameRecord();
	};

}

}

}

}
