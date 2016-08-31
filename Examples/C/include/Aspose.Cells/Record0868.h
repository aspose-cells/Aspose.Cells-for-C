#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Text/Encoding.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_RECORD0868() 

namespace Aspose {
namespace Cells {
class ProtectedRange;
}
}

namespace Aspose {
namespace Cells {
namespace Record {
	class Record0868 : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 Record0868();
			void SetEditRange(intrusive_ptr<Aspose::Cells::ProtectedRange> range);
		public:
			virtual ~Record0868();
	};

}

}

}
