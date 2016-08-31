#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_SXVDRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxVD;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxVdRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxVdRecord();
			void SetSxVd(intrusive_ptr<Aspose::Cells::Pivot::SxVD> sxVd);
		public:
			virtual ~SxVdRecord();
	};

}

}

}

}
