#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_BIGNAMERECORD() 

namespace Aspose {
namespace Cells {
namespace Properties {
class CustomProperty;
}
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
	class BigNameRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 totalLength;
	public:

			static Aspose::Cells::System::Int32 OpenCounter;
			 BigNameRecord(intrusive_ptr<Aspose::Cells::Properties::CustomProperty> property);
			void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
			 BigNameRecord();
		public:
			virtual ~BigNameRecord();
	};

}

}

}
