#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBEGINAUTOFILTERRECORD() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginAutoFilterRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginAutoFilterRecord(intrusive_ptr<Aspose::Cells::CellArea> area);
			 XlsbBeginAutoFilterRecord();
		public:
			virtual ~XlsbBeginAutoFilterRecord();
	};

}

}

}

}
