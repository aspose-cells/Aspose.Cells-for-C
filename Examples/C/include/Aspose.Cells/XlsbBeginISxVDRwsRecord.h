#pragma once
//#include "System/Collections/ArrayList.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
#include "System/Int32.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINISXVDRWSRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFieldCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginISxVDRwsRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginISxVDRwsRecord(Aspose::Cells::System::Int32 id , intrusive_ptr<Aspose::Cells::Pivot::PivotFieldCollection> pivotFields);
			 XlsbBeginISxVDRwsRecord();
		public:
			virtual ~XlsbBeginISxVDRwsRecord();
	};

}

}

}

}
