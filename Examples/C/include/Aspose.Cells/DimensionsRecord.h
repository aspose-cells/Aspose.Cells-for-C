#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "BIFFRecord.h"
#include "System/UInt16.h"
#define STATIC_DIMENSIONSRECORD() 

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
	class DimensionsRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 startRow;
			Aspose::Cells::System::Int32 endRow;
			Aspose::Cells::System::UInt16 startColumn;
			Aspose::Cells::System::UInt16 endColumn;
	public:

			 DimensionsRecord();
			void SetDimensions(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::UInt16 startColumn , Aspose::Cells::System::UInt16 endColumn);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
		public:
			virtual ~DimensionsRecord();
	};

}

}

}
