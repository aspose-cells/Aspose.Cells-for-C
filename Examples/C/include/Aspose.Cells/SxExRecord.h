#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_SXEXRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxEX;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxExRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
			void ToBin();
	public:

			intrusive_ptr<Aspose::Cells::Pivot::SxEX> sxEx;
			 SxExRecord(intrusive_ptr<Aspose::Cells::Pivot::SxEX> sxEx);
			void Init();
			 SxExRecord();
		public:
			virtual ~SxExRecord();
	};

}

}

}

}
