#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_PLVRECORD() 

namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class PLVRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 PLVRecord();
			void SetOptions(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
		public:
			virtual ~PLVRecord();
	};

}

}

}
