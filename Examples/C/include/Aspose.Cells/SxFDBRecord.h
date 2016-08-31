#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_SXFDBRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFDB;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxFDBRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			bool IsFullDateTimes(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> data);
	public:

			 SxFDBRecord(intrusive_ptr<Aspose::Cells::Pivot::SxFDB> sxFdb);
			 SxFDBRecord();
		public:
			virtual ~SxFDBRecord();
	};

}

}

}

}
