#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Boxing.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
#include "BIFFRecord.h"
#define STATIC_EXTERNSHEETRECORD() 

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
	class ExternsheetRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ExternsheetRecord();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> dataList;
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
		public:
			virtual ~ExternsheetRecord();
	};

}

}

}
