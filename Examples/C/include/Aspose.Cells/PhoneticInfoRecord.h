#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_PHONETICINFORECORD() 

namespace Aspose {
namespace Cells {
class PhoneticInfo;
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class PhoneticInfoRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 PhoneticInfoRecord();
			void WriteRecord(intrusive_ptr<Aspose::Cells::PhoneticInfo> info , intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
		public:
			virtual ~PhoneticInfoRecord();
	};

}

}

}
