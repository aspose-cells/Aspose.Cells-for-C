#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_NAMERECORD() 

namespace Aspose {
namespace Cells {
class Name;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class NameRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 NameRecord(intrusive_ptr<Aspose::Cells::Name> name);
			 NameRecord();
		public:
			virtual ~NameRecord();
	};

}

}

}
