#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/Byte.h"
//#include "System/UInt16.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
#include "BIFFRecord.h"
#define STATIC_SXNAMEPAIRRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxNamePair;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxNamePairRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxNamePairRecord(intrusive_ptr<Aspose::Cells::Pivot::SxNamePair> pair);
			 SxNamePairRecord();
		public:
			virtual ~SxNamePairRecord();
	};

}

}

}

}
