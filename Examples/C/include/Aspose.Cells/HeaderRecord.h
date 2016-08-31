#pragma once
//#include "System/Array.h"
#include "System/Array2D.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Byte.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "System/Array1D.h"
#define STATIC_HEADERRECORD() 

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
	class HeaderRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 HeaderRecord(bool isHeader);
			void Set(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> scripts);
			 virtual void WriteRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> outStream);
			 HeaderRecord();
		public:
			virtual ~HeaderRecord();
	};

}

}

}
