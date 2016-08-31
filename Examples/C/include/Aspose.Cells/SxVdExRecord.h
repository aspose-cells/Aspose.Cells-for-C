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
#define STATIC_SXVDEXRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxVDEx;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxVdExRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxVdExRecord();
			void SetSxVDEx(intrusive_ptr<Aspose::Cells::Pivot::SxVDEx> sxVdEx);
		public:
			virtual ~SxVdExRecord();
	};

}

}

}

}
