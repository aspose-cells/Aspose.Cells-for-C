#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
#define STATIC_SXDIRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxDI;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxDiRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			 SxDiRecord();
			void SetPivotField(intrusive_ptr<Aspose::Cells::Pivot::SxDI> sxDi);
		public:
			virtual ~SxDiRecord();
	};

}

}

}

}
