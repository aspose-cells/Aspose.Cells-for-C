#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Byte.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/Int32.h"
#define STATIC_SORTRECORD() 

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
	class SortRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> dimensions;
	public:

			 SortRecord();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetDimensions();
			void SetDimensions(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
		public:
			virtual ~SortRecord();
	};

}

}

}
