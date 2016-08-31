#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
#define STATIC_AUTOFILTER12RECORD() 

namespace Aspose {
namespace Cells {
class FilterColumn;
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
	class AutoFilter12Record : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Record::BIFFRecord*>> subRecords;
			Aspose::Cells::System::Int32 WriteHeader(intrusive_ptr<Aspose::Cells::FilterColumn> filter);
	public:

			 AutoFilter12Record();
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void SetMultiFilter(intrusive_ptr<Aspose::Cells::FilterColumn> filter);
		public:
			virtual ~AutoFilter12Record();
	};

}

}

}
