#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Array.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#define STATIC_PLSRECORD() 

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
	class PLSRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 PLSRecord();
			void SetPls(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> pls);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
		public:
			virtual ~PLSRecord();
	};

}

}

}
