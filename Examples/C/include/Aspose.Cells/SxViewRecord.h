#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/UInt16.h"
#include "System/Object.h"
#include "BIFFRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
#include "System/Int32.h"
//#include "System/String.h"
#include "System/Array1D.h"
#define STATIC_SXVIEWRECORD() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class SxView;
}
}
}

namespace Aspose {
namespace Cells {
namespace Pivot {
namespace Record {
	class SxViewRecord : public Aspose::Cells::Record::BIFFRecord
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Pivot::SxView> sxView;
			 SxViewRecord(intrusive_ptr<Aspose::Cells::Pivot::SxView> sxView);
			Aspose::Cells::System::Int32 WriteCellAreaToBin(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::CellArea> ca);
			void ToBin();
			 SxViewRecord();
		public:
			virtual ~SxViewRecord();
	};

}

}

}

}
