#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_EXTERNNAMERECORD() 

namespace Aspose {
namespace Cells {
class ExternName;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class ExternNameRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 ExternNameRecord();
			void SetExternName(intrusive_ptr<Aspose::Cells::ExternName> externName);
		public:
			virtual ~ExternNameRecord();
	};

}

}

}
