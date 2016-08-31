#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/Collections/ArrayList.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_SXFILTRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxFilt;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxFiltRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxFiltRecord(intrusive_ptr<Aspose::Cells::Pivot::SxFilt> filt);
			 SxFiltRecord();
		public:
			virtual ~SxFiltRecord();
	};

}

}

}

}
