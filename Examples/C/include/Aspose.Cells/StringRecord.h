#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_STRINGRECORD() 

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
	class StringRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			bool IsCompressed;
			Aspose::Cells::System::Int32 SizeOfChars;
	public:

			 StringRecord(intrusive_ptr<Aspose::Cells::System::String> stringValue);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			 StringRecord();
		public:
			virtual ~StringRecord();
	};

}

}

}
