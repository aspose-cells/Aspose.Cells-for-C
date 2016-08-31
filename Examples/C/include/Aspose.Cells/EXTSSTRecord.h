#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
#include "System/Int16.h"
//#include "System/UInt32.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_EXTSSTRECORD() 

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
	class EXTSSTRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int16 groupSize;
	public:

			 EXTSSTRecord();
			void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groups);
		public:
			virtual ~EXTSSTRecord();
	};

}

}

}
