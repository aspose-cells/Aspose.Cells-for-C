#pragma once
#include "System/Object.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBCELLBLANKRECORD() 

namespace Aspose {
namespace Cells {
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbCellBlankRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbCellBlankRecord();
			void SetCell(bool isCell , intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> map);
		public:
			virtual ~XlsbCellBlankRecord();
	};

}

}

}

}
