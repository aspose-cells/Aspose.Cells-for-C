#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Boxing.h"
#include "ErrorType.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBEXTERNCELLERRORRECORD() 

namespace Aspose {
namespace Cells {
class ExternalCell;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbExternCellErrorRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbExternCellErrorRecord();
			void SetExternCell(intrusive_ptr<Aspose::Cells::ExternalCell> cell);
			static Aspose::Cells::System::Byte ToErrorValue(Aspose::Cells::ErrorType type);
		public:
			virtual ~XlsbExternCellErrorRecord();
	};

}

}

}

}
