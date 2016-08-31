#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
#define STATIC_BLANKRECORD() 

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
	class BlankRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::UInt16 row;
			Aspose::Cells::System::UInt16 column;
			Aspose::Cells::System::UInt16 xfIndex;
	public:

			 BlankRecord(Aspose::Cells::System::UInt16 row , Aspose::Cells::System::UInt16 column , Aspose::Cells::System::UInt16 xfIndex);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
			 BlankRecord();
		public:
			virtual ~BlankRecord();
	};

}

}

}
