#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "BIFFRecord.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_FEATRECORD() 

namespace Aspose {
namespace Cells {
class ErrorCheckOption;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class FeatRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 FeatRecord();
			void Set(intrusive_ptr<Aspose::Cells::ErrorCheckOption> options);
		public:
			virtual ~FeatRecord();
	};

}

}

}
